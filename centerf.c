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

char *center_line( char *str, int width ){
    char *line;
    int space, i;
    space = (width - strlen(str))/2;
    line = (char *)malloc(sizeof(char) * strlen(str) + space);
    for ( i = 0; i < space; i++){
        strcat(line," ");
    }
        strcat(line,str);
return(line);
    
}

int main() {

  char str[1000][1000]= {"Lorem ipsum", "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer"
                        , "elementum, ipsum sit amet vulputate semper, orci justo condimentum",
                         "felis, eu lobortis metus quam ac mauris. Mauris sed pharetra leo."
                         , "Morbi mollis nunc eu velit tincidunt ullamcorper. Vestibulum"};
    printf("%d\n", max_line(str,4));
    //printf("%s\n",str[1]);
    for (int i = 0; i <= 4; i++)
        printf("%s\n", center_line(str[i],max_line(str,4)));
    return 0;
}
