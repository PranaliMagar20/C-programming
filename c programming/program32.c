// take string from user and count only small char

#include <stdio.h>

int countCapitalLetters(const char *str) {
    int iCnt = 0;
    while (*str !='\0')
    
     {
        if (*str >= 'a' && *str <= 'z') {
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



