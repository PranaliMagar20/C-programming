#include <stdio.h>

int CheckTicket(int iAge) {
    if (iAge <= 4) {
        return 0;
    } else if (iAge > 4 && iAge <= 10) {
        return 900;
    } else if (iAge > 10 && iAge <= 50) {
        return 2000;
    } else if (iAge > 50) {
        return 500;
    }
}

int main() {
    int ivalue = 0, iRet = 0;

    printf("Enter Age: \n");
    scanf("%d", &ivalue);

    iRet = CheckTicket(ivalue);

    printf("Price is: %d\n", iRet);

    return 0;
}

