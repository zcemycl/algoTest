const {Solution,testFunc,Solution1} = require('../../src/sample/sample1');
const assert = require('assert');

describe('Simple test suite:', function() {
    it('static solution soln2 adds 1 to 10', function() {
        assert(Solution.soln2(1,10) === 11);
    });
    it('solution soln1 adds 2 to 3', ()=>{
        var s = new Solution(2,3);
        assert(s.soln1() === 5);
    });
    it('testFunc multiply', ()=>{
        assert(testFunc(2,10) === 20);
    });
    it('solution1 soln1 multiply 2 to 3', ()=>{
        var s = new Solution1(2,3);
        assert(s.soln1() === 6);
    });
});