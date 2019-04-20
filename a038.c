#include <stdio.h>

int main()
{
    int n, m;
    float arr[4][4]={0},tmp;
    scanf("%d%d",&n,&m);

    for ( int i=0; i<2; i++) {
        for ( int j=0; j<n; j++) {
            for ( int k=0; k<m; k++) {
                scanf("%f", &tmp);
                arr[j][k]+=tmp;
            }
        }
    }

    for ( int j=0; j<n; j++) {
        for ( int k=0; k<m; k++) {
            printf("[%.1f]",arr[j][k]/2);
        }
        printf("\n");
    }

    return 0;
}