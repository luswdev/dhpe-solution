#include <stdio.h>

#define SWAP(x,y) {x^=y;y^=x;x^=y;}

int sort(int a, int b, int c)
{
    int swap = 1;
    while (swap) {
        swap = 0;
        if (c<b) {
            SWAP(c,b);
            swap = 1;
        }
        if (b<a) {
            SWAP(b,a);
            swap = 1;
        }
    }

    return b;
}

int main()
{
    int data_cnt, cnt;
    scanf("%d", &data_cnt);

    while (data_cnt--) {
        int data[100] = {0};

        scanf("%d", &cnt);
        for ( int i=0; i<cnt; i++) {
            scanf("%d", &data[i]);
        }

        for (int i=1; i<cnt-1; i++) {
            data[i] = sort( data[i-1], data[i], data[i+1]);
        }

        for ( int i=0; i<cnt; i++) {
            printf("%d ", data[i]);
        }
        printf("\n");
    }

    return 0;
}