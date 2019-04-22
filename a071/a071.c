#include <stdio.h>
#include <string.h>

int main()
{
    char tmp[10000];

    while (scanf("%s",tmp)!=EOF) {
        if (tmp[0]=='T' && tmp[1]=='e' && tmp[2]=='l' && tmp[3]==':') {
            for (int i=4;i<strlen(tmp);i++)
                printf("%c",tmp[i]);
            return 0;
        }
    }

    printf("N/A");
}