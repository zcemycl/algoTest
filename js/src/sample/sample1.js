class Solution{
    constructor(int1,int2){
        this.int1 = int1;
        this.int2 = int2;
    }
    soln1(){
        return this.int1+this.int2;
    }
    static soln2(int1,int2){
        return int1+int2;
    }
}

class Solution1 extends Solution{
    soln1(){
        return this.int1*this.int2;
    }
}

const testFunc = (a,b) => {
    return a*b;
}

if (require.main === module) {
    var s = new Solution(2,3);
    var s1= new Solution1(2,3);
    console.log(s.soln1());
    console.log(s1.soln1());
    console.log(Solution.soln2(1,10));
    console.log(testFunc(10,20));
}

module.exports = {
    Solution:Solution,
    testFunc:testFunc,
    Solution1:Solution1,
}