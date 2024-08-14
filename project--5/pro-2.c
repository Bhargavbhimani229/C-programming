#include <stdio.h>
#include <string.h>
void main()
{
  char str[20], c;
  int c1, i;

  printf("Enter any string: ");
  gets(str);

  printf("Frequency of each letter: \n");

  for (c = 'a'; c <= 'z'; c++)
  {
    c1 = 0;
    i = 0;
    while (str[i] != '\0')
    {

      if (c == str[i])
      {
        c1++;
      }

      i++;
    }

    if (c1 != 0)
    {
      printf("%c= %d\n", c, c1);
    }
  }
}