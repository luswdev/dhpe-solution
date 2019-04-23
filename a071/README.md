# a071: Retrieve the telephone number 取出電話號碼

## Question
The source code a web page is a text file of html format. For example, the following text is a part of the source code of a web page.

```html
<footer>
<div class="width">
<img src="images/footer-logo.png">
<p class="foot-right">© Chang Jung Christian University.All Rights Reserved.Designed by <a href="http://www.weya.com.tw/" target="_blank">Weya</a></p>
<div class="foot-left">
<p>Address : No.1,Changda Rd.,Gueiren District, Tainan City 71101, Taiwan(R.O.C.)</p>
<p> Tel:886-6-2785980　　Fax:886-6-2785979　　Email：[email protected]</p>
</div> <!--_________ foot-span_________--> 
</div> <!--_________ width_________--> 
</footer>
```

In the web pages, the phone number consists of number digits and ‘-’ with the format “xxx-x-xxxxxxx” or “xx-xxxxxxx” and always occurs right after the keyword “Tel:”. Please write a program to retrieve the phone number from a web page source code.

網頁的原始碼是 html 格式的純文字文件。例如，以下文字是某個網頁原始碼的一部分。

```html
<footer>
<div class="width">
<img src="images/footer-logo.png">
<p class="foot-right">© Chang Jung Christian University.All Rights Reserved.Designed by <a href="http://www.weya.com.tw/" target="_blank">Weya</a></p>
<div class="foot-left">
<p>Address : No.1,Changda Rd.,Gueiren District, Tainan City 71101, Taiwan(R.O.C.)</p>
<p> Tel:886-6-2785980　　Fax:886-6-2785979　　Email：[email protected]</p>
</div> <!--_________ foot-span_________--> 
</div> <!--_________ width_________--> 
</footer>
```

在網頁中，電話號碼由數字和 - 組成，格式為 xxx-x-xxxxxxx 或 xx-xxxxxxx，並且始終緊跟在關鍵字 Tel：之後。 請撰寫程式以從網頁原始碼中取出電話號碼。

---

## Input
The input consists of a string of web page source code. The length of the input string is less than 10000.

輸入包含一個網頁原始碼字串。輸入字串的長度小於10000。

## Output
The output contains one line of the first searched telephone number. If there exists no telephone number searched, output “N/A”.

輸出一行第一個搜索到的電話號碼。如果沒有搜索到電話號碼，則輸出 N/A。

---

## Sample Input
```html
<footer>
        <div class="width">
        <img src="images/footer-logo.png">
        <p class="foot-right">© Chang Jung Christian University.All Rights Reserved.Designed by <a href="http://www.weya.com.tw/" target="_blank">Weya</a></p>
        <div class="foot-left">
        <p>Address : No.1,Changda Rd.,Gueiren District, Tainan City 71101, Taiwan(R.O.C.)</p>
        <p>       Tel:886-6-2785980  Fax:886-6-2785979  Email:[email protected]</p>
        </div> <!--_________ foot-span_________-->  
        </div> <!--_________ width_________-->    
</footer>
```

## Sample Out
```
886-6-2785980
```

---

## Hint

## Tag
String 字串

---
## Reference
[DHPE a071](http://134.208.12.72/ShowProblem?problemid=a071)