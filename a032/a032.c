#include<stdio.h>

int main()
{
    int up[1000]={}, d[1000]={}, temp;

    while(scanf("%d",&temp) && temp!=-999) {
        if(temp > 0)
            up[temp]++;
        else
            d[abs(temp)]++;
    }

    for( temp=999; temp>=0; temp--) {
        if(up[temp])
            printf("%d %d\n",temp,up[temp]);
    }

    for( temp=1; temp<1000; temp++) {
        if(d[temp])
            printf("-%d %d\n",temp,d[temp]);
    }
}