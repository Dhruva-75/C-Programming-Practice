/*Student Information System

1. Enter Name

2. Enter Age

3. Enter Marks

4. Display Details

5. Exit
*/

#include <stdio.h>

int main()
{
    char name[50];
    int rollNo;
    float marks1, marks2, marks3;
    float percentage;
    char grade;
    int choice;
    int entered = 0;

    do
    {
        printf("\n===== STUDENT RESULT MANAGEMENT SYSTEM =====\n");
        printf("1. Enter Student\n");
        printf("2. Display Student\n");
        printf("3. Calculate Percentage\n");
        printf("4. Grade\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter Student Name: ");
                scanf(" %[^\n]", name);

                printf("Enter Roll Number: ");
                scanf("%d", &rollNo);

                printf("Enter marks in Subject 1: ");
                scanf("%f", &marks1);

                printf("Enter marks in Subject 2: ");
                scanf("%f", &marks2);

                printf("Enter marks in Subject 3: ");
                scanf("%f", &marks3);

                entered = 1;

                printf("\nStudent details entered successfully!\n");
                break;

            case 2:
                if(entered == 0)
                {
                    printf("\nPlease enter student details first.\n");
                }
                else
                {
                    printf("\n----- STUDENT DETAILS -----\n");
                    printf("Name        : %s\n", name);
                    printf("Roll Number : %d\n", rollNo);
                    printf("Subject 1   : %.2f\n", marks1);
                    printf("Subject 2   : %.2f\n", marks2);
                    printf("Subject 3   : %.2f\n", marks3);
                }
                break;

            case 3:
                if(entered == 0)
                {
                    printf("\nPlease enter student details first.\n");
                }
                else
                {
                    percentage = (marks1 + marks2 + marks3) / 3;

                    printf("\nPercentage = %.2f%%\n", percentage);
                }
                break;

            case 4:
                if(entered == 0)
                {
                    printf("\nPlease enter student details first.\n");
                }
                else
                {
                    percentage = (marks1 + marks2 + marks3) / 3;

                    if(percentage >= 90)
                        grade = 'A';
                    else if(percentage >= 80)
                        grade = 'B';
                    else if(percentage >= 70)
                        grade = 'C';
                    else if(percentage >= 60)
                        grade = 'D';
                    else if(percentage >= 50)
                        grade = 'E';
                    else
                        grade = 'F';

                    printf("\nGrade = %c\n", grade);
                }
                break;

            case 5:
                printf("\nThank you! Program ended.\n");
                break;

            default:
                printf("\nInvalid choice! Please enter 1-5.\n");
        }

    } while(choice != 5);

    return 0;
}
