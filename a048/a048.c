#include <stdio.h>
#include <string.h>

int main(){
    char tmp[100000];
    unsigned long long int ans, tmpi, i;
    while (gets(tmp)!=NULL) {
        ans  = 1;
        tmpi = 0;
        for ( i=0; i<strlen(tmp); i++) {
            if (tmp[i]>='0' && tmp[i]<='9') {
                tmpi *= 10;
                tmpi += tmp[i]-'0'; 
            }
            else if (tmp[i] == ' ') {
                ans *= tmpi;
                tmpi = 0;
            }
        }
        if (tmpi)
            ans *= tmpi;
        printf("%llu\n",ans);
    }
}