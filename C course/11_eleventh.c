#include<stdio.h>

float fahrenheit_to_Celsius(float f)
{
    return (f - 32)*5/9;
}

int main()
{
    float f = 40;
    printf("Temperature in degree celsius is %0.2f",fahrenheit_to_Celsius(f));
    return 0;
}