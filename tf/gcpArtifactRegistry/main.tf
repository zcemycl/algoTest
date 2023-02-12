terraform {
  required_providers {
    google = {
      source  = "hashicorp/google"
      version = "~>4.0"
    }
  }
}

provider "google" {
  region  = var.gcp_region
  project = var.gcp_project
}

resource "google_artifact_registry_repository" "leo-test-gcr" {
  location      = "europe-west2"
  repository_id = "leotestgcr"
  format        = "DOCKER"
  description   = "Leo Testing Google Container Registry"
}