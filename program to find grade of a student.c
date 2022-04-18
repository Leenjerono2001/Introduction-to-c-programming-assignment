// program to find a grade of a student
#include <stdio.h>

int main()
{
int chem,bio,phy,avg;
    printf("Enter the marks for chem,bio,phy:");
    scanf("%d %d %d",&chem,&bio,&phy);
    
    avg=(chem+bio+phy)/3;
    printf("The average score is %d",avg);
    
     if(avg>=70 && avg<=100)
    {
    printf("\nGrade A");
    }
    else if(avg>=60 && avg<=69)
    {
    printf("\nGrade B");
    }
    else if(avg>=50 && avg<=59)
    {
    printf("\nGrade C");
    }
    else if(avg>=40 && avg<=49)
    {
    printf("\nGrade D");
    }
    else
    {
    printf("\n Fail");
    }
    return 0;
}