#include <stdio.h>

int main()
{
    FILE *file = fopen("dummy_data.txt", "r");
    char content[50];

    if (file == NULL)
    {
        printf("Error opening file");
        return 1;
    }
    fscanf(file, "%s", content);
    printf("Content: %s\n", content);
    fclose(file);

    
    file = fopen("copydata.txt", "w");
    if (file == NULL)
    {
        printf("Error opening file");
        return 1;
    }
    fprintf(file, "%s\n", content);
    fclose(file);
}