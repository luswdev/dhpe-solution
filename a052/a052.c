#include <stdio.h>
#include <string.h>

typedef struct card {
    char flower;
    int  point;
} card_t;

int find_char(char target)
{
    char flower_list[5]="SHDC";
    for ( int i=0; i<strlen(flower_list); i++) {
        if (flower_list[i] == target)
            return i;
    }

    return -1;
}

int main()
{
    int cnt, pt, now;
    char tmp[200];
    card_t card[100];

    scanf("%d\n", &cnt);
    
    while (cnt--) {
        fgets( tmp, 200, stdin);
        now = 0;
        pt  = 0;

        for ( int i=0; i<strlen(tmp); i++) {
            if (find_char(tmp[i]) != -1) {
                card[now].flower = tmp[i];
            }
            else if (tmp[i]>='0' && tmp[i]<='9') {
                pt *= 10;
                pt += tmp[i] - '0';
            }
            else if (pt) {
                card[now++].point = pt;
                pt = 0;
            }
        }

        // sorting
        int swap = 1;
        while (swap) {
            swap--;

            for ( int i=0; i<now-1; i++) {
                if ((find_char(card[i].flower) >  find_char(card[i+1].flower))||
                    (find_char(card[i].flower) == find_char(card[i+1].flower) &&
                         card[i].point < card[i+1].point)) {
                    card_t tmp = card[i];
                       card[i] = card[i+1];
                     card[i+1] = tmp;
                    swap++;
                }
            }
        }

        for ( int i=0; i<now; i++) {
            printf("%c%d ", card[i].flower, card[i].point);
        }
        printf("\n");
    }

    return 0;
}