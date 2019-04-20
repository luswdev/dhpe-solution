#include <stdio.h>
#include <string.h>

int main()
{
    char s[20];

    while(scanf("%s",s)!=EOF) {
        int s1=strlen(s);
        int temp=1, b1=0;

        for( int k=s1-1; k>=0; k--) {

            if(s[k]=='1')
                b1=b1+temp;
                
            temp=temp*2;
        }
        printf("%c",b1);
    }

    return 0;
}