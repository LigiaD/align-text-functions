#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char **a_sort(char str[1000][1000], int nb_lines) {
    int i,j;
    char *tmp;
    char **str_tmp = NULL;

    tmp = (char *)malloc(sizeof(char) * 1000);
    for(i = 0;i < nb_lines;i++)
    for(j = i+1;j < nb_lines;j++){
         if(strcmp(str[i],str[j]) > 0){
            strcpy(tmp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],tmp);
         }
      }
      str_tmp = (char **)malloc(sizeof(char *) * nb_lines);
      for (i = 0; i < nb_lines; i ++)
        str_tmp[i] = (char *)malloc(sizeof(char) * 1000);
         for (i = 0; i < nb_lines; i ++)
            strcpy(str_tmp[i],str[i]); 
    return(str_tmp);

}

char **z_sort(char str[1000][1000], int nb_lines) {
    int i,j;
    char *tmp;
    char **str_tmp = NULL;

    tmp = (char *)malloc(sizeof(char) * 1000);
    for(i = 0;i < nb_lines;i++)
    for(j = i+1;j < nb_lines;j++){
         if(strcmp(str[i],str[j]) < 0){
            strcpy(tmp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],tmp);
         }
      }
      str_tmp = (char **)malloc(sizeof(char *) * nb_lines);
      for (i = 0; i < nb_lines; i ++)
        str_tmp[i] = (char *)malloc(sizeof(char) * 1000);
         for (i = 0; i < nb_lines; i ++)
            strcpy(str_tmp[i],str[i]); 
    return(str_tmp);

}

int main(){
   int i;
   char str[1000][1000] = {"Lorem", "Ipsum", "Apple", "Tie"};
   char **sorted;

   sorted = z_sort(str,4);

   
   for(i=0;i<4;i++)
      printf("%s\n", sorted[i]);
   
   return 0;
}