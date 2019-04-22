#include <stdio.h>

int main()
{      
    int cnt, n, sum;
    scanf("%d", &cnt);

    while(cnt--){
        sum=1;
        scanf("%d", &n);
        while(n)
            sum*=n--;
        printf("%d\n",sum);
    }
}