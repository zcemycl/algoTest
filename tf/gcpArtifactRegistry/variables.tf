variable "gcp_region" {
  type        = string
  description = "Region to use for GCP provider"
  default     = "europe-west2"
}

variable "gcp_project" {
  type        = string
  description = "Project to use for GCP provider"
}
