#include <stdio.h>
#include <math.h>
int PRIME(int a)
{
    if (a == 1 || a == 0)
        return -1;

    for (int i = 2; i < a / 2; i++)
    {
        if (a % i == 0)
            return -1;
    }
    return 1;
}

int checkArmstrong(int a, int result, int count)
{
    int temp = a;
    while (temp != 0)
    {
        count++;
        temp /= 10;
    }
    temp = a;
    while (temp != 0)
    {
        result += pow((temp % 10), count);
        temp /= 10;
    }
    if (result == a)
        return 1;
    else
        return -1;
}

int main()
{
    int a = 371;
    if (checkArmstrong(a, 0, 0) == 1 && PRIME(a) != 1)
        printf("VALID");
    else
        printf("INVALID");
}