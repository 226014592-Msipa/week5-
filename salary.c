#include <stdio.h>

int main()
{
    float salaries[50]; 
    float total = 0;
    float highest;
    float lowest;
    float average;

    //  Ask for the first salary outside  the loop
    printf("Enter salary for employee 1: ");
    scanf("%f", &salaries[0]); 
    
    // Initialize highest and lowest with the first salary
    highest = salaries[0];
    lowest = salaries[0];
    total = salaries[0];

    
    for (int i = 1; i < 50; i++)
    {
        printf("Enter salary for employee %d: ", i + 1);
        scanf("%f", &salaries[i]);
        
        total = total + salaries[i];
        if (salaries[i] > highest)
        {
            highest = salaries[i];
        }
        if (salaries[i] < lowest)
        {
            lowest = salaries[i];
        }
    }

   
    average = total / 50;
    printf("Total Salary:   N$ %.2f\n", total);
    printf("Average Salary: N$ %.2f\n", average);
    printf("Highest Salary: N$ %.2f\n", highest);
    printf("Lowest Salary:  N$ %.2f\n", lowest);

    return 0;
}