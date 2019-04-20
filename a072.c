#include <stdio.h>
#include <string.h>

int main(){
   int cnt,total,tmpi,flag;
   char tmp;
   scanf("%d",&cnt);

   while(cnt--) {
        scanf("%d",&total);
        while(scanf("%c",&tmp)) {
            if (tmp=='=')
                break;
            else {
                scanf("%d",&tmpi);
                switch (tmp) {
                case '+':
                    total+=tmpi;
                    break;

                case '-':
                    total-=tmpi;
                    break;

                case '*':
                    total*=tmpi;
                    break;

                case '/':
                    total/=tmpi;
                    break;

                default:
                    break;
                }
            }
        }

        printf("%d\n",total);
   }
   
   return 0;
}