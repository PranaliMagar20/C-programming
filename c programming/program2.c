#include<stdio.h>
#include<stdbool.h>

// User going to only enter +ve inputs

// Algo
/*
START
    Accept one no as NO
    Divide that no by 2
    if remainder is 0
    then display the result as even no
    orals display the result as odd no
STOP
*/
////////////////////////////////////////////////////

// Function name : CheckEvenOdd
// Description: used to check whether no is even orr odd
// Input: Integer
// Output: Boolean 
// Author: Pranali vilas magar
// Date: 16/05/2024

///////////////////////////////////////////////////
bool CheckEvenOdd(unsigned int iNo)
{
    if ((iNo %2)==0)
    {
        return true;
    }
 else {
    return false;
 }

}
int main()
{
    unsigned int ivalue =0;
   bool bRet= false;

   printf("enter no : \n");
   scanf("%d",&ivalue);

   bRet = CheckEvenOdd(ivalue);

   if (bRet == true )
{
    printf("%d is Even no\n", ivalue);
}
else{
     printf("%d is Odd no\n", ivalue);
}


    return 0;
}
