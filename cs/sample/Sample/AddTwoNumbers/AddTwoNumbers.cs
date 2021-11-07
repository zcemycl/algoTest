using System;
using System.Collections.Generic;
using Sample.ListNode;

namespace Sample.AddTwoNumbers{
    public class addTwoNumbers{
        public static string printListNode(listNode l){
            string result = "";
            while (l != null){
                result = l.val.ToString()+result;
                l = l.next;
            }
            return result;
        }

        public static listNode listNode_fromStr(string s){
            listNode prev = null;
            listNode result = new listNode();
            foreach (char c in s){
                int tmp = (int)Char.GetNumericValue(c);
                result = new listNode(tmp,prev);
                prev = result;
            }
            return result;
        }
        public static listNode naive(listNode l1,listNode l2){
            listNode l3 = new listNode();
            listNode tmp = l3;
            int s=0,r=0,val1=0,val2=0;
            while (l1!=null || l2!=null || s>0){
                val1 = l1!=null?l1.val:0;
                val2 = l2!=null?l2.val:0;
                int total = val1+val2+s;
                s = total/10;
                r = total%10;
                tmp.next = new listNode(r);
                tmp = tmp.next;
                l1 = l1!=null?l1.next:null;
                l2 = l2!=null?l2.next:null;
            }

            return l3.next;
        }
    }
}