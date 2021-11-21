using System;
using System.Collections.Generic;
using System.Linq;

namespace Sample.TreeNode{
    public class treeNode{
        public int val;
        public treeNode left;
        public treeNode right;
        public treeNode(int val=0,treeNode left=null,treeNode right=null){
            this.val = val;
            this.left = left;
            this.right = right;
        }
        public static treeNode treeNode_fromList2(string[] nums){
            if (nums.Length==0) return null;
            Queue<treeNode> q = new Queue<treeNode>();
            treeNode result = new treeNode(Int32.Parse(nums[0]));
            treeNode tmp = result;
            q.Enqueue(tmp);
            for (int i=1;i<nums.Length;i++){
                if (i%2==1){
                    tmp = q.Dequeue();
                    if (nums[i]!="None"){
                        tmp.left = new treeNode(Int32.Parse(nums[i]));
                        q.Enqueue(tmp.left);
                    }
                } else {
                    if (nums[i]!="None"){
                        tmp.right = new treeNode(Int32.Parse(nums[i]));
                        q.Enqueue(tmp.right);
                    }
                }
            }
            return result;
        }
        public static string[] treeNode2List(treeNode node){
            Queue<treeNode> q = new Queue<treeNode>();
            treeNode tmp = new treeNode();
            q.Enqueue(node);
            List<string> ls = new List<string>();
            while (q.Count != 0){
                tmp = q.Dequeue();
                if (tmp!=null){
                    ls.Add(tmp.val.ToString());
                } else {ls.Add("None");}
                if (tmp!=null){
                    q.Enqueue(tmp.left);
                    q.Enqueue(tmp.right);
                }
            }
            for (int i=ls.Count-1;i>=0;i--){
                if (ls[i]=="None"){
                    ls.RemoveAt(ls.Count-1);
                } else {break;}
            }
            string[] result = ls.ToArray();
            return result;
        }
        public static void printVecStr(string[] nums){
            for (int i=0;i<nums.Length;i++){
                Console.Write(nums[i]+" ");
            }
            Console.WriteLine("");
        }
    }
}