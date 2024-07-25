#include <stdio.h>
#include <stdbool.h>

bool Checkfactor(int iNo) {
    if (iNo % 4 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int ivalue = 0;
    bool bRet = false;

    printf("Enter a number: \n");
    scanf("%d", &ivalue);

    bRet = Checkfactor(ivalue);

    if (bRet == true) {
        printf("%d is divisible by 4\n", ivalue);
    } else {
        printf("%d is not r\n", ivalue);
    }

    return 0;
}
