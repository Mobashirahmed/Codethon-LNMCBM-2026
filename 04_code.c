#include<stdlib.h>
#include<string.h>
#include<stdio.h>

int main(){
    // Enter your solution
    int score[100];
    int N, i, max, count = 0;
    float avg, sum = 0;
    // Enter the number of students in the class
    scanf("%d", &N);
    // Enter the marks of students in the class
    for(i=0; i<N; i++)
    {
        scanf("%d", &score[i]);
    }
    // Calculating the sum of marks of the class
    for(i=0; i<N; i++)
    {
        sum += score[i];
    }
    // Calculating the average
    avg = sum / (float)N;
    // Finding the number of students who got distinction marks
    for(i=0; i<N; i++)
    {
        if(score[i]>=75){
            count++;
        }
    }
    // Finding the maximum marks obtained by the student in the class
    max = score[0];
    for(i=0; i<N; i++)
    {
        if(score[i]>max){
            max = score[i];
        }
    }
    // Printing the results
    printf("%.2f %d %d", avg, count, max);
    return 0;
}