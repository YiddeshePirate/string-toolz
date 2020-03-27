
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

// #region func split by spaces. will change to delimiter

char **produce(char *string)
{

   int size_count = 0;
   char **split_array = malloc(1 * sizeof(char *));
   char *token = strtok(string, " ");
   split_array[0] = token;
   size_count++;
   while (token != NULL)
   {
      // puts("hello");
      token = strtok(NULL, " ");
      puts("1");
      size_count++;
      puts("2");
      split_array = realloc(split_array, size_count * (sizeof(char *)));
      printf("sz: %d\ntoken: %s\n", size_count, token);
      puts("3");
      split_array[size_count - 1] = token;
      puts("4");
      puts("5");
   }
}
// #endregion



// #region
int main(void)
{
   char hello[] = "Hello, World!!!";
   char *spl = strtok(hello, " ");
   puts(spl);
}
// #endregion