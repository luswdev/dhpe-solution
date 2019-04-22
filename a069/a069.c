#include <stdio.h>
#include <string.h>

typedef struct cnt {
    char id;
    int total_cnt;
} cnt_t;

int main()
{
    cnt_t in[80];
    char tmp[80];
    int now=0, i, j, flag, count,max;

    while(scanf("%s",tmp)!=EOF) {
        now   = 0;
        count = 0;
        max   = 0;
        for ( i=0; i<80; i++) {
            in[i].id        = 0;
            in[i].total_cnt = 0;
        }

        for ( i=0; i<strlen(tmp); i++) {
            flag = 1;

            for ( j=0; j<now; j++) {
                if (in[j].id==tmp[i]) {
                    in[j].total_cnt++;
                    flag--;
                }
            }
            if (flag) {
                in[now].id          = tmp[i];
                in[now++].total_cnt =1;
            }
        }

        for ( i=0; i<now; i++) {
            if(in[i].total_cnt>max) {
                max   = in[i].total_cnt;
                flag  = i;
                count = 1;
            }
            else if (in[i].total_cnt==max) {
                count++;
            }
        }

        if (count==1) 
            printf("%c\n",in[flag].id);
        else
            printf("None\n");

    }
}
