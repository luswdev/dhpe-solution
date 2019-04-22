#include <stdio.h>
#include <string.h>

int main(){
    char tmp[100], endd;
    int cnt[26]={0};

    while(scanf("%s",tmp)!=EOF) {
        for ( int i=0; i<strlen(tmp); i++) {
            if (tmp[i]>='A'&&tmp[i]<='Z')
                cnt[tmp[i]-'A']++;
            else if (tmp[i]>='a'&&tmp[i]<='z')
                cnt[tmp[i]-'a']++;
        }

        for ( int i=0; i<26; i++) {
            printf("%d\n",cnt[i]);
        }
    }
}