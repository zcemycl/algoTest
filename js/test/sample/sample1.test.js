const {Solution} = require('../../src/sample/sample1');
// const {describe} = require('mocha');
const assert = require('assert');

describe('Simple test suite:', function() {
    it('static solution soln2 adds 1 to 10', function() {
        assert(Solution.soln2(1,10) === 11);
    });
});