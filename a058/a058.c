#include <stdio.h>

int main()
{
    int cnt, cd_cnt, n[2], d[2], ans[2], min, price;
    scanf("%d", &cnt);

    while(cnt--) {
        scanf("%d", &cd_cnt);
        scanf("%d%d%d%d", &n[0], &d[0], &n[1], &d[1]);

        int flag = 1;

        min = 0xFFFFF;

        for ( int i=0; i<2; i++) {
            for ( int j=0; j<=cd_cnt/n[i]; j++) {
                if (!((cd_cnt-j*n[i])%n[(i+1)%2])) {
                    price = d[i]*j;
                    price+= d[(i+1)%2]*((cd_cnt-j*n[i])/n[(i+1)%2]);
                    flag  = 0;

                    if (min > price) {
                        min = price;
                        ans[i]       = j;
                        ans[(i+1)%2] = (cd_cnt-j*n[i])/n[(i+1)%2];
                   }
                }
            } 
        }

        if (flag) {
            printf("false\n");
        } 
        else {
            printf("%d %d\n", ans[0], ans[1]);
        }
    }

    return 0;
}