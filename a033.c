#include <stdio.h>
#include <string.h>

struct score_s {
    int id;
    int score;
} score_s[1000];

int main()
{
    int n, score[1000]={0}, now, flag;
    char temp[3000];
    scanf("%d\n",&n);

    for( int i=0; i<1000; i++)
        score_s[i].score=0;

    for( int i=0; i<n; i++){
        gets(temp);
        now  = 1;
        flag = 1;
        for ( int j=0; j<strlen(temp); j++) {
            if (flag){
                if(temp[j]=='c'){
                    score_s[now].id    = now;
                    score_s[now].score+= 10;
                }
                else if(temp[j]=='w'){
                    score_s[now].id    = now;
                    score_s[now].score-= 10;
                }
                flag = 0;
            }
            if (temp[j]==' '){
                flag = 1;
                now++;
            }
        }
    }

    // bubble sort
    flag=1;
    while (flag){
        flag = 0;
        for ( int i=1; i<now; i++){
            if (score_s[i+1].score>score_s[i].score) {
                struct score_s tmp_s = score_s[i];
                score_s[i]   = score_s[i+1];
                score_s[i+1] = tmp_s;
                flag = 1;
            }
        }
    }

    for ( int i=1; i<=now; i++) {
        printf("(%d,%d)",score_s[i].id,score_s[i].score);

        if (score_s[i].score != score_s[i+1].score)
            printf("\n");
    }
    
    return 0;
}