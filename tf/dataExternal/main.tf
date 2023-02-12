resource "null_resource" "sleep" {
  provisioner "local-exec" {
    command = "sleep 5"
  }
}

data "external" "owner_tag_generator" {
  program = ["bash", "weird.sh"]

  depends_on = [
    null_resource.sleep
  ]
}

module "random" {
  source     = "./modules/random"
  store_name = data.external.owner_tag_generator.result.username
}