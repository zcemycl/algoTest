class Solution{
    constructor(int1,int2){
        this.int1 = int1;
        this.int2 = int2;
    }
    static soln2(int1,int2){
        return int1+int2;
    }
}


if (require.main === module) {
    console.log(Solution.soln2(1,10));
}

module.exports = {
    Solution:Solution
}