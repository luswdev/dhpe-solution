# a046: Longest Common Substring 最長共同子串列

## Question
Design a program to find the longest common substring of two strings. A substring is a consecutive segment of a string. For instance, "agggcte" is a substring of "ggtttagggctehhdh" but "gthh" is not. For two strings A and B, a string C is a common substring of A and B if C is a substring of both A and B. Two strings may have many common substrings, and you need to find the longest one. For example,

(設計一支可以找出兩個字串中最長相同子字串的程式。所謂子字串是一個字串中任一長度的連續的字元組合。例如："agggcte"是"ggtttagggctehhdh"的子字串，但 "gthh" 不是。對兩個字串A與B而言，如果C字串同時為A與B的子字串，則C為A與B的共同字串。兩個字串可能有很多的共同子字串，你要把其中最長的子字串找出來。

A ="gggttttagggctehhdh"

B ="ttwhwttthhsagggcte"

The longest common substring is "agggcte". (最長子字串為"agggcte" )

---

## Input
The input contains five test cases and each case has two lines, each for one string. A string consists of alphanumeric characters and the length is at most 200.

輸入包含５組測試資料，每組測試資料有二列字串。一個字串由英文字母與數字組成，字串最長為200。

## Output
Output the length of the longest common substring of each case in one line. Please add a “newline” in the end of the output.

輸出每組測試資料之最長相同子字串的長度，輸出下一組測試資料結果前應換行。

---

## Sample Input
```
gggttttagggctehhdh
ttwhwttthhsagggcte
abcdefg11234
113cdefgrrr
a
ab
a1
1a
ab
xyz
```

## Sample Out
```
7
5
1
1
0
```

---

## Hint

## Tag
迴圈

---
## Reference
[DHPE a046](http://134.208.12.72/ShowProblem?problemid=a046)