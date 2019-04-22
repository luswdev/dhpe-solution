#include <stdio.h>
#include <string.h>

int find_char( char *data, char target){
    for ( int i=0; i<strlen(data)-1; i++) {
        if (target == data[i])
            return i;
    }

    return -1;
}

int main()
{
    // construct keybord first
    char kb1[100]     = "1234567890-=";
    char kb1_sub[100] = "!@#$%^&*()_+";
    char kb2[100]     = "qwertyuiop";
    char kb2_sub[100] = "{}|";
    char kb3[100]     = "asdfghjkl;'";
    char kb3_sub[100] = ":\"";
    char kb4[100]     = "zxcvbnm,./";
    char kb4_sub[100] = "<>?";

    int cnt;
    char tmp[200];
    scanf("%d\n", &cnt);

    while (cnt--) {
        fgets(tmp, 200, stdin);

        // transform to downcase
        for ( int i=0; i<strlen(tmp); i++) {
            if (tmp[i]>='A' && tmp[i]<='Z') {
                tmp[i]+='a'-'A';
            }

            if (find_char(kb1, tmp[i]) != -1) {
                tmp[i] = kb1[find_char(kb1, tmp[i])+1];
            }
            else if (find_char(kb1_sub, tmp[i]) != -1) {
                tmp[i] = kb1_sub[find_char(kb1_sub, tmp[i])+1];
            }
            else if (find_char(kb2, tmp[i]) != -1) {
                tmp[i] = kb2[find_char(kb2, tmp[i])+1];
            }
            else if (find_char(kb2_sub, tmp[i]) != -1) {
                tmp[i] = kb2_sub[find_char(kb2_sub, tmp[i])+1];
            }
            else if (find_char(kb3, tmp[i]) != -1) {
                tmp[i] = kb3[find_char(kb3, tmp[i])+1];
            }
            else if (find_char(kb3_sub, tmp[i]) != -1) {
                tmp[i] = kb3_sub[find_char(kb3_sub, tmp[i])+1];
            } 
            else if (find_char(kb4, tmp[i]) != -1) {
                tmp[i] = kb4[find_char(kb4, tmp[i])+1];
            }
            else if (find_char(kb4_sub, tmp[i]) != -1) {
                tmp[i] = kb4_sub[find_char(kb4_sub, tmp[i])+1];
            }
        }

        printf("%s\n", tmp);
    }

    return 0;
}