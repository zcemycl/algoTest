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
||Sample|[:shipit:](cpp/example/src/Sample/sample.cpp) [:heavy_check_mark:](cpp/example/tst/Sample-test.cpp)|[:shipit:](cs/sample/Sample/Sample.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/UnitTest1.cs)|[:shipit:](py/solns/solnSample.py) [:heavy_check_mark:](py/tests/test_Sample.py)||
||Learn CMake|[:shipit:](cpp/learnCMake/)||||
||Pointers|[:shipit:](cpp/example/src/Pointer/pointer.cpp) [:heavy_check_mark:](cpp/example/tst/Pointer/Pointer-test.cpp)||||
||ListNode|[:shipit:](cpp/example/src/ListNode/listNode.cpp) [:heavy_check_mark:](cpp/example/tst/ListNode/ListNode-test.cpp)|[:shipit:](cs/sample/Sample/ListNode/ListNode.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/ListNode/testListNode.cs)||Linked List|
||TreeNode||||Tree|
||Unit Testing|[:shipit:](cpp/example/src/Pointer/pointer.cpp) [:heavy_check_mark:](cpp/example/tst/Pointer/Pointer-test.cpp)|[:shipit:](cs/sample/Sample/ListNode/ListNode.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/ListNode/testListNode.cs)|[:shipit:](py/solns/solnSample.py) [:heavy_check_mark:](py/tests/test_Sample.py)|Unit Testing|
||Parameterized Unit Testing|[:shipit:](cpp/example/src/RmElement/rmElement.cpp) [:heavy_check_mark:](cpp/example/tst/RmElement/RmElement-test.cpp)|[:shipit:](cs/sample/Sample/BinarySearch/BinarySearch.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/BinarySearch/testBinarySearch.cs)|[:shipit:](py/solns/binarySearch/binarySearch.py) [:heavy_check_mark:](py/tests/testBinarySearch/test_BinarySearch.py)|Unit Testing|
|1*|Two Sum|[:shipit:](cpp/example/src/TwoSum/twoSum.cpp) [:heavy_check_mark:](cpp/example/tst/TwoSum/TwoSum-test.cpp)|[:shipit:](cs/sample/Sample/TwoSum/TwoSum.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/TwoSum/testTwoSum.cs)|[:shipit:](py/solns/twoSum/twoSum.py) [:heavy_check_mark:](py/tests/testTwoSum/test_TwoSum.py)|Array, Hash map|
|2|Add Two Numbers|[:shipit:](cpp/example/src/AddTwoNumbers/addTwoNumbers.cpp) [:heavy_check_mark:](cpp/example/tst/AddTwoNumbers/AddTwoNumbers-test.cpp)|[:shipit:](cs/sample/Sample/AddTwoNumbers/AddTwoNumbers.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/AddTwoNumbers/testAddTwoNumbers.cs)|[:shipit:](py/solns/addTwoNumbers/addTwoNumbers.py) [:heavy_check_mark:](py/tests/testAddTwoNumbers/test_AddTwoNumbers.py)|Linked List|
|3|Length of Longest Substring|[:shipit:](cpp/example/src/LengthOfLongestSubString/lengthOfLongestSubString.cpp) [:heavy_check_mark:](cpp/example/tst/LengthOfLongestSubString/LengthOfLongestSubString-test.cpp)|[:shipit:](cs/sample/Sample/LengthOfLongestSubString/LengthOfLongestSubString.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/LengthOfLongestSubString/testLengthOfLongestSubString.cs)|[:shipit:](py/solns/lengthOfLongestSubString/lengthOfLongestSubString.py) [:heavy_check_mark:](py/tests/testLengthOfLongestSubString/test_LengthOfLongestSubString.py)||
|7|Reverse Integer|[:shipit:](cpp/example/src/ReverseInt/reverseInt.cpp) [:heavy_check_mark:](cpp/example/tst/ReverseInt/ReverseInt-test.cpp)|[:shipit:](cs/sample/Sample/ReverseInt/ReverseInt.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/ReverseInt/testReverseInt.cs)|[:shipit:](py/solns/reverseInt/reverseInt.py) [:heavy_check_mark:](py/tests/testReverseInt/test_ReverseInt.py)||
|9|Palindrome Number|[:shipit:](cpp/example/src/IsPalindrome/isPalindrome.cpp) [:heavy_check_mark:](cpp/example/tst/IsPalindrome/IsPalindrome-test.cpp)|[:shipit:](cs/sample/Sample/IsPalindrome/IsPalindrome.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/IsPalindrome/testIsPalindrome.cs)|[:shipit:](py/solns/isPalindrome/isPalindrome.py) [:heavy_check_mark:](py/tests/testIsPalindrome/test_IsPalindrome.py)||
|13|Roman to Integer|[:shipit:](cpp/example/src/Roman2Int/roman2Int.cpp) [:heavy_check_mark:](cpp/example/tst/Roman2Int/Roman2Int-test.cpp)|[:shipit:](cs/sample/Sample/Roman2Int/Roman2Int.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/Roman2Int/testRoman2Int.cs)|[:shipit:](py/solns/roman2Int/roman2Int.py) [:heavy_check_mark:](py/tests/testRoman2Int/test_Roman2Int.py)||
|20|Valid Parentheses|[:shipit:](cpp/example/src/ValidParentheses/validParentheses.cpp) [:heavy_check_mark:](cpp/example/tst/ValidParentheses/ValidParentheses-test.cpp)|[:shipit:](cs/sample/Sample/ValidParentheses/ValidParentheses.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/ValidParentheses/testValidParentheses.cs)|[:shipit:](py/solns/validParentheses/validParentheses.py) [:heavy_check_mark:](py/tests/testValidParentheses/test_ValidParentheses.py)|Stack, Hashmap, Set|
|21|Merge Two Sorted Lists|[:shipit:](cpp/example/src/Merge2SortedLs/merge2SortedLs.cpp) [:heavy_check_mark:](cpp/example/tst/Merge2SortedLs/Merge2SortedLs-test.cpp)|[:shipit:](cs/sample/Sample/Merge2SortedLs/Merge2SortedLs.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/Merge2SortedLs/testMerge2SortedLs.cs)|[:shipit:](py/solns/merge2SortedLs/merge2SortedLs.py) [:heavy_check_mark:](py/tests/testMerge2SortedLs/test_Merge2SortedLs.py)|Linked List|
|26|Remove Duplicates from Sorted Array|[:shipit:](cpp/example/src/RemoveDuplicatesFromSortedArr/removeDuplicatesFromSortedArr.cpp) [:heavy_check_mark:](cpp/example/tst/RemoveDuplicatesFromSortedArr/RemoveDuplicatesFromSortedArr-test.cpp)|[:shipit:](cs/sample/Sample/RemoveDuplicatesFromSortedArr/RemoveDuplicatesFromSortedArr.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/RemoveDuplicatesFromSortedArr/testRemoveDuplicatesFromSortedArr.cs)|[:shipit:](py/solns/removeDuplicatesFromSortedArr/removeDuplicatesFromSortedArr.py) [:heavy_check_mark:](py/tests/testRemoveDuplicatesFromSortedArr/test_RemoveDuplicatesFromSortedArr.py)|Pointers, Inplace Operation|
|27|Remove Element|[:shipit:](cpp/example/src/RmElement/rmElement.cpp) [:heavy_check_mark:](cpp/example/tst/RmElement/RmElement-test.cpp)|[:shipit:](cs/sample/Sample/RmElement/RmElement.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/RmElement/testRmElement.cs)|[:shipit:](py/solns/rmElement/rmElement.py) [:heavy_check_mark:](py/tests/testRmElement/test_RmElement.py)|Pointers, Inplace Operation|
|66|Plus One|[:shipit:](cpp/example/src/PlusOne/plusOne.cpp) [:heavy_check_mark:](cpp/example/tst/PlusOne/PlusOne-test.cpp)|[:shipit:](cs/sample/Sample/PlusOne/PlusOne.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/PlusOne/testPlusOne.cs)|[:shipit:](py/solns/plusOne/plusOne.py) [:heavy_check_mark:](py/tests/testPlusOne/test_PlusOne.py)||
|69|Sqrtx|[:shipit:](cpp/example/src/Sqrtx/sqrtx.cpp) [:heavy_check_mark:](cpp/example/tst/Sqrtx/Sqrtx-test.cpp)|[:shipit:](cs/sample/Sample/Sqrtx/Sqrtx.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/Sqrtx/testSqrtx.cs)|[:shipit:](py/solns/sqrtx/sqrtx.py) [:heavy_check_mark:](py/tests/testSqrtx/test_Sqrtx.py)|Binary Search|
|82|Remove Duplicates from Sorted Array 2|||[:shipit:](py/solns/rmDuplicatesFromSortedArr2/rmDuplicatesFromSortedArr2.py) [:heavy_check_mark:](py/tests/testRmDuplicatesFromSortedArr2/test_RmDuplicatesFromSortedArr2.py)|Linked List|
|100|Same Tree|||[:shipit:](py/solns/sameTree/sameTree.py) [:heavy_check_mark:](py/tests/testSameTree/test_SameTree.py)|Tree|
|121*|Best Time to Buy and Sell Stock|[:shipit:](cpp/example/src/BestTime2BuyAndSellStock/bestTime2BuyAndSellStock.cpp) [:heavy_check_mark:](cpp/example/tst/BestTime2BuyAndSellStock/BestTime2BuyAndSellStock-test.cpp)|[:shipit:](cs/sample/Sample/BestTime2BuyAndSellStock/BestTime2BuyAndSellStock.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/BestTime2BuyAndSellStock/testBestTime2BuyAndSellStock.cs)|[:shipit:](py/solns/bestTime2BuyAndSellStock/bestTime2BuyAndSellStock.py) [:heavy_check_mark:](py/tests/testBestTime2BuyAndSellStock/test_BestTime2BuyAndSellStock.py)|Array|
|141|Linked List Cycle|||[:shipit:](py/solns/linkedListCycle/linkedListCycle.py) [:heavy_check_mark:](py/tests/testLinkedListCycle/test_LinkedListCycle.py)|Linked List|
|142|Linked List Cycle 2|||[:shipit:](py/solns/linkedListCycle2/linkedListCycle2.py) [:heavy_check_mark:](py/tests/testLinkedListCycle2/test_LinkedListCycle2.py)|Linked List|
|182|Duplicate Emails|[:shipit:](cpp/example/src/DuplicateEmails/duplicateEmails.cpp) [:heavy_check_mark:](cpp/example/tst/DuplicateEmails/DuplicateEmails-test.cpp)|[:shipit:](cs/sample/Sample/DuplicateEmails/DuplicateEmails.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/DuplicateEmails/testDuplicateEmails.cs)|[:shipit:](py/solns/duplicateEmails/duplicateEmails.py) [:heavy_check_mark:](py/tests/testDuplicateEmails/test_DuplicateEmails.py)|SQL, Sqlite3|
|193|Valid Phone Numbers||||Shell, Regular Expression|
|195|Tenth Line|[:shipit:](cpp/example/src/TenthLine/tenthLine.cpp) [:heavy_check_mark:](cpp/example/tst/TenthLine/TenthLine-test.cpp)|[:shipit:](cs/sample/Sample/TenthLine/TenthLine.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/TenthLine/testTenthLine.cs)|[:shipit:](py/solns/tenthLine/tenthLine.py) [:heavy_check_mark:](py/tests/testTenthLine/test_TenthLine.py)|Shell|
|203|Remove Linked List Elements|||[:shipit:](py/solns/removeLinkedListElements/removeLinkedListElements.py) [:heavy_check_mark:](py/tests/testRemoveLinkedListElements/test_RemoveLinkedListElements.py)|Linked List|
|217*|Contains Duplicate|[:shipit:](cpp/example/src/ContainsDuplicate/containsDuplicate.cpp) [:heavy_check_mark:](cpp/example/tst/ContainsDuplicate/ContainsDuplicate-test.cpp)|[:shipit:](cs/sample/Sample/ContainsDuplicate/ContainsDuplicate.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/ContainsDuplicate/testContainsDuplicate.cs)|[:shipit:](py/solns/containsDuplicate/containsDuplicate.py) [:heavy_check_mark:](py/tests/testContainsDuplicate/test_ContainsDuplicate.py)|Set|
|219|Contains Duplicate 2|[:shipit:](cpp/example/src/ContainsDuplicate2/containsDuplicate2.cpp) [:heavy_check_mark:](cpp/example/tst/ContainsDuplicate2/ContainsDuplicate2-test.cpp)|[:shipit:](cs/sample/Sample/ContainsDuplicate2/ContainsDuplicate2.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/ContainsDuplicate2/testContainsDuplicate2.cs)|[:shipit:](py/solns/containsDuplicate2/containsDuplicate2.py) [:heavy_check_mark:](py/tests/testContainsDuplicate2/test_ContainsDuplicate2.py)|Hashmap|
|442|Find All Duplicates in an Array|[:shipit:](cpp/example/src/FindDuplicatesArr/findDuplicatesArr.cpp) [:heavy_check_mark:](cpp/example/tst/FindDuplicatesArr/FindDuplicatesArr-test.cpp)|[:shipit:](cs/sample/Sample/FindDuplicatesArr/FindDuplicatesArr.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/FindDuplicatesArr/testFindDuplicatesArr.cs)|[:shipit:](py/solns/findDuplicatesArr/findDuplicatesArr.py) [:heavy_check_mark:](py/tests/testFindDuplicatesArr/test_FindDuplicatesArr.py)|Hashmap|
|704|Binary Search|[:shipit:](cpp/example/src/BinarySearch/binarySearch.cpp) [:heavy_check_mark:](cpp/example/tst/BinarySearch/BinarySearch-test.cpp)|[:shipit:](cs/sample/Sample/BinarySearch/BinarySearch.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/BinarySearch/testBinarySearch.cs)|[:shipit:](py/solns/binarySearch/binarySearch.py) [:heavy_check_mark:](py/tests/testBinarySearch/test_BinarySearch.py)|Binary Search|
|989|Add to Array-Form of Integer|[:shipit:](cpp/example/src/Add2IntArr/add2IntArr.cpp) [:heavy_check_mark:](cpp/example/tst/Add2IntArr/Add2IntArr-test.cpp)|[:shipit:](cs/sample/Sample/Add2IntArr/Add2IntArr.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/Add2IntArr/testAdd2IntArr.cs)|[:shipit:](py/solns/add2IntArr/add2IntArr.py) [:heavy_check_mark:](py/tests/testAdd2IntArr/test_Add2IntArr.py)||
|1009|Complement of Base 10 Integer|[:shipit:](cpp/example/src/ComplementBase10Int/complementBase10Int.cpp) [:heavy_check_mark:](cpp/example/tst/ComplementBase10Int/ComplementBase10Int-test.cpp)|[:shipit:](cs/sample/Sample/ComplementBase10Int/ComplementBase10Int.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/ComplementBase10Int/testComplementBase10Int.cs)|[:shipit:](py/solns/complementBase10Int/complementBase10Int.py) [:heavy_check_mark:](py/tests/testComplementBase10Int/test_ComplementBase10Int.py)|Bitwise Operation|
|1056|Confusing Number|[:shipit:](cpp/example/src/ConfusingNum/confusingNum.cpp) [:heavy_check_mark:](cpp/example/tst/ConfusingNum/ConfusingNum-test.cpp)|[:shipit:](cs/sample/Sample/ConfusingNum/ConfusingNum.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/ConfusingNum/testConfusingNum.cs)|[:shipit:](py/solns/confusingNum/confusingNum.py) [:heavy_check_mark:](py/tests/testConfusingNum/test_ConfusingNum.py)|Hashmap, Set|
|1089|Duplicate Zeros|[:shipit:](cpp/example/src/DuplicateZeros/duplicateZeros.cpp) [:heavy_check_mark:](cpp/example/tst/DuplicateZeros/DuplicateZeros-test.cpp)|[:shipit:](cs/sample/Sample/DuplicateZeros/DuplicateZeros.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/DuplicateZeros/testDuplicateZeros.cs)|[:shipit:](py/solns/duplicateZeros/duplicateZeros.py) [:heavy_check_mark:](py/tests/testDuplicateZeros/test_DuplicateZeros.py)|Inplace Operation|
|1119|Remove Vowels from a String|[:shipit:](cpp/example/src/RemoveVowelsFromStr/removeVowelsFromStr.cpp) [:heavy_check_mark:](cpp/example/tst/RemoveVowelsFromStr/RemoveVowelsFromStr-test.cpp)|[:shipit:](cs/sample/Sample/RemoveVowelsFromStr/RemoveVowelsFromStr.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/RemoveVowelsFromStr/testRemoveVowelsFromStr.cs)|[:shipit:](py/solns/removeVowelsFromStr/removeVowelsFromStr.py) [:heavy_check_mark:](py/tests/testRemoveVowelsFromStr/test_RemoveVowelsFromStr.py)|Regular Expression|
|1290|Convert Binary Number in a Linked List to Integer|[:shipit:](cpp/example/src/ConvertBinaryLinkedList2Int/convertBinaryLinkedList2Int.cpp) [:heavy_check_mark:](cpp/example/tst/ConvertBinaryLinkedList2Int/ConvertBinaryLinkedList2Int-test.cpp)|[:shipit:](cs/sample/Sample/ConvertBinaryLinkedList2Int/ConvertBinaryLinkedList2Int.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/ConvertBinaryLinkedList2Int/testConvertBinaryLinkedList2Int.cs)|[:shipit:](py/solns/convertBinaryLinkedList2Int/convertBinaryLinkedList2Int.py) [:heavy_check_mark:](py/tests/testConvertBinaryLinkedList2Int/test_ConvertBinaryLinkedList2Int.py)|Linked List|
|1304|Find N Unique Integers Sum up to Zero|[:shipit:](cpp/example/src/FindNuniqueIntSum2Zero/findNuniqueIntSum2Zero.cpp) [:heavy_check_mark:](cpp/example/tst/FindNuniqueIntSum2Zero/FindNuniqueIntSum2Zero-test.cpp)|[:shipit:](cs/sample/Sample/FindNuniqueIntSum2Zero/FindNuniqueIntSum2Zero.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/FindNuniqueIntSum2Zero/testFindNuniqueIntSum2Zero.cs)|[:shipit:](py/solns/findNuniqueIntSum2Zero/findNuniqueIntSum2Zero.py) [:heavy_check_mark:](py/tests/testFindNuniqueIntSum2Zero/test_FindNuniqueIntSum2Zero.py)||
|1356|Sort Integers by The Number of 1 Bits|[:shipit:](cpp/example/src/SortIntByNum1Bits/sortIntByNum1Bits.cpp) [:heavy_check_mark:](cpp/example/tst/SortIntByNum1Bits/SortIntByNum1Bits-test.cpp)||[:shipit:](py/solns/sortIntByNum1Bits/sortIntByNum1Bits.py) [:heavy_check_mark:](py/tests/testSortIntByNum1Bits/test_SortIntByNum1Bits.py)|Bitwise Operation|
|1394|Find Lucky Integer in an Array|[:shipit:](cpp/example/src/FindLuckyIntInArr/findLuckyIntInArr.cpp) [:heavy_check_mark:](cpp/example/tst/FindLuckyIntInArr/FindLuckyIntInArr-test.cpp)|[:shipit:](cs/sample/Sample/FindLuckyIntInArr/FindLuckyIntInArr.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/FindLuckyIntInArr/testFindLuckyIntInArr.cs)|[:shipit:](py/solns/findLuckyIntInArr/findLuckyIntInArr.py) [:heavy_check_mark:](py/tests/testFindLuckyIntInArr/test_FindLuckyIntInArr.py)|Hashmap|
|1464|Maximum Product of Two Elements in Array|[:shipit:](cpp/example/src/MaxProdOf2ElementsInArr/maxProdOf2ElementsInArr.cpp) [:heavy_check_mark:](cpp/example/tst/MaxProdOf2ElementsInArr/MaxProdOf2ElementsInArr-test.cpp)|[:shipit:](cs/sample/Sample/MaxProdOf2ElementsInArr/MaxProdOf2ElementsInArr.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/MaxProdOf2ElementsInArr/testMaxProdOf2ElementsInArr.cs)|[:shipit:](py/solns/maxProdOf2ElementsInArr/maxProdOf2ElementsInArr.py) [:heavy_check_mark:](py/tests/testMaxProdOf2ElementsInArr/test_MaxProdOf2ElementsInArr.py)|Pointers|
|1805|Number of Different Integers in a String|[:shipit:](cpp/example/src/NumDifferentIntsInStr/numDifferentIntsInStr.cpp) [:heavy_check_mark:](cpp/example/tst/NumDifferentIntsInStr/NumDifferentIntsInStr-test.cpp)|[:shipit:](cs/sample/Sample/NumDifferentIntsInStr/NumDifferentIntsInStr.cs) [:heavy_check_mark:](cs/sample/Sample.Tests/NumDifferentIntsInStr/testNumDifferentIntsInStr.cs)|[:shipit:](py/solns/numDifferentIntsInStr/numDifferentIntsInStr.py) [:heavy_check_mark:](py/tests/testNumDifferentIntsInStr/test_NumDifferentIntsInStr.py)|Set|
|1836|Remove Duplicates From an Unsorted Linked List|||[:shipit:](py/solns/rmDuplicatesFromUnsortedLinkedList/rmDuplicatesFromUnsortedLinkedList.py) [:heavy_check_mark:](py/tests/testRmDuplicatesFromUnsortedLinkedList/test_RmDuplicatesFromUnsortedLinkedList.py)|Linked List|

