# Algorithm Tests [![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
The repo is about transitioning from Python to C family programming. It implements algorithms with C++(Cmake), C#(dotnet) and Python(pip), and test them with gtest, Xunits and pytest respectively. To ensure the code quality, it deploys testings via github actions.

## Structures
```
algoTest 
├── cpp [C++] 
│   └── example (Leetcode c++ questions)
│       ├── build (from configure.sh)
│       ├── lib (google tests placeholder)
│       ├── src (solutions)
│       └── tst (test scripts)
├── cs [C#] 
│   └── sample (Leetcode c# questions)
│       ├── Sample (solutions)
│       └── Sample.Tests (test scripts)
├── py [Python3] 
│   ├── solns (solutions)
│   └── tests (test scripts)
├── sh [Shell] 
└── sql [SQL] 
```

## How to start?
- For C++ questions, change directory to `cpp/example`, and then run
```
./init.sh questionName # to initiate a template
./configure.sh # for cmake and debug
./del.sh questionName # to delete the question
```
- Similarily for C#, change directory to `cs/sample`, 
```
./init.sh questionName # to initiate a template
./del.sh questionName # to delete the question
dotnet build
dotnet run
```
- Similarily for Python3, change directory to `py`,
```
./init.sh questionName # to initiate a template
./del.sh questionName # to delete the question
pytest
```
- To operate on same question with all languages, 
```
./initAll.sh questionName
./delAll.sh questionName
```

## Contents 
:shipit: : Solution | :heavy_check_mark: : Test | Click on Icon to read the code.

### Stanford Algorithm Courses
<details open>
  <summary>Click to expand!</summary>
  
||Tasks|C++|C#|Python|Topics|
|---|---|---|---|---|---|
||Karatsuba Multiplication|[:shipit:](cpp/example/src/KaratsubaMultiply/karatsubaMultiply.cpp) [:heavy_check_mark:](cpp/example/tst/KaratsubaMultiply/KaratsubaMultiply-test.cpp)|||Divide and Conquer|
||Bubble Sort|[:shipit:](cpp/example/src/BubbleSort/bubbleSort.cpp) [:heavy_check_mark:](cpp/example/tst/BubbleSort/BubbleSort-test.cpp)|[:shipit:](cs/sample/Sample/BubbleSort/BubbleSort.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/BubbleSort/testBubbleSort.cs)|[:shipit:](py/solns/bubbleSort/bubbleSort.py) [:heavy_check_mark:](py/tests/testBubbleSort/test_BubbleSort.py)|Sorting Algorithm|
||Merge Sort|[:shipit:](cpp/example/src/MergeSort/mergeSort.cpp) [:heavy_check_mark:](cpp/example/tst/MergeSort/MergeSort-test.cpp)|[:shipit:](cs/sample/Sample/MergeSort/MergeSort.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/MergeSort/testMergeSort.cs)|[:shipit:](py/solns/mergeSort/mergeSort.py) [:heavy_check_mark:](py/tests/testMergeSort/test_MergeSort.py)|Sorting Algorithm, Divide and Conquer|
||Count Inversions|[:shipit:](cpp/example/src/CountInversions/countInversions.cpp) [:heavy_check_mark:](cpp/example/tst/CountInversions/CountInversions-test.cpp)||[:shipit:](py/solns/countInversions/countInversions.py) [:heavy_check_mark:](py/tests/testCountInversions/test_CountInversions.py)|Divide and Conquer|
||Quick Sort|[:shipit:](cpp/example/src/QuickSort/quickSort.cpp) [:heavy_check_mark:](cpp/example/tst/QuickSort/QuickSort-test.cpp)||[:shipit:](py/solns/quickSort/quickSort.py) [:heavy_check_mark:](py/tests/testQuickSort/test_QuickSort.py)|Sorting Algorithm, Divide and Conquer|
||N-th Order Statistics|[:shipit:](cpp/example/src/OrderStats/orderStats.cpp) [:heavy_check_mark:](cpp/example/tst/OrderStats/OrderStats-test.cpp)|||Divide and Conquer, Randomized Algorithm|
||Minimum Cuts|[:shipit:](cpp/example/src/CountMinCuts/countMinCuts.cpp) [:heavy_check_mark:](cpp/example/tst/CountMinCuts/CountMinCuts-test.cpp)||[:shipit:](py/solns/countMinCuts/countMinCuts.py) [:heavy_check_mark:](py/tests/testCountMinCuts/test_CountMinCuts.py)|Graph, Randomized Algorithm|
||Breadth First Search|[:shipit:](cpp/example/src/Bfs/bfs.cpp) [:heavy_check_mark:](cpp/example/tst/Bfs/Bfs-test.cpp)||[:shipit:](py/solns/bfs/bfs.py) [:heavy_check_mark:](py/tests/testBfs/test_Bfs.py)|Graph, BFS, Queue|
||Shortest Paths|||[:shipit:](py/solns/bfsShortestPaths/bfsShortestPaths.py) [:heavy_check_mark:](py/tests/testBfsShortestPaths/test_BfsShortestPaths.py)|Graph, BFS|
||Undirected Connectivity|||[:shipit:](py/solns/bfsConnectivity/bfsConnectivity.py) [:heavy_check_mark:](py/tests/testBfsConnectivity/test_BfsConnectivity.py)|Undirected Graph, BFS|
||Depth First Search|||[:shipit:](py/solns/dfs/dfs.py) [:heavy_check_mark:](py/tests/testDfs/test_Dfs.py)|Graph, DFS|
||Topological Sort|||[:shipit:](py/solns/topologicalSort/topologicalSort.py) [:heavy_check_mark:](py/tests/testTopologicalSort/test_TopologicalSort.py)|Directed Acyclic Graph, DFS|
||Strongly Connected Components||||Directed Graph, DFS|
  
