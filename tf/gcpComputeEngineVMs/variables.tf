variable "gcp_region" {
  type        = string
  description = "Region to use for GCP provider"
  default     = "europe-west2"
}

variable "gcp_project" {
  type        = string
  description = "Project to use for GCP provider"
}

variable "ssh_user" {
  type        = string
  description = "Username to use for SSH provider"
  default     = "gcpuser"
}

variable "ssh_public_key" {
  type        = string
  description = "Public key to use for SSH provider"
  default     = "./gcpuser.pub"
}

variable "startup_script" {
  type        = string
  description = "Script to use for starting up server"
  default     = "startup_script.sh"
}