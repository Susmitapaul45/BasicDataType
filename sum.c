#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    int d, temp, sum = 0;
    temp = n;

    while(temp > 0)
    {
        d = temp % 10;
        sum = sum + d;
        temp = temp / 10;
    }

    printf("%d\n",sum);
    return 0;
}

