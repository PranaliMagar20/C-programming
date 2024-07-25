#include <stdio.h>
#include <stdbool.h>

bool CheckRange(int iNo) {
    if (iNo >= 10 && iNo <= 20) {
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

    bRet = CheckRange(ivalue);

    if (bRet == true) {
        printf("%d is within the range of 10 to 20\n", ivalue);
    } else {
        printf("%d is not within the range of 10 to 20\n", ivalue);
    }

    return 0;
}
