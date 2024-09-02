//implement  a c program  that writes a sentence  into  a file ,read it ,and write into another file.
#include <stdio.h>
int main() 
{
    FILE *file1, *file2;
    char sentence[] = "This is the sentence to be written to the file bhargav.";
    printf("Enter any for add in your file:");
    gets(sentence);
    char buffer[256];
    file1 = fopen("file1.txt", "w");
    if (file1 == NULL) 
    {
        perror("Error opening file1.txt for writing");
        return 1;
    }
    fprintf(file1, "%s\n", sentence);
    fclose(file1);
    file1 = fopen("file1.txt", "r");
    if (file1 == NULL) 
    {
        perror("Error opening file1.txt for reading");
        return 1;
    }
    if (fgets(buffer, sizeof(buffer), file1) == NULL) 
    {
        perror("Error reading from file1.txt");
        fclose(file1);
        return 1;
    }
    fclose(file1);
    file2 = fopen("file2.txt", "w");
    if (file2 == NULL) 
    {
        perror("Error opening file2.txt for writing");
        return 1;
    }
    fprintf(file2, "%s", buffer);
    fclose(file2);

    printf("Sentence has been copied from file1.txt to file2.txt.\n");
    return 0;
}
