#include <stdio.h>

// Function declarations
void enterStudent(char name[], int *rollNo, float *marks1, float *marks2, float *marks3);
void displayStudent(char name[], int rollNo, float marks1, float marks2, float marks3);
float calculatePercentage(float marks1, float marks2, float marks3);
char calculateGrade(float percentage);

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
                enterStudent(name, &rollNo, &marks1, &marks2, &marks3);
                entered = 1;
                break;

            case 2:
                if(entered == 0)
                {
                    printf("\nPlease enter student details first.\n");
                }
                else
                {
                    displayStudent(name, rollNo, marks1, marks2, marks3);
                }
                break;

            case 3:
                if(entered == 0)
                {
                    printf("\nPlease enter student details first.\n");
                }
                else
                {
                    percentage = calculatePercentage(marks1, marks2, marks3);
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
                    percentage = calculatePercentage(marks1, marks2, marks3);
                    grade = calculateGrade(percentage);

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


// Function to enter student details
void enterStudent(char name[], int *rollNo, float *marks1, float *marks2, float *marks3)
{
    printf("\nEnter Student Name: ");
    scanf("%s", name);

    printf("Enter Roll Number: ");
    scanf("%d", rollNo);

    printf("Enter marks in Subject 1: ");
    scanf("%f", marks1);

    printf("Enter marks in Subject 2: ");
    scanf("%f", marks2);

    printf("Enter marks in Subject 3: ");
    scanf("%f", marks3);

    printf("\nStudent details entered successfully!\n");
}


// Function to display student details
void displayStudent(char name[], int rollNo, float marks1, float marks2, float marks3)
{
    printf("\n----- STUDENT DETAILS -----\n");

    printf("Name        : %s\n", name);
    printf("Roll Number : %d\n", rollNo);
    printf("Subject 1   : %.2f\n", marks1);
    printf("Subject 2   : %.2f\n", marks2);
    printf("Subject 3   : %.2f\n", marks3);
}


// Function to calculate percentage
float calculatePercentage(float marks1, float marks2, float marks3)
{
    float percentage;

    percentage = (marks1 + marks2 + marks3) / 3;

    return percentage;
}


// Function to calculate grade
char calculateGrade(float percentage)
{
    if(percentage >= 90)
        return 'A';
    else if(percentage >= 80)
        return 'B';
    else if(percentage >= 70)
        return 'C';
    else if(percentage >= 60)
        return 'D';
    else if(percentage >= 50)
        return 'E';
    else
        return 'F';
}
