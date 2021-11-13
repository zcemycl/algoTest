# Algorithm Tests
The repo is about transitioning from Python to C family programming. It implements different leetcode solutions with C++(Cmake), C#(dotnet) and Python(pip), and test them with gtest, Xunits and pytest respectively. To ensure the code quality, it deploys testings via github actions.

## Structures
```
algoTest 
├── cpp [C++] 
│   └── example (Leetcode c++ questions)
│       ├── build
│       ├── lib
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
||Sample|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:||
||Learn CMake|:heavy_check_mark:||||
||Pointers|:heavy_check_mark:||||
||ListNode|:heavy_check_mark:|:heavy_check_mark:||Linked List|
||TreeNode||||Tree|
||Unit Testing|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|Unit Testing|
||Parameterized Unit Testing|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|Unit Testing|
|1|Two Sum|[:shipit:](cpp/example/src/TwoSum/twoSum.cpp) [:heavy_check_mark:](cpp/example/tst/TwoSum/TwoSum-test.cpp)|:heavy_check_mark:|:heavy_check_mark:|Hash map|
|2|Add Two Numbers|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|Linked List|
|3|Length of Longest Substring|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:||
|7|Reverse Integer|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:||
|9|Palindrome Number|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:||
|13|Roman to Integer|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:||
|20|Valid Parentheses|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|Stack, Hashmap, Set|
|21|Merge Two Sorted Lists|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|Linked List|
|26|Remove Duplicates from Sorted Array|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|Pointers, Inplace Operation|
|27|Remove Element|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|Pointers, Inplace Operation|
|66|Plus One|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:||
|69|Sqrtx|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|Binary Search|
|82|Remove Duplicates from Sorted Array 2|||:heavy_check_mark:|Linked List|
|100|Same Tree|||:heavy_check_mark:|Tree|
|182|Duplicate Emails||||SQL|
|193|Valid Phone Numbers||||Shell, Regular Expression|
|195|Tenth Line||||Shell|
|203|Remove Linked List Elements|||:heavy_check_mark:|Linked List|
|217|Contains Duplicate|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|Set|
|219|Contains Duplicate 2|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|Hashmap|
|442|Find All Duplicates in an Array|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|Hashmap|
|704|Binary Search|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|Binary Search|
|989|Add to Array-Form of Integer|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:||
|1009|Complement of Base 10 Integer|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|Bitwise Operation|
|1056|Confusing Number|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|Hashmap, Set|
|1089|Duplicate Zeros|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|Inplace Operation|
|1119|Remove Vowels from a String|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|Regular Expression|
|1290|Convert Binary Number in a Linked List to Integer|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|Linked List|
|1304|Find N Unique Integers Sum up to Zero|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:||
|1356|Sort Integers by The Number of 1 Bits|:heavy_check_mark:||:heavy_check_mark:|Bitwise Operation|
|1394|Find Lucky Integer in an Array|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|Hashmap|
|1464|Maximum Product of Two Elements in Array|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|Pointers|
|1805|Number of Different Integers in a String|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|Set|
|1836|Remove Duplicates From an Unsorted Linked List|||:heavy_check_mark:|Linked List|

