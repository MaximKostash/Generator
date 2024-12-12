#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int password_generator();
int number_generator();
int data_generator();

int main()
{
    printf("GENERATOR\n\n");
    while (1)
    {
        int ch;
        printf("Menu:\n1. Password generator.\n2. Number generator.\n3. Data generator.\n0. Exit.\n");
        printf("> ");
        scanf("%d", &ch);
        if (ch == 1)
        {
            password_generator();
        }
        else if (ch == 2)
        {
            number_generator();
        }
        else if (ch == 3)
        {
            data_generator();
            break;
        }
        else if (ch == 0)
        {
            printf("Exit.\n");
            break;
        }
        else printf(":(\n");
    }
    return 0;
}

int number_generator()
{
    srand(time(NULL));
    int ch;
    printf("Menu:\n1. Generate number.\n2. Generate a number in a range.\n> ");
    scanf("%d", &ch);
    if (ch == 1)
    {
        printf("Numder: %d\n\n", rand());
    }
    else if (ch == 2)
    {
        int min, max;
        printf("Enter 2 numbers: ");
        scanf("%d%d", &min, &max);
        if (min > max)
        {
            printf("The minimum number is greater than the large number.\n");
        }
        else
        {
            int random = rand() % (max - min + 1) + min;
            printf("Numder: %d\n\n", random);
        }
    }
    return 0;
}

int password_generator()
{
    srand(time(NULL));
    int size;
    printf("Size: ");
    scanf("%d", &size);
    printf("Password: ");
    for (int i = 0; i < size; i++)
    {
        int min = 1;
        int max = 4;
        int max1 = 27;
        int max2 = 11;
        int random = rand() % (max - min + 1) + min;
        int r1 = rand() % (max1 - min + 1) + min;
        int r2 = rand() % (max2 - min + 1) + min;
        char str1[] = "qwertyuiopasdfghjklzxcvbnm";
        char str2[] = "1234567890";
        char str3[] = "@#$_&-+()/";
        if (random == 1)
        {
            printf("%c", str1[r1]);
        }
        else if (random == 2)
        {
            printf("%c", str2[r2]);
        }
        else if (random == 3)
        {
            printf("%c", str2[r2]);
        }
    }
    printf("\n\n");
    return 0;
}

int data_generator()
{
    system("python data_generator.py");
    return 0;
}
