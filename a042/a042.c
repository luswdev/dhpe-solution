#include <stdio.h>
#include <string.h>

int main()
{
    int j, u, i;
    char a[1000];

    while(fgets(a,1000,stdin)!=NULL) { 
        scanf("%d", &u);

        for( i=0; i<strlen(a); i++) {
            if(a[i]>='A' && a[i]<='Z') {
                if((a[i]+u)>'Z')
                    printf("%c",a[i]+u-26);
                else
                    printf("%c",a[i]+u);
            }
            else if(a[i]>='a' && a[i]<='z') {
                if((a[i]+u)>'z')
                    printf("%c",a[i]+u-26);
                else
                    printf("%c",a[i]+u);
            }
            else if(a[i]>='0' && a[i]<='9') {
                if((a[i]+u)>'9')
                    printf("%c",a[i]+u-10);
                else
                    printf("%c",a[i]+u);
            }
            else
                printf("%c",a[i]);
        } 
        printf("\n");
    }
                  
    return 0;
}