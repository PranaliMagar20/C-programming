#include <stdio.h>
#include <stdbool.h>


void Display(int iNo)
{
  int iCnt=0;
  for(iCnt=1; iCnt<iNo;  iCnt++)
  {
    printf("%d\n",iCnt);
  }
}

int main()
{
    int ivalue=0;

    printf("enter no:\n");
    scanf("%d",&ivalue);


    Display(ivalue);


    return 0;
}