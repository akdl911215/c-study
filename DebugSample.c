#include <stdio.h>

int main()
{

    int nData = 10;
    int *pnData = &nData;

    *pnData = 5;

    return 0;
}