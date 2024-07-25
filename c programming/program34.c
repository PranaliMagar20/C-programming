// take string from user and count vowel char

#include <stdio.h>

int countvowelLetters( char *str) {
    int iCnt = 0;

    while (*str !='\0')
    
     {
        if ((*str == 'A') || (*str  == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U')||
            (*str  == 'a') ||( *str  == 'e') ||( *str == 'i') ||( *str  == 'o') ||( *str  == 'u'))
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
//scanf("%s",Arr)
    int iRet = countvowelLetters(Arr);


    printf("Number of vowels letters: %d\n", iRet);

    return 0;
}
// time complexity is n


