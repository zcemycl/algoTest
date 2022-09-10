import {describe, expect, test} from '@jest/globals';
import {Solution, Solution1,testFunc} from '../../src/sample/sample1';

describe('Simple test suite:', () => {
    test('expect number addition only', () => {
        let s = new Solution(10,20);
        expect(s.soln1()).toBe(30);
    })
    test('expect number addition only static', () => {
        expect(Solution.soln2(10,20)).toBe(30);
    })
    test('expect number multiply only', () => {
        let s = new Solution1(10,20);
        expect(s.soln1()).toBe(200);
    })
    test('expect number multiply function only', () => {
        expect(testFunc(10,20)).toBe(200);
    })
})