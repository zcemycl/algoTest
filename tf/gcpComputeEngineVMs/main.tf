terraform {
  required_providers {
    google = {
      source  = "hashicorp/google"
      version = "~>3.0"
    }
  }
}

provider "google" {
  region  = var.gcp_region
  project = var.gcp_project
}

data "google_compute_zones" "availability_zones" {

}

resource "google_compute_address" "static" {
  name = "apache"
}

resource "google_compute_instance" "apache" {
  name = "apache"
  zone = data.google_compute_zones.availability_zones.names[0]
  tags = ["allow-http", "allow-ssh"]

  machine_type = "e2-micro"

  boot_disk {
    initialize_params {
      image = "ubuntu-os-cloud/ubuntu-1804-lts"
    }
  }

  network_interface {
    network = "default"

    access_config {
      nat_ip = google_compute_address.static.address
    }
  }

  metadata = {
    ssh-keys = "${var.ssh_user}:${file(var.ssh_public_key)}"
  }

  metadata_startup_script = file("${var.startup_script}")
}

resource "google_compute_firewall" "allow_http" {
  name    = "allow-http-rule"
  network = "default"

  allow {
    ports    = ["80"]
    protocol = "tcp"
  }

  target_tags = ["allow-http"]

  priority = 1000
}

resource "google_compute_firewall" "ssh-rule" {
  name    = "allow-ssh-rule"
  network = "default"

  allow {
    ports    = ["22"]
    protocol = "tcp"
  }

  target_tags   = ["allow-ssh"]
  source_ranges = ["0.0.0.0/0"]
}