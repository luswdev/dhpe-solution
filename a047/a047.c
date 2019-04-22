#include <stdio.h>

int main(){   
    int cnt, ans[8], i, tmp;
    unsigned char tmpc;
    scanf("%d", &cnt);

    while(cnt--) {
        scanf("%d", &tmp);
        if(tmp<0)
            tmp+=256;
        memset(ans,0,sizeof(ans));
        i = 0;
        while (tmp!=0) {
            ans[i++] = tmp&0x01;
            tmp = tmp>>1;
        }
        for ( i=7; i>=0; i--) {
            printf("%d",ans[i]);
        }
        printf("\n");
    }
}