#include<stdlib.h>
#include<string.h>
#include<stdio.h>

int main(){
    // Enter your solution
    int N, original, remainder, reverse = 0;
    // Enter the Number
    scanf("%d", &N);
    original = N;
    while(N != 0)
    {
        remainder = N % 10;
        reverse = reverse * 10 + remainder;
        N = N / 10;
    }
    if(reverse==original)
    {
        printf("%d YES", reverse);
    }
    else
    {
        printf("%d NO", reverse);
    }
    return 0;
}