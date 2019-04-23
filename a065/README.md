# a065: String encoding 字串編碼

## Question
When you use MS Excel, you will ﬁnd that each column is labeled alphabet-ically (i.e., A, B, · · · , Z, AA, AB,· · · ). We can map the label of each column into an integer. For example, A → 1, B → 2, C → 3, D → 4, · · · , Z → 26,AA → 27, AB → 28, AC → 29, · · · , ZZ → 702, AAA → 703, AAB → 704,AAC → 705, · · ·

Figure out how the mapping procedure works, and write a function to implement it. For example, when the input is “AA”, your function should output 27.

當您使用 MS Excel時，您將發現每列都按字母順序標記（即 A，B，···，Z，AA，AB，···）。 我們可以將每列的標籤映射為整數。例如，A→1，B→2，C→3，D→4，···，Z→26，AA→27，AB→28，AC→29，···，ZZ→702，AAA→703 ，AAB→704，AAC→705，···

找出映射過程的方法，並編寫一個實現它的函數。例如，當輸入為 AA 時，您的函數應輸出 27。

---

## Input
When you use MS Excel, you will ﬁnd that each column is labeled alphabet-ically (i.e., A, B, · · · , Z, AA, AB,· · · ). We can map the label of each column into an integer. For example, A → 1, B → 2, C → 3, D → 4, · · · , Z → 26,AA → 27, AB → 28, AC → 29, · · · , ZZ → 702, AAA → 703, AAB → 704,AAC → 705, · · ·

Figure out how the mapping procedure works, and write a function to implement it. For example, when the input is “AA”, your function should output 27.

當您使用MS Excel時，您將發現每列都按字母順序標記（即A，B，···，Z，AA，AB，···）。 我們可以將每列的標籤映射為整數。 例如，A→1，B→2，C→3，D→4，···，Z→26，AA→27，AB→28，AC→29，···，ZZ→702，AAA→703 ，AAB→704，AAC→705，···

找出映射過程的方法，並編寫一個實現它的函數。例如，當輸入為 AA 時，您的函數應輸出 27。

## Output
The output contains one line for each input text. Each line contains a mapping number.

每行輸入文字輸出一行。每行包含一個映射數字。

---

## Sample Input
```
A
AA
AB
ABE
```

## Sample Out
```
1
27
28
733
```

---

## Hint

## Tag
String 字串

---
## Reference
[DHPE a065](http://134.208.12.72/ShowProblem?problemid=a065)