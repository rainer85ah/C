#include <stdio.h>
void main()
{
  char abc;
  for(abc='A'; abc<='Z';abc++)
     printf("%c",abc);
  fflush(stdin);
  getchar();
}