</details>

### Leetcode
<details open>
  <summary>Click to expand!</summary>
  
||Tasks|C++|C#|Python|Topics|
|---|---|---|---|---|---|
||ListNode|[:shipit:](cpp/example/src/ListNode/listNode.cpp) [:heavy_check_mark:](cpp/example/tst/ListNode/ListNode-test.cpp)|[:shipit:](cs/sample/Sample/ListNode/ListNode.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/ListNode/testListNode.cs)||Linked List|
||TreeNode|[:shipit:](cpp/example/src/TreeNode/treeNode.cpp) [:heavy_check_mark:](cpp/example/tst/TreeNode/TreeNode-test.cpp)|[:shipit:](cs/sample/Sample/TreeNode/TreeNode.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/TreeNode/testTreeNode.cs)|[:shipit:](py/solns/treeNode/treeNode.py) [:heavy_check_mark:](py/tests/testTreeNode/test_TreeNode.py)|Tree|
||Graph|[:shipit:](cpp/example/src/Graph/graph.cpp) [:heavy_check_mark:](cpp/example/tst/Graph/Graph-test.cpp)|[:shipit:](cs/sample/Sample/Graph/Graph.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/Graph/testGraph.cs)|[:shipit:](py/solns/graph/graph.py) [:heavy_check_mark:](py/tests/testGraph/test_Graph.py)|Graph (Directed, Undirected)|
|1*|Two Sum|[:shipit:](cpp/example/src/TwoSum/twoSum.cpp) [:heavy_check_mark:](cpp/example/tst/TwoSum/TwoSum-test.cpp)|[:shipit:](cs/sample/Sample/TwoSum/TwoSum.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/TwoSum/testTwoSum.cs)|[:shipit:](py/solns/twoSum/twoSum.py) [:heavy_check_mark:](py/tests/testTwoSum/test_TwoSum.py)|Array, Hash map|
|2|Add Two Numbers|[:shipit:](cpp/example/src/AddTwoNumbers/addTwoNumbers.cpp) [:heavy_check_mark:](cpp/example/tst/AddTwoNumbers/AddTwoNumbers-test.cpp)|[:shipit:](cs/sample/Sample/AddTwoNumbers/AddTwoNumbers.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/AddTwoNumbers/testAddTwoNumbers.cs)|[:shipit:](py/solns/addTwoNumbers/addTwoNumbers.py) [:heavy_check_mark:](py/tests/testAddTwoNumbers/test_AddTwoNumbers.py)|Linked List|
|3|Length of Longest Substring|[:shipit:](cpp/example/src/LengthOfLongestSubString/lengthOfLongestSubString.cpp) [:heavy_check_mark:](cpp/example/tst/LengthOfLongestSubString/LengthOfLongestSubString-test.cpp)|[:shipit:](cs/sample/Sample/LengthOfLongestSubString/LengthOfLongestSubString.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/LengthOfLongestSubString/testLengthOfLongestSubString.cs)|[:shipit:](py/solns/lengthOfLongestSubString/lengthOfLongestSubString.py) [:heavy_check_mark:](py/tests/testLengthOfLongestSubString/test_LengthOfLongestSubString.py)||
|7|Reverse Integer|[:shipit:](cpp/example/src/ReverseInt/reverseInt.cpp) [:heavy_check_mark:](cpp/example/tst/ReverseInt/ReverseInt-test.cpp)|[:shipit:](cs/sample/Sample/ReverseInt/ReverseInt.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/ReverseInt/testReverseInt.cs)|[:shipit:](py/solns/reverseInt/reverseInt.py) [:heavy_check_mark:](py/tests/testReverseInt/test_ReverseInt.py)||
|9|Palindrome Number|[:shipit:](cpp/example/src/IsPalindrome/isPalindrome.cpp) [:heavy_check_mark:](cpp/example/tst/IsPalindrome/IsPalindrome-test.cpp)|[:shipit:](cs/sample/Sample/IsPalindrome/IsPalindrome.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/IsPalindrome/testIsPalindrome.cs)|[:shipit:](py/solns/isPalindrome/isPalindrome.py) [:heavy_check_mark:](py/tests/testIsPalindrome/test_IsPalindrome.py)||
|11*|Container With Most Water|[:shipit:](cpp/example/src/ContainerWithMostH2O/containerWithMostH2O.cpp) [:heavy_check_mark:](cpp/example/tst/ContainerWithMostH2O/ContainerWithMostH2O-test.cpp)|[:shipit:](cs/sample/Sample/ContainerWithMostH2O/ContainerWithMostH2O.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/ContainerWithMostH2O/testContainerWithMostH2O.cs)|[:shipit:](py/solns/containerWithMostH2O/containerWithMostH2O.py) [:heavy_check_mark:](py/tests/testContainerWithMostH2O/test_ContainerWithMostH2O.py)|Array, Pointer|
|13|Roman to Integer|[:shipit:](cpp/example/src/Roman2Int/roman2Int.cpp) [:heavy_check_mark:](cpp/example/tst/Roman2Int/Roman2Int-test.cpp)|[:shipit:](cs/sample/Sample/Roman2Int/Roman2Int.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/Roman2Int/testRoman2Int.cs)|[:shipit:](py/solns/roman2Int/roman2Int.py) [:heavy_check_mark:](py/tests/testRoman2Int/test_Roman2Int.py)||
|15*|3Sum|||[:shipit:](py/solns/threeSum/threeSum.py) [:heavy_check_mark:](py/tests/testThreeSum/test_ThreeSum.py)|Array, Binary Search|
|20|Valid Parentheses|[:shipit:](cpp/example/src/ValidParentheses/validParentheses.cpp) [:heavy_check_mark:](cpp/example/tst/ValidParentheses/ValidParentheses-test.cpp)|[:shipit:](cs/sample/Sample/ValidParentheses/ValidParentheses.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/ValidParentheses/testValidParentheses.cs)|[:shipit:](py/solns/validParentheses/validParentheses.py) [:heavy_check_mark:](py/tests/testValidParentheses/test_ValidParentheses.py)|Stack, Hashmap, Set|
|21|Merge Two Sorted Lists|[:shipit:](cpp/example/src/Merge2SortedLs/merge2SortedLs.cpp) [:heavy_check_mark:](cpp/example/tst/Merge2SortedLs/Merge2SortedLs-test.cpp)|[:shipit:](cs/sample/Sample/Merge2SortedLs/Merge2SortedLs.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/Merge2SortedLs/testMerge2SortedLs.cs)|[:shipit:](py/solns/merge2SortedLs/merge2SortedLs.py) [:heavy_check_mark:](py/tests/testMerge2SortedLs/test_Merge2SortedLs.py)|Linked List|
|26|Remove Duplicates from Sorted Array|[:shipit:](cpp/example/src/RemoveDuplicatesFromSortedArr/removeDuplicatesFromSortedArr.cpp) [:heavy_check_mark:](cpp/example/tst/RemoveDuplicatesFromSortedArr/RemoveDuplicatesFromSortedArr-test.cpp)|[:shipit:](cs/sample/Sample/RemoveDuplicatesFromSortedArr/RemoveDuplicatesFromSortedArr.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/RemoveDuplicatesFromSortedArr/testRemoveDuplicatesFromSortedArr.cs)|[:shipit:](py/solns/removeDuplicatesFromSortedArr/removeDuplicatesFromSortedArr.py) [:heavy_check_mark:](py/tests/testRemoveDuplicatesFromSortedArr/test_RemoveDuplicatesFromSortedArr.py)|Pointers, Inplace Operation|
|27|Remove Element|[:shipit:](cpp/example/src/RmElement/rmElement.cpp) [:heavy_check_mark:](cpp/example/tst/RmElement/RmElement-test.cpp)|[:shipit:](cs/sample/Sample/RmElement/RmElement.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/RmElement/testRmElement.cs)|[:shipit:](py/solns/rmElement/rmElement.py) [:heavy_check_mark:](py/tests/testRmElement/test_RmElement.py)|Pointers, Inplace Operation|
|33*|Search in Rotated Sorted Array|[:shipit:](cpp/example/src/SearchInRotatedSortedArr/searchInRotatedSortedArr.cpp) [:heavy_check_mark:](cpp/example/tst/SearchInRotatedSortedArr/SearchInRotatedSortedArr-test.cpp)|[:shipit:](cs/sample/Sample/SearchInRotatedSortedArr/SearchInRotatedSortedArr.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/SearchInRotatedSortedArr/testSearchInRotatedSortedArr.cs)|[:shipit:](py/solns/searchInRotatedSortedArr/searchInRotatedSortedArr.py) [:heavy_check_mark:](py/tests/testSearchInRotatedSortedArr/test_SearchInRotatedSortedArr.py)|Array|
|39*|Combination Sum|||[:shipit:](py/solns/combinationSum/combinationSum.py) [:heavy_check_mark:](py/tests/testCombinationSum/test_CombinationSum.py)|Recursive, DFS, Backtracking|
|53*|Maximum Subarray|[:shipit:](cpp/example/src/MaxSubarray/maxSubarray.cpp) [:heavy_check_mark:](cpp/example/tst/MaxSubarray/MaxSubarray-test.cpp)|[:shipit:](cs/sample/Sample/MaxSubarray/MaxSubarray.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/MaxSubarray/testMaxSubarray.cs)|[:shipit:](py/solns/maxSubarray/maxSubarray.py) [:heavy_check_mark:](py/tests/testMaxSubarray/test_MaxSubarray.py)|Array|
|66|Plus One|[:shipit:](cpp/example/src/PlusOne/plusOne.cpp) [:heavy_check_mark:](cpp/example/tst/PlusOne/PlusOne-test.cpp)|[:shipit:](cs/sample/Sample/PlusOne/PlusOne.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/PlusOne/testPlusOne.cs)|[:shipit:](py/solns/plusOne/plusOne.py) [:heavy_check_mark:](py/tests/testPlusOne/test_PlusOne.py)||
|69|Sqrtx|[:shipit:](cpp/example/src/Sqrtx/sqrtx.cpp) [:heavy_check_mark:](cpp/example/tst/Sqrtx/Sqrtx-test.cpp)|[:shipit:](cs/sample/Sample/Sqrtx/Sqrtx.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/Sqrtx/testSqrtx.cs)|[:shipit:](py/solns/sqrtx/sqrtx.py) [:heavy_check_mark:](py/tests/testSqrtx/test_Sqrtx.py)|Binary Search|
|70*|Climbing Stairs|[:shipit:](cpp/example/src/ClimbingStairs/climbingStairs.cpp) [:heavy_check_mark:](cpp/example/tst/ClimbingStairs/ClimbingStairs-test.cpp)|[:shipit:](cs/sample/Sample/ClimbingStairs/ClimbingStairs.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/ClimbingStairs/testClimbingStairs.cs)|[:shipit:](py/solns/climbingStairs/climbingStairs.py) [:heavy_check_mark:](py/tests/testClimbingStairs/test_ClimbingStairs.py)|Dynamic Programming|
|82|Remove Duplicates from Sorted Array 2|||[:shipit:](py/solns/rmDuplicatesFromSortedArr2/rmDuplicatesFromSortedArr2.py) [:heavy_check_mark:](py/tests/testRmDuplicatesFromSortedArr2/test_RmDuplicatesFromSortedArr2.py)|Linked List|
|100*|Same Tree|[:shipit:](cpp/example/src/SameTree/sameTree.cpp) [:heavy_check_mark:](cpp/example/tst/SameTree/SameTree-test.cpp)|[:shipit:](cs/sample/Sample/SameTree/SameTree.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/SameTree/testSameTree.cs)|[:shipit:](py/solns/sameTree/sameTree.py) [:heavy_check_mark:](py/tests/testSameTree/test_SameTree.py)|Tree|
|112|Path Sum|[:shipit:](cpp/example/src/PathSum/pathSum.cpp) [:heavy_check_mark:](cpp/example/tst/PathSum/PathSum-test.cpp)|[:shipit:](cs/sample/Sample/PathSum/PathSum.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/PathSum/testPathSum.cs)|[:shipit:](py/solns/pathSum/pathSum.py) [:heavy_check_mark:](py/tests/testPathSum/test_PathSum.py)|Tree|
|121*|Best Time to Buy and Sell Stock|[:shipit:](cpp/example/src/BestTime2BuyAndSellStock/bestTime2BuyAndSellStock.cpp) [:heavy_check_mark:](cpp/example/tst/BestTime2BuyAndSellStock/BestTime2BuyAndSellStock-test.cpp)|[:shipit:](cs/sample/Sample/BestTime2BuyAndSellStock/BestTime2BuyAndSellStock.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/BestTime2BuyAndSellStock/testBestTime2BuyAndSellStock.cs)|[:shipit:](py/solns/bestTime2BuyAndSellStock/bestTime2BuyAndSellStock.py) [:heavy_check_mark:](py/tests/testBestTime2BuyAndSellStock/test_BestTime2BuyAndSellStock.py)|Array|
|139*|Word Break|||[:shipit:](py/solns/wordBreak/wordBreak.py) [:heavy_check_mark:](py/tests/testWordBreak/test_WordBreak.py)|Recursive, DFS, Dynamic Programming|
|141|Linked List Cycle|||[:shipit:](py/solns/linkedListCycle/linkedListCycle.py) [:heavy_check_mark:](py/tests/testLinkedListCycle/test_LinkedListCycle.py)|Linked List|
|142|Linked List Cycle 2|||[:shipit:](py/solns/linkedListCycle2/linkedListCycle2.py) [:heavy_check_mark:](py/tests/testLinkedListCycle2/test_LinkedListCycle2.py)|Linked List|
|152*|Maximum Product Subarray|[:shipit:](cpp/example/src/MaxProdSubarray/maxProdSubarray.cpp) [:heavy_check_mark:](cpp/example/tst/MaxProdSubarray/MaxProdSubarray-test.cpp)|[:shipit:](cs/sample/Sample/MaxProdSubarray/MaxProdSubarray.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/MaxProdSubarray/testMaxProdSubarray.cs)|[:shipit:](py/solns/maxProdSubarray/maxProdSubarray.py) [:heavy_check_mark:](py/tests/testMaxProdSubarray/test_MaxProdSubarray.py)|Array|
|153*|Find Minimum in Rotated Sorted Array|[:shipit:](cpp/example/src/MinRotatedSortedArr/minRotatedSortedArr.cpp) [:heavy_check_mark:](cpp/example/tst/MinRotatedSortedArr/MinRotatedSortedArr-test.cpp)|[:shipit:](cs/sample/Sample/MinRotatedSortedArr/MinRotatedSortedArr.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/MinRotatedSortedArr/testMinRotatedSortedArr.cs)|[:shipit:](py/solns/minRotatedSortedArr/minRotatedSortedArr.py) [:heavy_check_mark:](py/tests/testMinRotatedSortedArr/test_MinRotatedSortedArr.py)|Array|
|167|Two Sum II - Input Array Is Sorted|[:shipit:](cpp/example/src/TwoSum2SortedArr/twoSum2SortedArr.cpp) [:heavy_check_mark:](cpp/example/tst/TwoSum2SortedArr/TwoSum2SortedArr-test.cpp)||[:shipit:](py/solns/twoSum2SortedArr/twoSum2SortedArr.py) [:heavy_check_mark:](py/tests/testTwoSum2SortedArr/test_TwoSum2SortedArr.py)|Binary Search|
|182|Duplicate Emails|[:shipit:](cpp/example/src/DuplicateEmails/duplicateEmails.cpp) [:heavy_check_mark:](cpp/example/tst/DuplicateEmails/DuplicateEmails-test.cpp)|[:shipit:](cs/sample/Sample/DuplicateEmails/DuplicateEmails.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/DuplicateEmails/testDuplicateEmails.cs)|[:shipit:](py/solns/duplicateEmails/duplicateEmails.py) [:heavy_check_mark:](py/tests/testDuplicateEmails/test_DuplicateEmails.py)|SQL, Sqlite3|
|190*|Reverse Bits||||Bitwise Operation|
|191*|Number of 1 Bits||||Bitwise Operation|
|193|Valid Phone Numbers||||Shell, Regular Expression|
|195|Tenth Line|[:shipit:](cpp/example/src/TenthLine/tenthLine.cpp) [:heavy_check_mark:](cpp/example/tst/TenthLine/TenthLine-test.cpp)|[:shipit:](cs/sample/Sample/TenthLine/TenthLine.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/TenthLine/testTenthLine.cs)|[:shipit:](py/solns/tenthLine/tenthLine.py) [:heavy_check_mark:](py/tests/testTenthLine/test_TenthLine.py)|Shell|
|198*|House Robber|||[:shipit:](py/solns/houseRobber/houseRobber.py) [:heavy_check_mark:](py/tests/testHouseRobber/test_HouseRobber.py)|Dynamic Programming|
|203|Remove Linked List Elements|||[:shipit:](py/solns/removeLinkedListElements/removeLinkedListElements.py) [:heavy_check_mark:](py/tests/testRemoveLinkedListElements/test_RemoveLinkedListElements.py)|Linked List|
|213*|House Robber 2|||[:shipit:](py/solns/houseRobber2/houseRobber2.py) [:heavy_check_mark:](py/tests/testHouseRobber2/test_HouseRobber2.py)|Dynamic Programming|
|217*|Contains Duplicate|[:shipit:](cpp/example/src/ContainsDuplicate/containsDuplicate.cpp) [:heavy_check_mark:](cpp/example/tst/ContainsDuplicate/ContainsDuplicate-test.cpp)|[:shipit:](cs/sample/Sample/ContainsDuplicate/ContainsDuplicate.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/ContainsDuplicate/testContainsDuplicate.cs)|[:shipit:](py/solns/containsDuplicate/containsDuplicate.py) [:heavy_check_mark:](py/tests/testContainsDuplicate/test_ContainsDuplicate.py)|Array, Set|
|219|Contains Duplicate 2|[:shipit:](cpp/example/src/ContainsDuplicate2/containsDuplicate2.cpp) [:heavy_check_mark:](cpp/example/tst/ContainsDuplicate2/ContainsDuplicate2-test.cpp)|[:shipit:](cs/sample/Sample/ContainsDuplicate2/ContainsDuplicate2.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/ContainsDuplicate2/testContainsDuplicate2.cs)|[:shipit:](py/solns/containsDuplicate2/containsDuplicate2.py) [:heavy_check_mark:](py/tests/testContainsDuplicate2/test_ContainsDuplicate2.py)|Hashmap|
|238*|Product of Array Except Self|[:shipit:](cpp/example/src/ProdOfArrExceptSelf/prodOfArrExceptSelf.cpp) [:heavy_check_mark:](cpp/example/tst/ProdOfArrExceptSelf/ProdOfArrExceptSelf-test.cpp)|[:shipit:](cs/sample/Sample/ProdOfArrExceptSelf/ProdOfArrExceptSelf.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/ProdOfArrExceptSelf/testProdOfArrExceptSelf.cs)|[:shipit:](py/solns/prodOfArrExceptSelf/prodOfArrExceptSelf.py) [:heavy_check_mark:](py/tests/testProdOfArrExceptSelf/test_ProdOfArrExceptSelf.py)|Array|
|268*|Missing Number||||Bitwise Operation|
|300*|Longest Increasing Subsequence|||[:shipit:](py/solns/longestIncreasingSubseq/longestIncreasingSubseq.py) [:heavy_check_mark:](py/tests/testLongestIncreasingSubseq/test_LongestIncreasingSubseq.py)|Recursive, DFS, Dynamic Programming|
|322*|Coin Change|||[:shipit:](py/solns/coinChange/coinChange.py) [:heavy_check_mark:](py/tests/testCoinChange/test_CoinChange.py)|Recursive, DFS, Dynamic Programming|
|338*|Counting Bits||||Bitwise Operation|
|371*|Sum of Two Integers||||Bitwise Operation|
|404|Sum of Left Leaves|[:shipit:](cpp/example/src/SumOfLeftLeaves/sumOfLeftLeaves.cpp) [:heavy_check_mark:](cpp/example/tst/SumOfLeftLeaves/SumOfLeftLeaves-test.cpp)|[:shipit:](cs/sample/Sample/SumOfLeftLeaves/SumOfLeftLeaves.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/SumOfLeftLeaves/testSumOfLeftLeaves.cs)|[:shipit:](py/solns/sumOfLeftLeaves/sumOfLeftLeaves.py) [:heavy_check_mark:](py/tests/testSumOfLeftLeaves/test_SumOfLeftLeaves.py)|Tree|
|442|Find All Duplicates in an Array|[:shipit:](cpp/example/src/FindDuplicatesArr/findDuplicatesArr.cpp) [:heavy_check_mark:](cpp/example/tst/FindDuplicatesArr/FindDuplicatesArr-test.cpp)|[:shipit:](cs/sample/Sample/FindDuplicatesArr/FindDuplicatesArr.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/FindDuplicatesArr/testFindDuplicatesArr.cs)|[:shipit:](py/solns/findDuplicatesArr/findDuplicatesArr.py) [:heavy_check_mark:](py/tests/testFindDuplicatesArr/test_FindDuplicatesArr.py)|Hashmap|
|704|Binary Search|[:shipit:](cpp/example/src/BinarySearch/binarySearch.cpp) [:heavy_check_mark:](cpp/example/tst/BinarySearch/BinarySearch-test.cpp)|[:shipit:](cs/sample/Sample/BinarySearch/BinarySearch.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/BinarySearch/testBinarySearch.cs)|[:shipit:](py/solns/binarySearch/binarySearch.py) [:heavy_check_mark:](py/tests/testBinarySearch/test_BinarySearch.py)|Binary Search|
|912|Sort an Array|[:shipit:](cpp/example/src/MergeSort/mergeSort.cpp) [:heavy_check_mark:](cpp/example/tst/MergeSort/MergeSort-test.cpp)|[:shipit:](cs/sample/Sample/MergeSort/MergeSort.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/MergeSort/testMergeSort.cs)|[:shipit:](py/solns/mergeSort/mergeSort.py) [:heavy_check_mark:](py/tests/testMergeSort/test_MergeSort.py)|Sorting Algorithm, Divide and Conquer|
|989|Add to Array-Form of Integer|[:shipit:](cpp/example/src/Add2IntArr/add2IntArr.cpp) [:heavy_check_mark:](cpp/example/tst/Add2IntArr/Add2IntArr-test.cpp)|[:shipit:](cs/sample/Sample/Add2IntArr/Add2IntArr.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/Add2IntArr/testAdd2IntArr.cs)|[:shipit:](py/solns/add2IntArr/add2IntArr.py) [:heavy_check_mark:](py/tests/testAdd2IntArr/test_Add2IntArr.py)||
|1009|Complement of Base 10 Integer|[:shipit:](cpp/example/src/ComplementBase10Int/complementBase10Int.cpp) [:heavy_check_mark:](cpp/example/tst/ComplementBase10Int/ComplementBase10Int-test.cpp)|[:shipit:](cs/sample/Sample/ComplementBase10Int/ComplementBase10Int.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/ComplementBase10Int/testComplementBase10Int.cs)|[:shipit:](py/solns/complementBase10Int/complementBase10Int.py) [:heavy_check_mark:](py/tests/testComplementBase10Int/test_ComplementBase10Int.py)|Bitwise Operation|
|1056|Confusing Number|[:shipit:](cpp/example/src/ConfusingNum/confusingNum.cpp) [:heavy_check_mark:](cpp/example/tst/ConfusingNum/ConfusingNum-test.cpp)|[:shipit:](cs/sample/Sample/ConfusingNum/ConfusingNum.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/ConfusingNum/testConfusingNum.cs)|[:shipit:](py/solns/confusingNum/confusingNum.py) [:heavy_check_mark:](py/tests/testConfusingNum/test_ConfusingNum.py)|Hashmap, Set|
|1089|Duplicate Zeros|[:shipit:](cpp/example/src/DuplicateZeros/duplicateZeros.cpp) [:heavy_check_mark:](cpp/example/tst/DuplicateZeros/DuplicateZeros-test.cpp)|[:shipit:](cs/sample/Sample/DuplicateZeros/DuplicateZeros.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/DuplicateZeros/testDuplicateZeros.cs)|[:shipit:](py/solns/duplicateZeros/duplicateZeros.py) [:heavy_check_mark:](py/tests/testDuplicateZeros/test_DuplicateZeros.py)|Inplace Operation|
|1119|Remove Vowels from a String|[:shipit:](cpp/example/src/RemoveVowelsFromStr/removeVowelsFromStr.cpp) [:heavy_check_mark:](cpp/example/tst/RemoveVowelsFromStr/RemoveVowelsFromStr-test.cpp)|[:shipit:](cs/sample/Sample/RemoveVowelsFromStr/RemoveVowelsFromStr.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/RemoveVowelsFromStr/testRemoveVowelsFromStr.cs)|[:shipit:](py/solns/removeVowelsFromStr/removeVowelsFromStr.py) [:heavy_check_mark:](py/tests/testRemoveVowelsFromStr/test_RemoveVowelsFromStr.py)|Regular Expression|
|1143*|Longest Common Subsequence|||[:shipit:](py/solns/longestCommonSubseq/longestCommonSubseq.py) [:heavy_check_mark:](py/tests/testLongestCommonSubseq/test_LongestCommonSubseq.py)|Dynamic Programming|
|1290|Convert Binary Number in a Linked List to Integer|[:shipit:](cpp/example/src/ConvertBinaryLinkedList2Int/convertBinaryLinkedList2Int.cpp) [:heavy_check_mark:](cpp/example/tst/ConvertBinaryLinkedList2Int/ConvertBinaryLinkedList2Int-test.cpp)|[:shipit:](cs/sample/Sample/ConvertBinaryLinkedList2Int/ConvertBinaryLinkedList2Int.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/ConvertBinaryLinkedList2Int/testConvertBinaryLinkedList2Int.cs)|[:shipit:](py/solns/convertBinaryLinkedList2Int/convertBinaryLinkedList2Int.py) [:heavy_check_mark:](py/tests/testConvertBinaryLinkedList2Int/test_ConvertBinaryLinkedList2Int.py)|Linked List|
|1304|Find N Unique Integers Sum up to Zero|[:shipit:](cpp/example/src/FindNuniqueIntSum2Zero/findNuniqueIntSum2Zero.cpp) [:heavy_check_mark:](cpp/example/tst/FindNuniqueIntSum2Zero/FindNuniqueIntSum2Zero-test.cpp)|[:shipit:](cs/sample/Sample/FindNuniqueIntSum2Zero/FindNuniqueIntSum2Zero.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/FindNuniqueIntSum2Zero/testFindNuniqueIntSum2Zero.cs)|[:shipit:](py/solns/findNuniqueIntSum2Zero/findNuniqueIntSum2Zero.py) [:heavy_check_mark:](py/tests/testFindNuniqueIntSum2Zero/test_FindNuniqueIntSum2Zero.py)||
|1356|Sort Integers by The Number of 1 Bits|[:shipit:](cpp/example/src/SortIntByNum1Bits/sortIntByNum1Bits.cpp) [:heavy_check_mark:](cpp/example/tst/SortIntByNum1Bits/SortIntByNum1Bits-test.cpp)||[:shipit:](py/solns/sortIntByNum1Bits/sortIntByNum1Bits.py) [:heavy_check_mark:](py/tests/testSortIntByNum1Bits/test_SortIntByNum1Bits.py)|Bitwise Operation|
|1394|Find Lucky Integer in an Array|[:shipit:](cpp/example/src/FindLuckyIntInArr/findLuckyIntInArr.cpp) [:heavy_check_mark:](cpp/example/tst/FindLuckyIntInArr/FindLuckyIntInArr-test.cpp)|[:shipit:](cs/sample/Sample/FindLuckyIntInArr/FindLuckyIntInArr.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/FindLuckyIntInArr/testFindLuckyIntInArr.cs)|[:shipit:](py/solns/findLuckyIntInArr/findLuckyIntInArr.py) [:heavy_check_mark:](py/tests/testFindLuckyIntInArr/test_FindLuckyIntInArr.py)|Hashmap|
|1464|Maximum Product of Two Elements in Array|[:shipit:](cpp/example/src/MaxProdOf2ElementsInArr/maxProdOf2ElementsInArr.cpp) [:heavy_check_mark:](cpp/example/tst/MaxProdOf2ElementsInArr/MaxProdOf2ElementsInArr-test.cpp)|[:shipit:](cs/sample/Sample/MaxProdOf2ElementsInArr/MaxProdOf2ElementsInArr.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/MaxProdOf2ElementsInArr/testMaxProdOf2ElementsInArr.cs)|[:shipit:](py/solns/maxProdOf2ElementsInArr/maxProdOf2ElementsInArr.py) [:heavy_check_mark:](py/tests/testMaxProdOf2ElementsInArr/test_MaxProdOf2ElementsInArr.py)|Pointers|
|1805|Number of Different Integers in a String|[:shipit:](cpp/example/src/NumDifferentIntsInStr/numDifferentIntsInStr.cpp) [:heavy_check_mark:](cpp/example/tst/NumDifferentIntsInStr/NumDifferentIntsInStr-test.cpp)|[:shipit:](cs/sample/Sample/NumDifferentIntsInStr/NumDifferentIntsInStr.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/NumDifferentIntsInStr/testNumDifferentIntsInStr.cs)|[:shipit:](py/solns/numDifferentIntsInStr/numDifferentIntsInStr.py) [:heavy_check_mark:](py/tests/testNumDifferentIntsInStr/test_NumDifferentIntsInStr.py)|Set|
|1836|Remove Duplicates From an Unsorted Linked List|||[:shipit:](py/solns/rmDuplicatesFromUnsortedLinkedList/rmDuplicatesFromUnsortedLinkedList.py) [:heavy_check_mark:](py/tests/testRmDuplicatesFromUnsortedLinkedList/test_RmDuplicatesFromUnsortedLinkedList.py)|Linked List|

