#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, i, sum;

    while(scanf("%d %d", &a, &b)!=EOF) {
        sum = 0;
        for( i=a; i<=b; i++)
            if(i&0x1)
                sum+=i;

        printf("%d\n",sum);
    }
    return 0;
}