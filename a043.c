#include <stdio.h>

int matrix[3][3];

int det()
{
    int ans;

    ans  = matrix[0][0] * matrix[1][1] * matrix[2][2];
    ans += matrix[1][0] * matrix[2][1] * matrix[0][2];
    ans += matrix[0][1] * matrix[1][2] * matrix[2][0];
    ans -= matrix[2][0] * matrix[1][1] * matrix[0][2];
    ans -= matrix[1][0] * matrix[0][1] * matrix[2][2];
    ans -= matrix[2][1] * matrix[1][2] * matrix[0][0];
    
    return ans;
}

int main()
{
    int cnt;
    scanf("%d", &cnt);

    while(cnt--){
        for ( int i=0; i<3; i++) {
            for (int j=0; j<3; j++) {
                scanf("%d", &matrix[i][j]);
            }
        }

        printf("%d\n", det());
    }
    
    return 0;
}