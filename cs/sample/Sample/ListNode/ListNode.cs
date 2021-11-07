using System;
using System.Collections.Generic;

namespace Sample.ListNode{
    public class listNode{
        public int val;
        public listNode next;
        public listNode(int val=0,listNode next=null){
            this.val = val;
            this.next = next;
        }
    }
}