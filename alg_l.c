#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char *align_left(char *row) {
    char *tmp_row;
    int row_s = strlen(row);
    int counter = 0;
    if (isspace(*row)){
        while(isspace(*row) && *row){
            counter++;
            row++;
        }
        tmp_row = (char *)malloc(sizeof(char) * (row_s - counter + 1));
        strcpy(tmp_row, row);
    } else {
        return(row);
    }
    return(tmp_row);
}

int main() {

    char *row;
    row = (char *)malloc(sizeof(char) * 50);
    strcpy(row, "            a              Lorem ipsum");
    printf("%s\n", align_left(row));
    return 0;

}