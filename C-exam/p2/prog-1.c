// devlop a c program that reads  a sentence from the user. create a function to count the occurence of each consonat of each consonant in the sentence the display the counts.
#include <stdio.h>
#define MAX_LEN 100
int consonant(char ch)
{
  if (ch >= 'A' && ch <= 'Z')
  {
    ch = ch + ('a' - 'A');
  }
  return (ch >= 'a' && ch <= 'z') && !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

void count(char sentence[MAX_LEN], int consonant_count[26])
{
  int i;
  for (i = 0; sentence[i] != '\0'; i++)
  {
    char ch = sentence[i];
    if (ch >= 'A' && ch <= 'Z')
    {
      ch = ch + ('a' - 'A');
    }
    if (consonant(ch))
    {
      consonant_count[ch - 'a']++;
    }
  }
}

int main()
{
  char sentence[MAX_LEN];
  int consonant_count[26] = {0};
  int i;

  printf("Enter a sentence: ");
  fgets(sentence, MAX_LEN, stdin);
  count(sentence, consonant_count);

  printf("\nConsonant counts:\n");
  for (i = 0; i < 26; i++)
  {
    char ch = 'a' + i;
    if (consonant(ch) && consonant_count[i] > 0)
    {
      printf("%c: %d\n", ch, consonant_count[i]);
    }
  }

  return 0;
}
