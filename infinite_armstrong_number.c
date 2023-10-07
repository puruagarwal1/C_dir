//Armstrong number
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int power(int base, int exponent) 
{
    int result = 1;
    while(exponent != 0) 
    {
        result *= base;
        --exponent;
    }
    return result;
}
int Armstrong(int num) 
{
    int orignalNum, remainder, n = 0, result = 0;
    orignalNum = num;
    while(orignalNum != 0) 
    {
    orignalNum /= 10;
    ++n;
    }
    orignalNum = num;
    while(orignalNum != 0) 
    {
        remainder = orignalNum % 10;
        result += power(remainder, n);
        orignalNum /= 10;
    }
    if(result == num) 
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
int main() 
{
    int num, term;
    while(1) 
    {
    printf("\nDo you want to continue(1 - to continue): ");
    scanf("%d", &term);
    if(term == 1) 
    {
    printf("\nEnter a number: ");
    scanf("%d", &num);
    if(Armstrong(num)) 
    {
        printf("%d is Armstrong number", num);
    }
    else 
    {
        printf("%d is not a Armstrong number",num);
    }
    }
    else 
    {
        exit(0);
    }
    }
    return 0;
}
