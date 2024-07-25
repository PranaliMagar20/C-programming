#include <stdio.h>
#include <stdbool.h>


void Displayfactor(int iNo)
{
  int iCnt=0;

  printf("factor of %d are:\n",iNo);
  
  for (iCnt = 1; iCnt <= iNo; iCnt++) {
        if (iNo % iCnt == 0) {
            printf("%d\n ", iCnt);
        }
    }
}

int main()
{
    int ivalue=0;

    printf("enter no:\n");
    scanf("%d",&ivalue);


    Displayfactor(ivalue);


    return 0;
}