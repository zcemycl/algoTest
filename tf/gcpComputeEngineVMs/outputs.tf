output "public_ip_address" {
  value = google_compute_address.static.address
}