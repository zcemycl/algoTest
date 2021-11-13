using System;
using System.Collections.Generic;

namespace Sample.ReverseInt{
    public class reverseInt{
        public static int naive(int x){
            int newX = 0;
            while (x!=0){
                int remain = x%10;
                x/=10;
                newX=newX*10+remain;
                if (newX>Int32.MaxValue/10 || (newX==Int32.MaxValue/10 && remain>7))
                    return 0;
                if (newX<Int32.MinValue/10 || (newX==Int32.MinValue/10 && remain<-8))
                    return 0;
            }
            return newX;
        }
    }
}
