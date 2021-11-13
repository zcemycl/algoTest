using System;
using System.Collections.Generic;
using Sample.ListNode;

namespace Sample.ConvertBinaryLinkedList2Int{
    public class convertBinaryLinkedList2Int{
        public static int naive(listNode l){
            int result = 0;
            while (l!=null){
                result = result*2+l.val;
                l = l.next;
            }
            return result;
        }
    }
}
