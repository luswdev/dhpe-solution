#include <stdio.h>
#include <math.h>

int main()
{
    int cnt, value, i, tmp, tens;
    char num[20][9] = { "零","壹","貳","參","肆","伍","陸","柒","捌","玖"};
    char dig[20][9] = { "", "拾", "佰", "仟", "萬", "拾萬", "佰萬", "仟萬", "億"};
    
    scanf("%d", &cnt);

    while (cnt--) {
        scanf("%d", &value);

        tmp = value;
        for ( i=0; tmp; i++) {
            tmp/=10;
        }
        for ( i=i-1; i>=0; i--) {
            tens = pow(10,i);
            if (value/tens || i%4)
                printf("%s", num[value/tens]);
            if (value/tens)
                printf("%s", dig[i]);
            value%=tens;
        }
        printf("\n");
    }

    return 0;
}