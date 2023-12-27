#include <stdio.h>

int main()
{
    // Q.1 Write a Program to convert temperature from degrees Celsius to Fahrenheit
       float c=38;
    float F = (c*9/5)+32;
    printf("%0.1f",F);

 // Q.2 Write C Program to find gross salary by adding % of HRA, DA, and TA of user choice.
    float baseSalary, hraPercentage, daPercentage, taPercentage;
    float grossSalary;

   
    printf("Enter Base Salary: ");
    scanf("%f", &baseSalary);

    printf("Enter HRA Percentage: ");
    scanf("%f", &hraPercentage);

    printf("Enter DA Percentage: ");
    scanf("%f", &daPercentage);

    printf("Enter TA Percentage: ");
    scanf("%f", &taPercentage);

   
    float hra = (hraPercentage / 100) * baseSalary;
    float da = (daPercentage / 100) * baseSalary;
    float ta = (taPercentage / 100) * baseSalary;

    
    grossSalary = baseSalary + hra + da + ta;

   
    printf("\nBase Salary: Rs. %.2f\n", baseSalary);
    printf("HRA: Rs. %.2f\n", hra);
    printf("DA: Rs. %.2f\n", da);
    printf("TA: Rs. %.2f\n", ta);
    printf("Gross Salary: Rs. %.2f\n", grossSalary);



  // Q.3 Write C Program to find the third angle of a right triangle if two other angles are given.
   int Firstangle= 65;
   int Secondangle= 45 ;
   int sum=Firstangle+Secondangle;
   int triangle=180-sum;
   
    printf("%d",triangle);

  
    return 0;
}
