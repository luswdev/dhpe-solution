# a073: Parking Fee 停車費計算

## Question
Assume that the rate for a parking lot is calculated in units of half an hour, and that it is not charged for less than half an hour. Parking within 2 hours, 30 dollars per half hour; more than 2 hours, but less than 4 hours, 40 dollars per half hour; more than 4 hours, 60 dollars per half hour. Please write a program to calculate the total parking fee to be paid.

假設某個停車場的費率是以每半小時為單位計算，不滿半小時則不計費。

停車 2 小時以內，每半小時30元；超過2小時，但未滿4小時的部份，每半小時 40 元；超過 4 小時以上的部份，每半小時 60 元。請撰寫程式計算共需繳交的停車費。

---

## Input
The first line enters a positive integer N, which means that there are a total of N test data (1 ≤ N ≤ 100). Each test data contains two lines of time, starting and leaving time (24-hour clock). Each line contains two integers, representing the number of hours and minutes, separated by spaces.

第一行輸入一正整數N，表示共有N筆測試資料 (1 ≤ N ≤ 100)，每筆測試資料包含兩行時間，分別為開始與離開時間（24 小時制）。每一行時間包含兩個整數，代表時數和分鐘數，兩數之間以空白隔開。

## Output
Output the parking fee, and a newline character should be added at the end of the output.

輸出停車費，最後必須有換行字元。

---

## Sample Input
```
2
10 23
15 20
13 30
14 20
```

## Sample Out
```
340
30
```

---

## Hint

## Tag
流程控制 迴圈

---
## Reference
[DHPE a073](http://134.208.12.72/ShowProblem?problemid=a073)