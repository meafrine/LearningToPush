#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks;
    printf("Key in your marks\n");
    scanf("%d",&marks);
    if(marks<=39){
    printf("Grade E\n");
    }
    else if(marks<=49){
    printf("Grade D\n");
    }
    else if(marks<=59){
    printf("Grade C\n");
    }
    else if(marks<=69){
    printf("Grade B\n");
    }
    else if(marks<=100){
    printf("Grade A\n");
    }
    else{
    printf("Marks out of range");
    }
    return 0;
}
