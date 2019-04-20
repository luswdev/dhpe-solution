#include <stdio.h>

int main(){
    int h1,h2,m1,m2,h,m,cnt,fee;
    scanf("%d", &cnt);
    
    while(cnt--) {
        fee=0;
        scanf("%d%d%d%d", &h1, &m1, &h2, &m2);
        
        if (m1>m2) {
            m2+=60;
            h2--;
        }

        h = h2 - h1;
        m = m2 - m1;

        if (h<2) {
            fee = h*2*30;
            if (m>=30)
                fee+=30;
        }
        else
            fee = 2*2*30;
            
        if (h<4 && h>=2) {
            fee+=(h-2)*2*40;
            if (m>=30)
                fee+=40;
        }
        else if (h>=4)
            fee+=2*2*40;
            
        if (h>=4) {
            fee+=(h-4)*2*60;
            if (m>=30)
                fee+=60;
        }
        printf("%d\n", fee);
    }
}