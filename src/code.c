#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int rollscan(char* rollno);
struct vote
{
    char rollnumber[15];
} v1;
int main()
{
    int choice, ch;
    int nominee, a, b, c, d;
    while (1)
    {

        printf("Please Enter \n1 to check your roll number\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            rollscan(v1.rollnumber);
            printf("Enter 1 to support A\nEnter 2 to support B\nEnter 3 to support C\nEnter 4 to support D\n");
            scanf("%d", &ch);
            switch (ch)
            {
            case 1:
                a++;
                printf("Your Response has been recorded\nThank You\n");
                break;
            case 2:
                b++;
                printf("Your Response has been recorded\n*Thank You*\n");
                break;
            case 3:
                c++;
                printf("Your Response has been recorded\nThank You\n ");
                break;

            case 4:
                d++;
                printf("Your Response has been recorded\n Thank You\n");
                break;
            default:
                printf("PLEASE ENTER BETWEEN THE GIVEN OPTIONS\n");
                // continue;
            }
            break;
        case 3:
            exit(0);
        case 4:
            printf("a got %d number of votes \n b got %d number of votes\n c got %d number of votes \n d got %d number of votes\n", a, b, c, d);
            break;
        }
    }
}
int rollscan(char* rollno)
{
    printf("Please Enter your Roll Number\n");
    char a[100][100];
    int j = 0, k = 0, i = 1;
    char roll[10];
    char Rollno[70][100] = {"22241A05Y6", "22241A05Y7", "22241A05Y8", "22241A05Y9", "22241A05Z0", "22241A05Z1", "22241A05Z2", "22241A05Z3", "22241A05Z4", "22241A05Z5", "22241A05Z6", "22241A05Z7", "22241A05Z8", "22241A05Z9", "22241A050A", "22241A051A", "22241A052A", "22241A053A", "22241A054A", "22241A055A", "22241A056A", "22241A057A", "22241A058A", "22241A059A", "22241A050B", "22241A051B", "22241A052B", "22241A053B", "22241A054B", "22241A055B", "22241A056B", "22241A057B", "22241A058B", "22241A059B", "22241A050C", "22241A051C", "22241A052C", "22241A053C", "22241A054C", "22241A055C", "22241A056C", "22241A057C", "22241A058C", "22241A059C", "22241A050D", "22241A051D", "22241A052D", "22241A053D", "22241A054D", "22241A055D", "22241A056D", "22241A057D", "22241A058D", "22241A059D", "22241A050E", "22241A051E", "22241A052E", "22241A053E", "22241A054E", "22241A055E"};
    scanf("%s", roll);
    for (int i = 0; i < 60; i++)
    {
        if (strcmp(roll, Rollno[i]))
        {
            j++;
        }
        else
        {
            k++;
        }
    }
    if (k == 1)
    {

        printf("Valid rollnumber is entered\n");
        strcpy(a[i], roll);
        i++;
    }
    else
    {
        printf("Invalid rollnumber is entered\n");
        goto *main();
    }
}