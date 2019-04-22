#include <stdio.h>
#include <string.h>

typedef struct cards {
    char  id[5];
    float point;
    int   remain_cnt;
} cards_t;

cards_t card_stack[13];

void init_cards()
{
    char flower[13][5] = { "A", "2",  "3", "4", "5", "6", "7",
                           "8", "9", "10", "J", "Q", "K" };

    for ( int i = 0; i < 13; i++) {
        strcpy(card_stack[i].id, flower[i]);
        card_stack[i].remain_cnt = 4;

        if (i < 10)
            card_stack[i].point  = i + 1;
        else
            card_stack[i].point  = 0.5;
    }
}

float find_card(char *id)
{
    for ( int i = 0; i < 13; i++) {
        if (!strcmp(id, card_stack[i].id))
        {
            card_stack[i].remain_cnt--;
            return card_stack[i].point;
        }
    }

    return 0;
}

int main()
{
    int cnt, remain_cards, pos;
    char hands[1000], tmp[5];
    float total;

    scanf("%d\n", &cnt);

    while (cnt--) {
        // init
        total        = 0.0;
        remain_cards = 52;
        init_cards();

        // gets your hand cards
        fgets(hands, 1000, stdin);
        memset(tmp, 0, sizeof(tmp));
        pos = 0;

        for ( int i=0; i<strlen(hands); i++){
            if ((hands[i]==' ') && pos){
                total += find_card(tmp);
                remain_cards--;

                pos = 0;
                memset(tmp, 0, sizeof(tmp));
            }
            else if ((hands[i]>='0' && hands[i]<='9') || hands[i]=='A' || hands[i]=='J'|| hands[i]=='Q'|| hands[i]=='K'){
                tmp[pos++]=hands[i];
            }
        }

        if (pos){
            total += find_card(tmp);
            remain_cards--;
            pos = 0;
            memset(tmp, 0, sizeof(tmp));
        }  

        // calculate lose probability
        if (total > 10.5) {
            printf("-1\n");
            continue;
        }

        float remain_point = 10.5 - total;
        int   wins_cnt     = 0;

        for ( int i = 0; i < 13; i++) {
            if (remain_point >= card_stack[i].point) {
                wins_cnt += card_stack[i].remain_cnt;
            }
        }

        int prob = (remain_cards - wins_cnt) * 100 / remain_cards;
        printf("%d\n", prob);
    }

    return 0;
}
