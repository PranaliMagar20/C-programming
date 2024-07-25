
// input : 5
// output: -5 -4 -3 -2 -1 0 1 2 3 4 5
// time cpmplexity : 2n bcoz 2 loops in 1 for loop


#include<stdio.h>

void Display(int iNo)
{
   int iCnt=0;
   for(iCnt=-iNo;  iCnt<=iNo;  iCnt++)
   {

         printf("%d\t",iCnt);  
         
    
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
