#include <stdio.h>
#include <string.h>

int main()
{
    char tmp[100], endd;
    int flag;
    while(scanf("%s", tmp)!=EOF) {
        scanf("%c", &endd);

        flag=strlen(tmp)-1;
        for ( int i=0; i<strlen(tmp); i++) {
            if (tmp[i]>='A' && tmp[i]<='Z')
                tmp[i] = tmp[i]+'a'-'A';
            else if (tmp[i]>='a' && tmp[i]<='z')
                tmp[i]= tmp[i]-'a'+'A';
            else if (i==flag) {
                flag--;
            }
        }

        for ( int i=flag; i>=0; i--)
            printf("%c",tmp[i]);
        
        if (flag!=strlen(tmp)-1)
            printf("%c",tmp[strlen(tmp)-1]);
            
        printf("%c",endd);
    }
}