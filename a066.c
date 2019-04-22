#include <stdio.h>
#include <string.h>

typedef struct links_table {
    char link[300];
    int  cnt;
} links_table;

links_table links_t[600];

int now_index = 0;

void print()
{
    for ( int i=0; i<now_index; i++) {
        printf("%d %s\n", links_t[i].cnt, links_t[i].link);
    }
}

int is_links( char *line)
{
    int i;
    char tmp[30];

    // first remove blanks at front
    for ( i=0; i<strlen(line); i++) {
        if (line[i]!=' ')
            break;
    }

    strncpy( tmp, line+i, 9);
    tmp[9] = 0;

    // transform into downcase
    for ( int i=0; i<9; i++){
        if (tmp[i]>='A' && tmp[i]<='Z') {
            tmp[i]+='a'-'A';
        }
    }

    // then return the link right position
    if (!strcmp( tmp, "<a href=\""))
        return i+9;
    else
        return 0;
}

void insert_link( char *link)
{   
    // find if there have this link or not
    for ( int i=0; i<now_index; i++) {
        if (!strcmp(links_t[i].link,link)){
            links_t[i].cnt++;
            return;
        }
    }

    // if this is a new link, insert into rear
    strcpy(links_t[now_index].link, link);
    links_t[now_index++].cnt = 1;
}

void sort_table()
{
    int swap = 1;

    while(swap){
        swap = 0;
        for (int i=now_index-1; i>0; i--) {
            if (links_t[i].cnt>links_t[i-1].cnt || 
               (links_t[i].cnt==links_t[i-1].cnt && strcmp(links_t[i].link, links_t[i-1].link) < 0)) {
                    links_table tmp = links_t[i];
                    links_t[i]   = links_t[i-1];
                    links_t[i-1] = tmp;
                    swap = 1;
            }
        }
    }
}


int main()
{
    int links_start;
    char tmp_line[1000], tmp_link[300];

    while(fgets( tmp_line, 1000, stdin)) {
        if (!strcmp( tmp_line, "</html>\n"))
            break;

        if ( is_links( tmp_line)) {
            links_start = is_links( tmp_line);

            strcpy( tmp_link, tmp_line+links_start);
            
            for ( int i=0; i<strlen(tmp_link); i++) {
                if (tmp_link[i] == '"'){
                    tmp_link[i] = 0;
                }
            }

            insert_link( tmp_link);
        }
    }

    sort_table();
    print();
    
    return 0;
}