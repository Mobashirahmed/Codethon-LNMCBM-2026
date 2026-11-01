#include<stdlib.h>
#include<string.h>
#include<stdio.h>

int main(){
    // Enter your solution
    int arr[100];
    int N, i, even = 0, odd = 0;
    // Enter the size of array
    scanf("%d", &N);
    // Enter the elements of Array
    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Counting no. of even or odd elements present in the Array
    for(i=0; i<N; i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    // Printing the Results
    printf("%d %d", even, odd);
    return 0;
}