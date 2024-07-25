// take string from user and count only capital char

#include <stdio.h>

int countCapitalLetters(const char *str) {
    int iCnt = 0;
    while (*str !='\0')
    
     {
        if (*str >= 'A' && *str <= 'Z') {
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



