#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// #region func search and replace

char *search_and_replace(char *ara, char bef, char aft)
{
   char *para = &ara[0];
   // printf("para[0]: %c\n", para[0]);
   // para[0] = 'd';
   // printf("para[0]: %c\n", para[0]);
   // printf("ara[0]: %c\n", ara[0]);
   printf("started func...\n");
   while (strchr(para, bef) != NULL)
   {
      puts("started");
      para = strchr(para, bef);
      puts(para);
      para[0] = aft;
   }
   return ara;
}

// #endregion

// #region func split by spaces. will change to delimiter must use array not pointer!!!

char** split(char *string)
{

   printf("\t\tline 32\n");
   int size_count = 0;
   char **split_array = malloc(1 * sizeof(char *));
   printf("\t\tline 35\n");
   char *token = strtok(string, " ");
   printf("\t\tline 37\n");
   split_array[0] = token;
   size_count++;
   printf("\t\tline 39\n");
   while (token != NULL)
   {
      token = strtok(NULL, " ");
      size_count++;
      split_array = realloc(split_array, size_count * (sizeof(char *)));
      printf("\t\tsz: %d\n\t\ttoken: %s\n", size_count, token);
      split_array[size_count - 1] = token;
   }
   return split_array;
}
// #endregion



// #region
int main(void)
{

   char hel_phrase[] = "hello world";
   char** hello = split(hel_phrase);
   printf("%s\n", hello[0]);
   printf("%s\n", hello[1]);
}
// #endregion