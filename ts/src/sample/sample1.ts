class Solution {
  constructor(public int1: number, public int2: number) {}

  soln1(): number {
    return this.int1 + this.int2;
  }

  static soln2(int1: number, int2: number): number {
    return int1 + int2;
  }
}

class Solution1 extends Solution {
  soln1() {
    return this.int1 * this.int2;
  }
}

const testFunc = (a: number, b: number): number => {
  return a * b;
};

if (require.main === module) {
  let ob = new Solution(2, 3);
  console.log(ob.soln1());

  console.log(Solution.soln2(4, 10));
}

export { Solution, Solution1, testFunc };
