// count speces


#include<stdio.h>



int countspace(char *str)
{

    int iCnt = 0;
    while(*str !='\0') {
        if (*str == ' ') {
            iCnt++;
        }
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

    iRet = countspace(Arr); // strlenX(100)

    printf("space is : %d\n",iRet);



    return 0;
 }