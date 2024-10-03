#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[25],n,element,j,i,flag=0;
    printf("Key in the number of elements");
    scanf("%d",&n);

    printf("Key in the elements");
    for(i=0;i<n;i++){
    scanf("%d",&num[i]);
    }
    printf("Key in the elements to search\n");
    scanf("%d",&element);
    for(j=0;j<n;j++){
    if(num[j]==element){
    flag=1;
    break;
    }
    if (flag=1){
    printf("The element is found at %d\n",i+1);
    }
    else{

    printf("element is  not found");
    }
}
return 0;
}
