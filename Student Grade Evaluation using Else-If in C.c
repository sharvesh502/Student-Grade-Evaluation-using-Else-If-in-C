//Done by Sharvesh om 12.07.2025


#include <stdio.h>

void main()
{
    int marks;
    printf("Enter your Marks:");
    scanf("%d",&marks);
    
    if(marks>100)
    {
        printf("Invalid Marks");
    }
    else if(marks<0)
    {
        printf("Invalid Marks");
    }
    else if(marks>=90)
    
    {
        printf("A Grade");
    }
    else if(marks>=80)
    {
        printf("B Grade");
    }
    else if(marks>=70)
    {
        printf("C Grade");
    }
    else if(marks>=60)
    {
        printf("D Grade");
    }
    else if(marks<60)
    {
        printf("Fail");
    }
}