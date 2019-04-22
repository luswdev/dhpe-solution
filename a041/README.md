# a041: Decompression 解壓縮

## Question
A compressed string consists of any number of pairs, where each pair consists of (number, pattern). A pattern can be a sub-string with any length, e.g., “ab”. The number designates the number of repetition of the pattern. This assignment is to decompress the compressed string. For example, we will decompress “3ab” into “ababab”.

一段壓縮過的字串由任意數量的配對所組成，其中每對由(數字, 樣版)所組成。樣版可以是具有任何長度的子字串，例如“ab”。數字表示樣版的重複次數。這樣的設定用於解壓縮字串。例如，我們將“3ab”解壓縮為“ababab”。

---

## Input
The input file consists of a number of strings, where each string is separated by a newline. Each compressed string is known to be less than 1024 characters. However, the decompressed string will be longer than 1024bytes.

輸入文件由許多字串組成，其中每個字串由換行符號分隔。 已知每個壓縮字串少於1024個字元。 但是，解壓縮的字串將有可能長於1024字元。

## Output
Save the decompressed strings into a specified output file.

將解壓縮的字串保存到指定的輸出中。

---

## Sample Input
```
2a3bc
```

## Sample Out
```
aabcbcbc
```

---

## Hint

## Tag
String 字串

---
## Reference
[DHPE a041](http://134.208.12.72/ShowProblem?problemid=a041)