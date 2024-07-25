// take string from user and count only small char

#include <stdio.h>

int countCapitalLetters(const char *str) {
    int iCnt = 0;
    while (*str !='\0')
    
     {
        if (*str >= '97' && *str <= '122')// askki value  // 32 is a diff bet capital char and small 
         {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main() {
    char Arr[100];
    printf("Enter a string: ");
    scanf("%[^'\n']s",Arr);

    int iRet = countCapitalLetters(Arr);


    printf("Number of capital letters: %d\n", iRet);

    return 0;
}



