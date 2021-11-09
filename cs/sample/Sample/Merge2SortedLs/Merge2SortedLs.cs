using System;   
using System.Collections.Generic;
using Sample.ListNode; 

namespace Sample.Merge2SortedLs{
    public class merge2SortedLs{
        public static listNode recursive(listNode l1,listNode l2){
            if (l1==null && l2==null) return null;
            if (l1==null){
                return l2;
            } else if (l2==null){
                return l1;
            } else if (l1.val>l2.val){
                l1.next = merge2SortedLs.recursive(l1.next,l2);
                return l1;
            } else {
                l2.next = merge2SortedLs.recursive(l1,l2.next);
                return l2;
            }
        }
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
            listNode result = null;
            foreach (char c in s){
                int tmp = (int)Char.GetNumericValue(c);
                result = new listNode(tmp,prev);
                prev = result;
            }
            return result;
        }
    }
}