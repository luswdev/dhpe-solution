#include <stdio.h>
#include <math.h>

int main(){
    int data, times;
    double score;

    while(scanf("%d", &data) && data != -1){
        score = data;
        times = 0;

        while (score<=99) {
            score = sqrt(score) * 10;
            times++;
        }
        printf("%d\n",times);
    }
}