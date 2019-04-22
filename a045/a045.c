#include <stdio.h>

int main()
{
    int cnt, coins, times;
    scanf("%d", &cnt);

    while (cnt--) {
        scanf("%d", &coins);
        times = 0;
        while (coins!=1) {
            if (coins%3) {
                coins/=3;
                coins++;
            }
            else {
                coins/=3;
            }
            times++;
        }
        
        printf("%d\n", times);
    }

    return 0;
}