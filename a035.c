#include <stdio.h>

int main()
{      
    int a[70000], num, i,temp;

    while(scanf("%d",&num)!=EOF) {

        for ( i=0; i<=num; i++)
            a[i]=0;
        
        for ( i=0; i<num; i++) {
            if(scanf("%d",&temp))
                a[temp]++;
            else
                break;    
        }

        for ( i=1; i<=num; i++)
            if (!(a[i]))
                printf("%d ",i);
        
        printf("\n");
    }
    
    return 0;
}