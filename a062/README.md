# a062: QWERTY QWERTY

## Question
From the input of a string of characters (only for those characters whose ASCII codes are between 32 and 125), according to the position of each of these characters on the keyboard, please output the character on the right side of the keyboard. For example, ‘W’ is just right next to ‘Q’ on the keyboard. If the right side is a two-layer button (contains two characters), then output the lower-layer character. For example, we need to output ‘;’ if the input is ‘L’. If the input character is an upper-layer (or lower-layer) character, then output the upper-layer (or lower-layer) character of the right-side button, respectively. If the right-side button denotes a non-printable character such as Shift, Enter, and Backspace, or there is no right-side button, please output the same input character.

輸入一段文字（限制為 ASCII 表中，編號 32 至 125 之字元），將它們每個字元依照鍵盤的位置，印出它們右邊的字元，若右邊按鍵有兩層字元 （如：和；位於同一按鍵上），則輸出下層字元，即；，若該按鍵為上層字元（如！）則輸出其右邊按鍵之上層字元（如＠），若輸入的字元右邊的鍵為不可視按鍵，如 shift, enter, backspace 或右邊已無按鍵，則不做更動，照樣輸出。

---

## Input
The first line of the input contains an integer n (0 < n < 10) which is the number of test cases. The following lines are test datasets each of which includes a string of characters whose ASCII codes are between 32 and 125.

第一列輸入一個正整數 n（0 < n < 10），代表有 n 筆測資。

每筆測資輸入一行鍵盤上屬於 ASCII 表中編號 32 至 125 之字元，並以 enter 結束該行。

## Output
Please output the corresponding right-side characters as the rules mentioned before. Please print a cartridge return at the end of each output line.

輸出該行每個字元右邊位置的文字，除題目所述之例外字元除外。最後必須有換行字元。

---

## Sample Input
```
3
Qwer
Adgj
ehn6
```

## Sample Out
```
wert
sfhk
rjm7
```

---

## Hint

## Tag
迴圈

---
## Reference
[DHPE a062](http://134.208.12.72/ShowProblem?problemid=a062)