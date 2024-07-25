#include<stdio.h>



int strlenX(char *str)
{

    int iCnt = 0;
    while(*str !='\0')
    {

        iCnt++;
        str++;
    }
    return iCnt;
}


 int main()
 {

    char Arr[20];
    int iRet=0;

    printf("enter string : \n");
    scanf("%[^'\n]s",Arr); // special scanf until enter comes of  user

    iRet = strlenX(Arr); // strlenX(100)

    printf("lenthh string is : %d\n",iRet);



    return 0;
 }