#include <stdio.h>

int main()
{
    int cnt, pt[100][2], flag;
    scanf("%d", &cnt);
    for ( int i=0; i<cnt; i++) {
        scanf("%d%d", &pt[i][0], &pt[i][1]);
    }

    for ( int i=0; i<cnt; i++) {
        flag = 0;
        for ( int j=0; j<cnt; j++) {
            if (i==j)
                continue;
            
            if (pt[j][0]>pt[i][0] && pt[j][1]>pt[i][1]){
                printf("N ");
                flag++;
                break;
            }
            else if (pt[j][0]>=pt[i][0] && pt[j][1]>pt[i][1]){
                printf("N ");
                flag++;
                break;
            }
            else if (pt[j][0]>pt[i][0] && pt[j][1]>=pt[i][1]){
                printf("N ");
                flag++;
                break;
            }
        }

        if (!flag)
            printf("Y ");
    }

    printf("\n");

    return 0;
}