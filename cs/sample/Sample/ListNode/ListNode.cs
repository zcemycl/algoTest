using System;
using System.Collections.Generic;
using System.Linq;

namespace Sample.ListNode{
    public class listNode{
        public int val;
        public listNode next;
        public listNode(int val=0,listNode next=null){
            this.val = val;
            this.next = next;
        }
        public static string strForm(int val,string s,string mode="reverse"){
            if (mode=="reverse") return val.ToString()+s;
            else return s+val.ToString();
        }
        public static string printListNode(listNode l,string mode="reverse"){
            string printStr = "";
            while (l!=null){
                int tmp = l.val;
                printStr = listNode.strForm(tmp,printStr,mode);
                l = l.next;
            }
            return printStr;
        }
        public static listNode listNode_fromStr(string s){
            listNode result = new listNode();
            listNode tmp = result;
            foreach (char c in s){
                int tmpint = (int)Char.GetNumericValue(c);
                tmp.next = new listNode(tmpint);
                tmp = tmp.next;
            }
            return result.next;
        }
        public static listNode listNode_fromStrReverse(string s){
            int i=0;
            listNode result = new listNode((int)Char.GetNumericValue(s[0]));
            listNode prev = result;
            foreach (char c in s.Skip(1)){
                int tmpint = (int)Char.GetNumericValue(c);
                result = new listNode(tmpint,prev);
                prev = result;
                i+=1;
            }
            return result;
        }
    }
}