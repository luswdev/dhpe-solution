#include <stdio.h>
#include <string.h>

int main()
{
    char tmp[100];
    int i, flag;
    while (gets(tmp)!=NULL) {
        flag=0;
        for (i=0;i<strlen(tmp);i++) {
            if (tmp[i]>='0'&&tmp[i]<='9') {
                printf("%c",tmp[i]);
                flag++;
            }
        }
        if(flag)
            printf("\n");
        else
            printf("-1\n");
    }
}