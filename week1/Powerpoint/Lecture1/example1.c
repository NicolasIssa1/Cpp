#include <stdio.h>
#include <string.h>

int main()
{
  char name[10];

  printf("Enter your name: ");
  scanf("%s", name);

  printf("\nHello %s!\n", name);

  int num_chars = strlen(name);
  printf("Your name contains %d characters\n", num_chars);

  return 0;
}