#include <stdio.h>

int main()
{
    char tmp;
    int total=0;
    while(scanf("%c",&tmp)!=EOF) {
        if (tmp>='A'&&tmp<='Z') {
            if(!total)
                total=(int)tmp-64;
            else{
                total*=26;
                total = total + (int)tmp-64;
            }
        }
        else if (total) {
            printf("%d\n",total);
            total=0;
        }
    }
    printf("%d\n",total);

    return 0;
}