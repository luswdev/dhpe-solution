#include <stdio.h>

int main()
{   
    int temp, min=1000, max=-1000,n=10;    
    
    while(n--) {
        scanf("%d",&temp);
        if (temp>max)
            max=temp;
        if (temp<min)
            min=temp;
    }
    printf("Largest number = %d\nSmallest number = %d\n",max,min);
}