</details>

### Testing Samples
<details>
  <summary>Click to expand!</summary>

||Tasks|C++|C#|Python|Topics|
|---|---|---|---|---|---|
||Unit Testing|[:shipit:](cpp/example/src/Pointer/pointer.cpp) [:heavy_check_mark:](cpp/example/tst/Pointer/Pointer-test.cpp)|[:shipit:](cs/sample/Sample/ListNode/ListNode.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/ListNode/testListNode.cs)|[:shipit:](py/solns/solnSample.py) [:heavy_check_mark:](py/tests/test_Sample.py)|Unit Testing|
||Parameterized Unit Testing|[:shipit:](cpp/example/src/RmElement/rmElement.cpp) [:heavy_check_mark:](cpp/example/tst/RmElement/RmElement-test.cpp)|[:shipit:](cs/sample/Sample/BinarySearch/BinarySearch.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/BinarySearch/testBinarySearch.cs)|[:shipit:](py/solns/binarySearch/binarySearch.py) [:heavy_check_mark:](py/tests/testBinarySearch/test_BinarySearch.py)|Unit Testing|
||Testing with Fixture|[:shipit:](cpp/example/src/Bfs/bfs.cpp) [:heavy_check_mark:](cpp/example/tst/Bfs/Bfs-test.cpp)||[:shipit:](py/solns/bfs/bfs.py) [:heavy_check_mark:](py/tests/testBfs/test_Bfs.py)|Unit Testing|

</details>

### Others
<details>
  <summary>Click to expand!</summary>
  
||Tasks|C++|C#|Python|Topics|
|---|---|---|---|---|---|
||Sample|[:shipit:](cpp/example/src/Sample/sample.cpp) [:heavy_check_mark:](cpp/example/tst/Sample-test.cpp)|[:shipit:](cs/sample/Sample/Sample.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/UnitTest1.cs)|[:shipit:](py/solns/solnSample.py) [:heavy_check_mark:](py/tests/test_Sample.py)||
||Learn CMake|[:shipit:](cpp/learnCMake/)||||
||Pointers|[:shipit:](cpp/example/src/Pointer/pointer.cpp) [:heavy_check_mark:](cpp/example/tst/Pointer/Pointer-test.cpp)||||
  
</details>
