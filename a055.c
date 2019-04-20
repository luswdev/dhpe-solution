#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100], s2[100];
    int ans[100], i=0, tmp=0, n=0, temp, swap=1;

    while (gets(s1)!=NULL)
    {
        n++;
        
        for( int j=0; j<strlen(s1); j++) {
            if (s1[j+1]>'9'||s1[j+1]<'0')
            {
                tmp+=s1[j]-'0';
                ans[i++]=tmp;
                tmp=0;
            }
            else if (s1[j]!=' ')
            {
                tmp+=s1[j]-'0';
                tmp*=10;
            }
        }

        if(n==2) {
            swap=1;
            while(swap) {
                swap=0;
                for(int j=0; j<i-1; j++) {
                    if(ans[j]>ans[j+1]) {
                        temp=ans[j];
                        ans[j]=ans[j+1];
                        ans[j+1]=temp;
                        swap++;
                    }
                }
            }

            for (int j=0; j<i; j++)
                printf("%d ",ans[j]);
            printf("\n");

            n=0;
            i=0;
        }
    }

    return 0;
}
