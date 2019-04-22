#include <stdio.h>
#include <string.h>

int main()
{
    int cnt, floor_cnt, swap, pancake[100]={0}, tmpcake[100]={0}, i, j;
    scanf("%d", &cnt);

    while (cnt--) {
        scanf("%d", &floor_cnt);

        memset(pancake, 0, sizeof(pancake));
        memset(tmpcake, 0, sizeof(tmpcake));
        for ( i=0; i<floor_cnt; i++) {
            pancake[i] = i+1;
            tmpcake[i] = i+1;
        }

        while (scanf("%d", &swap) && swap) {
            for ( i=swap-1, j=0; i>0, j<swap; i--, j++) {
                tmpcake[j] = pancake[i];
            }
            memcpy(pancake, tmpcake, sizeof(tmpcake));
        }

        for ( i=0; i<floor_cnt; i++) {
            printf("%d ", pancake[i]);
        }
        printf("\n");
    }
    
    return 0;
}