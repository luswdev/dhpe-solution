#include <stdio.h>

int main()
{   
    int tem, a, b, total; 
    scanf("%d%d", &a, &b);

    total = a*b;
    a = total;
    b = 0;

    while(a--){
        scanf("%d", &tem);
        if (tem)
            b++;
    }

    if (b*2==total)
        printf("2\n");
    else
        printf("%d\n",b>(total-b)? 1 : 0);
}