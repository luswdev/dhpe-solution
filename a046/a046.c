#include <stdio.h>
#include <string.h>

int find_same_len( char *s1, char *s2, int start1, int start2) {
    int i, j, cnt=0;

    for ( i=start1, j=start2; i<strlen(s1), j<strlen(s2); i++, j++) {
        if (s1[i]==s2[j]) {
            cnt++;
        }
        else {
            break;
        }
    }

    return cnt;
}

int main()
{
    int cnt, max;
    char s1[250], s2[250];

    while (scanf("%s%s", s1, s2)!=EOF) {
        cnt = 0;
        max = 0;
        for ( int i=0; i<strlen(s1); i++) {
            for ( int j=0; j<strlen(s2); j++) {
                if (s1[i]==s2[j]) {
                    cnt = find_same_len( s1, s2, i, j);
                }

                if (max < cnt) {
                    max = cnt;
                }
            }
        }

        printf("%d\n", max);
    }

    return 0;
}