
// input : 5
// output: -5 5 -4 4 -3 3 -2 2 -1 1



#include<stdio.h>

void Display(int iNo)
{
   int iCnt=0;
   for(iCnt=-iNo;  iCnt<0;  iCnt++)
   {

         printf("%d\t %d\t",iCnt, -iCnt);  
         
    
   }

   
   printf("\n");
}

int main()
{

    int iValue=0;

    printf("enter no:\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
