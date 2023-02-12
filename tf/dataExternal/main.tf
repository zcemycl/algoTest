data "external" "owner_tag_generator" {
  program = ["bash", "weird.sh"]
}

module "random" {
    source = "./modules/random"
    store_name = data.external.owner_tag_generator.result.username
}