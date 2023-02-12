resource "aws_cognito_user_pool" "pool" {
  name = var.user_pool_name

  deletion_protection = var.deletion_protect

  user_attribute_update_settings {
    attributes_require_verification_before_update = ["email"]
  }


  email_configuration {
    email_sending_account = "COGNITO_DEFAULT"
  }

  password_policy {
    minimum_length                   = 8
    require_lowercase                = true
    require_numbers                  = true
    require_symbols                  = true
    require_uppercase                = true
    temporary_password_validity_days = 7
  }

  account_recovery_setting {
    recovery_mechanism {
      name     = "verified_email"
      priority = 1
    }
  }

  admin_create_user_config {
    allow_admin_create_user_only = false
  }

  verification_message_template {
    default_email_option = "CONFIRM_WITH_LINK"
  }

  username_attributes      = ["email"]
  auto_verified_attributes = ["email"]
}

resource "aws_cognito_user_pool_client" "client" {
  name = var.user_pool_client_name

  user_pool_id = aws_cognito_user_pool.pool.id

  generate_secret = false

  explicit_auth_flows = [
    "ALLOW_CUSTOM_AUTH",
    "ALLOW_USER_SRP_AUTH",
    "ALLOW_REFRESH_TOKEN_AUTH"
  ]

  enable_token_revocation       = true
  prevent_user_existence_errors = "ENABLED"

}

resource "aws_cognito_user_pool_domain" "domain" {
  domain       = var.user_pool_domain
  user_pool_id = aws_cognito_user_pool.pool.id
}
