# a042: Caesar Shift 字母往前

## Question
George and Mary make a lovely couple. They have a habit exchanging diaries to kill time. In order to protect the content from being peeked by classmates or being confiscated by teachers, they use a way that shifts characters a certain number of positions in the alphabet and this certain number is written in the next line of the content. Mary feels that it is not convenient to translate diary content into an "encrypted" format every time it is done. Please help Mary write a program that can translate diary content into an "encrypted" form. The result of the encryption does not affect the case of the original letter, and the digital part is processed in the same way. The symbols and special characters and Chinese are not processed.

 

志明跟春嬌是班上的一對情侶，他們有寫交換日記來打發時間的習慣，為了防止他們寫的內容被幫忙傳的同學偷看，或者是不小心被老師沒收，而曝光了裡面寫的東西，他們想到了一個辦法，就是把內容的所有字母都往後數幾次的字母替代，而往後數幾次的數目就寫在內容的下一行。但是，問題來了，春嬌覺得每次寫完都要再數來數去的轉化成「加密」格式，實在是太麻煩了。但又礙於不想被輕易的看到內容，於是她拜託你寫個程式幫忙她可以直接把寫好的內容轉化成「加密」的型態。加密結果不會影響原字母的大小寫，且數字部分亦作相同處理，但不處理符號及特殊字元及中文。

---

## Input
The first line of the input is the content. It is not greater than 100 characters.

The second line of the input is the number of position by which each character is shifted.

第一行為想輸入的內容，不超過 100 個字元。 

第二行為打完你想輸入的內容之後，換行輸入你想要往後替代的數目。

## Output
Output the sentence that is translated and add a “newline” in the end of output.

印出轉換後的句子，最後必須有換行字元。

---

## Sample Input
```
How are you? 123
2
```

## Sample Out
```
Jqy ctg aqw? 345
```

---

## Hint

## Tag
Sorting 排序

---
## Reference
[DHPE a042](http://134.208.12.72/ShowProblem?problemid=a042)