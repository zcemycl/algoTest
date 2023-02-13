output "eks_cluster_iam_arn" {
  value = aws_iam_role.eks-cluster.arn
}

# output "eks_nodes_iam_arn" {
#   value = aws_iam_role.nodes.arn
# }