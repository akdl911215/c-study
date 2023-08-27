#include <stdio.h>

int main()
{
    int nData = 0xB3;
    // B * 16^1 + 3 * 16^0
    // 11 * 16^1 + 3 * 16^0
    // 179
    printf("%d\n", nData); 

    return 0;
}