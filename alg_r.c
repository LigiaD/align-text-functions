#include <stdio.h>
#include <string.h>
#include <stdlib.h>

 int max_line( char str[1000][1000], int line_count) {
    int i = 0;
    int max = strlen(str[0]);

    for (i = 1; i < line_count; i++){
        if (strlen(str[i]) > max) {
            max = strlen(str[i]);
        }
    }
    return (max);
    }

char *right(char *row, int width) {

    int spaces = 0;
    char *s_spaces=NULL;
    char *sp = " ";
    char *tmp_row = NULL;
    int row_s = strlen(row);
    int j;

        if (row_s < width){
            spaces = width - row_s;
            s_spaces = (char *)malloc(sizeof(char) * spaces);
            tmp_row = (char *)malloc(sizeof(char) * width);
            strcpy(tmp_row,row);
            for ( j = 0; j < spaces; j++){
                strcat(s_spaces, sp);
            }
                tmp_row = strcat(s_spaces,tmp_row);
        }
        else
            if (strlen(row) == width)
                return(row);

    return (tmp_row);
    free(tmp_row);
}

int main()
{
     char str[1000][1000]= {                                                     "Lorem ipsum", 
                            "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer", 
                                                                          "sdkfdsjfsdjkfsdjbf",
                           "felis, eu lobortis metus quam ac mauris. Mauris sed pharetfjdhfdjgra leo."};
    int max = max_line(str,4);
    // printf("%d\n", max_line(str,4));
    //printf("%s\n",str[1]);
    for (int i = 0; i < 4; i++)
        printf("%s\n", right(str[i],max))   ;

    return 0;
}

