#include <stdio.h>
#include <string.h>

int main()
{
    int cnt, pos, out_pos;
    char in[2000], out[5000], tmp[2000];
    while(scanf("%s", in)!=EOF) {

        // init
        memset( tmp, 0, sizeof(tmp));
        memset( out, 0, sizeof(out));
        cnt     = 0;
        pos     = 0;
        out_pos = 0;

        for ( int i=0; i<strlen(in); i++) {
            if (in[i]>='0' && in[i]<='9') {
                if (pos){
                    for ( int j=0; j<cnt; j++) {
                        for ( int k=0; k<pos; k++) {
                            out[out_pos++] = tmp[k];
                        }
                    }

                    cnt = 0;
                }
                
                cnt*=10;
                cnt += in[i] - '0';
                pos = 0;
                memset( tmp, 0, sizeof(tmp));
            }
            else {
                tmp[pos++] = in[i];
            }
        }

        for ( int j=0; j<cnt; j++) {
            for ( int k=0; k<pos; k++) {
                out[out_pos++] = tmp[k];
            }
        }

        printf("%s\n",out);
    }
}
