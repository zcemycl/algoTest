# Algorithm Tests
The repo is about transitioning from Python to C family programming. It implements different leetcode solutions with C++(Cmake), C#(dotnet) and Python(pip), and test them with gtest, Xunits and pytest respectively. To ensure the code quality, it deploys testings via github actions.

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

||Tasks|C++|C#|Python|Topics|
|---|---|---|---|---|---|
||Sample|[:shipit:](cpp/example/src/Sample/sample.cpp) [:heavy_check_mark:](cpp/example/tst/Sample-test.cpp)|[:shipit:](cpp/example/src/Sample/sample.cpp) [:heavy_check_mark:](cpp/example/tst/Sample-test.cpp)|:heavy_check_mark:||
||Learn CMake|[:shipit:](cpp/learnCMake/)||||
||Pointers|[:shipit:](cpp/example/src/Pointer/pointer.cpp) [:heavy_check_mark:](cpp/example/tst/Pointer/Pointer-test.cpp)||||
||ListNode|[:shipit:](cpp/example/src/ListNode/listNode.cpp) [:heavy_check_mark:](cpp/example/tst/ListNode/ListNode-test.cpp)|[:shipit:](cs/sample/Sample/ListNode/ListNode.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/ListNode/testListNode.cs)|||Linked List|
||TreeNode||||Tree|
||Unit Testing|[:shipit:](cpp/example/src/Pointer/pointer.cpp) [:heavy_check_mark:](cpp/example/tst/Pointer/Pointer-test.cpp)|[:shipit:](cs/sample/Sample/ListNode/ListNode.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/ListNode/testListNode.cs)|:heavy_check_mark:|Unit Testing|
||Parameterized Unit Testing|[:shipit:](cpp/example/src/RmElement/rmElement.cpp) [:heavy_check_mark:](cpp/example/tst/RmElement/RmElement-test.cpp)|[:shipit:](cs/sample/Sample/BinarySearch/BinarySearch.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/BinarySearch/testBinarySearch.cs)|:heavy_check_mark:|Unit Testing|
|1|Two Sum|[:shipit:](cpp/example/src/TwoSum/twoSum.cpp) [:heavy_check_mark:](cpp/example/tst/TwoSum/TwoSum-test.cpp)|[:shipit:](cs/sample/Sample/TwoSum/TwoSum.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/TwoSum/testTwoSum.cs)|:heavy_check_mark:|Hash map|
|2|Add Two Numbers|[:shipit:](cpp/example/src/AddTwoNumbers/addTwoNumbers.cpp) [:heavy_check_mark:](cpp/example/tst/AddTwoNumbers/AddTwoNumbers-test.cpp)|[:shipit:](cs/sample/Sample/AddTwoNumbers/AddTwoNumbers.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/AddTwoNumbers/testAddTwoNumbers.cs)|:heavy_check_mark:|Linked List|
|3|Length of Longest Substring|[:shipit:](cpp/example/src/LengthOfLongestSubString/lengthOfLongestSubString.cpp) [:heavy_check_mark:](cpp/example/tst/LengthOfLongestSubString/LengthOfLongestSubString-test.cpp)|[:shipit:](cs/sample/Sample/LengthOfLongestSubString/LengthOfLongestSubString.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/LengthOfLongestSubString/testLengthOfLongestSubString.cs)|:heavy_check_mark:||
|7|Reverse Integer|[:shipit:](cpp/example/src/ReverseInt/reverseInt.cpp) [:heavy_check_mark:](cpp/example/tst/ReverseInt/ReverseInt-test.cpp)|[:shipit:](cs/sample/Sample/ReverseInt/ReverseInt.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/ReverseInt/testReverseInt.cs)|:heavy_check_mark:||
|9|Palindrome Number|[:shipit:](cpp/example/src/IsPalindrome/isPalindrome.cpp) [:heavy_check_mark:](cpp/example/tst/IsPalindrome/IsPalindrome-test.cpp)|[:shipit:](cs/sample/Sample/IsPalindrome/IsPalindrome.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/IsPalindrome/testIsPalindrome.cs)|:heavy_check_mark:||
|13|Roman to Integer|[:shipit:](cpp/example/src/Roman2Int/roman2Int.cpp) [:heavy_check_mark:](cpp/example/tst/Roman2Int/Roman2Int-test.cpp)|[:shipit:](cs/sample/Sample/Roman2Int/Roman2Int.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/Roman2Int/testRoman2Int.cs)|:heavy_check_mark:||
|20|Valid Parentheses|[:shipit:](cpp/example/src/ValidParentheses/validParentheses.cpp) [:heavy_check_mark:](cpp/example/tst/ValidParentheses/ValidParentheses-test.cpp)|[:shipit:](cs/sample/Sample/ValidParentheses/ValidParentheses.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/ValidParentheses/testValidParentheses.cs)|:heavy_check_mark:|Stack, Hashmap, Set|
|21|Merge Two Sorted Lists|[:shipit:](cpp/example/src/Merge2SortedLs/merge2SortedLs.cpp) [:heavy_check_mark:](cpp/example/tst/Merge2SortedLs/Merge2SortedLs-test.cpp)|[:shipit:](cs/sample/Sample/Merge2SortedLs/Merge2SortedLs.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/Merge2SortedLs/testMerge2SortedLs.cs)|:heavy_check_mark:|Linked List|
|26|Remove Duplicates from Sorted Array|[:shipit:](cpp/example/src/RemoveDuplicatesFromSortedArr/removeDuplicatesFromSortedArr.cpp) [:heavy_check_mark:](cpp/example/tst/RemoveDuplicatesFromSortedArr/RemoveDuplicatesFromSortedArr-test.cpp)|[:shipit:](cs/sample/Sample/RemoveDuplicatesFromSortedArr/RemoveDuplicatesFromSortedArr.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/RemoveDuplicatesFromSortedArr/testRemoveDuplicatesFromSortedArr.cs)|:heavy_check_mark:|Pointers, Inplace Operation|
|27|Remove Element|[:shipit:](cpp/example/src/RmElement/rmElement.cpp) [:heavy_check_mark:](cpp/example/tst/RmElement/RmElement-test.cpp)|[:shipit:](cs/sample/Sample/RmElement/RmElement.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/RmElement/testRmElement.cs)|:heavy_check_mark:|Pointers, Inplace Operation|
|66|Plus One|[:shipit:](cpp/example/src/PlusOne/plusOne.cpp) [:heavy_check_mark:](cpp/example/tst/PlusOne/PlusOne-test.cpp)|[:shipit:](cs/sample/Sample/PlusOne/PlusOne.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/PlusOne/testPlusOne.cs)|:heavy_check_mark:||
|69|Sqrtx|[:shipit:](cpp/example/src/Sqrtx/sqrtx.cpp) [:heavy_check_mark:](cpp/example/tst/Sqrtx/Sqrtx-test.cpp)|[:shipit:](cs/sample/Sample/Sqrtx/Sqrtx.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/Sqrtx/testSqrtx.cs)|:heavy_check_mark:|Binary Search|
|82|Remove Duplicates from Sorted Array 2|||:heavy_check_mark:|Linked List|
|100|Same Tree|||:heavy_check_mark:|Tree|
|182|Duplicate Emails||||SQL|
|193|Valid Phone Numbers||||Shell, Regular Expression|
|195|Tenth Line||||Shell|
|203|Remove Linked List Elements|||:heavy_check_mark:|Linked List|
|217|Contains Duplicate|[:shipit:](cpp/example/src/ContainsDuplicate/containsDuplicate.cpp) [:heavy_check_mark:](cpp/example/tst/ContainsDuplicate/ContainsDuplicate-test.cpp)|:heavy_check_mark:|:heavy_check_mark:|Set|
|219|Contains Duplicate 2|[:shipit:](cpp/example/src/ContainsDuplicate2/containsDuplicate2.cpp) [:heavy_check_mark:](cpp/example/tst/ContainsDuplicate2/ContainsDuplicate2-test.cpp)|:heavy_check_mark:|:heavy_check_mark:|Hashmap|
|442|Find All Duplicates in an Array|[:shipit:](cpp/example/src/FindDuplicatesArr/findDuplicatesArr.cpp) [:heavy_check_mark:](cpp/example/tst/FindDuplicatesArr/FindDuplicatesArr-test.cpp)|:heavy_check_mark:|:heavy_check_mark:|Hashmap|
|704|Binary Search|[:shipit:](cpp/example/src/BinarySearch/binarySearch.cpp) [:heavy_check_mark:](cpp/example/tst/BinarySearch/BinarySearch-test.cpp)|:heavy_check_mark:|:heavy_check_mark:|Binary Search|
|989|Add to Array-Form of Integer|[:shipit:](cpp/example/src/Add2IntArr/add2IntArr.cpp) [:heavy_check_mark:](cpp/example/tst/Add2IntArr/Add2IntArr-test.cpp)|:heavy_check_mark:|:heavy_check_mark:||
|1009|Complement of Base 10 Integer|[:shipit:](cpp/example/src/ComplementBase10Int/complementBase10Int.cpp) [:heavy_check_mark:](cpp/example/tst/ComplementBase10Int/ComplementBase10Int-test.cpp)|:heavy_check_mark:|:heavy_check_mark:|Bitwise Operation|
|1056|Confusing Number|[:shipit:](cpp/example/src/ConfusingNum/confusingNum.cpp) [:heavy_check_mark:](cpp/example/tst/ConfusingNum/ConfusingNum-test.cpp)|:heavy_check_mark:|:heavy_check_mark:|Hashmap, Set|
|1089|Duplicate Zeros|[:shipit:](cpp/example/src/DuplicateZeros/duplicateZeros.cpp) [:heavy_check_mark:](cpp/example/tst/DuplicateZeros/DuplicateZeros-test.cpp)|:heavy_check_mark:|:heavy_check_mark:|Inplace Operation|
|1119|Remove Vowels from a String|[:shipit:](cpp/example/src/RemoveVowelsFromStr/removeVowelsFromStr.cpp) [:heavy_check_mark:](cpp/example/tst/RemoveVowelsFromStr/RemoveVowelsFromStr-test.cpp)|:heavy_check_mark:|:heavy_check_mark:|Regular Expression|
|1290|Convert Binary Number in a Linked List to Integer|[:shipit:](cpp/example/src/ConvertBinaryLinkedList2Int/convertBinaryLinkedList2Int.cpp) [:heavy_check_mark:](cpp/example/tst/ConvertBinaryLinkedList2Int/ConvertBinaryLinkedList2Int-test.cpp)|:heavy_check_mark:|:heavy_check_mark:|Linked List|
|1304|Find N Unique Integers Sum up to Zero|[:shipit:](cpp/example/src/FindNuniqueIntSum2Zero/findNuniqueIntSum2Zero.cpp) [:heavy_check_mark:](cpp/example/tst/FindNuniqueIntSum2Zero/FindNuniqueIntSum2Zero-test.cpp)|:heavy_check_mark:|:heavy_check_mark:||
|1356|Sort Integers by The Number of 1 Bits|[:shipit:](cpp/example/src/SortIntByNum1Bits/sortIntByNum1Bits.cpp) [:heavy_check_mark:](cpp/example/tst/SortIntByNum1Bits/SortIntByNum1Bits-test.cpp)||:heavy_check_mark:|Bitwise Operation|
|1394|Find Lucky Integer in an Array|[:shipit:](cpp/example/src/FindLuckyIntInArr/findLuckyIntInArr.cpp) [:heavy_check_mark:](cpp/example/tst/FindLuckyIntInArr/FindLuckyIntInArr-test.cpp)|:heavy_check_mark:|:heavy_check_mark:|Hashmap|
|1464|Maximum Product of Two Elements in Array|[:shipit:](cpp/example/src/MaxProdOf2ElementsInArr/maxProdOf2ElementsInArr.cpp) [:heavy_check_mark:](cpp/example/tst/MaxProdOf2ElementsInArr/MaxProdOf2ElementsInArr-test.cpp)|:heavy_check_mark:|:heavy_check_mark:|Pointers|
|1805|Number of Different Integers in a String|[:shipit:](cpp/example/src/NumDifferentIntsInStr/numDifferentIntsInStr.cpp) [:heavy_check_mark:](cpp/example/tst/NumDifferentIntsInStr/NumDifferentIntsInStr-test.cpp)|:heavy_check_mark:|:heavy_check_mark:|Set|
|1836|Remove Duplicates From an Unsorted Linked List|||:heavy_check_mark:|Linked List|

