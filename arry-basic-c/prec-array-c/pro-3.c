#include <stdio.h>
#include <string.h>
int main()
{
  char name[20];
  printf("Enter a name:");
  gets(name);

  int i = 0, ch = 0;

  while (name[i] != '\0')
  {
    if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
    {
      ch++;
    }
    i++;
  }
  printf("%d", ch);
  return 0;
}
