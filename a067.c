#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char s1[20],s2[20];
    scanf("%d", &n);

    while(n--) {
        scanf("%s %s",s1,s2);
        int s=strlen(s1), f=strlen(s2);
        int temp=1, b1=0, b2=0;

        for(int k=s-1;k>=0;k--) {
            if(s1[k]=='1')
                b1=b1+temp;

            temp=temp*2;
        }

        temp=1;

        for(int k=f-1;k>=0;k--) {
            if(s2[k]=='1')
                b2=b2+temp;
            temp=temp*2;
        }

        printf("%d\n",b1+b2);
    }
    
    return 0;
}