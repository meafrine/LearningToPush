#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[25],n,element,i,flag=0;
    printf("Key in the number of elements\n");
    scanf("%d",&n);

    printf("Key in the  elements\n");
    for(i=0;i<n;i++){
    scanf("%d\n",&num[i]);
    }

    print("Key in the element to search\n");
    scanf("%d\n",&element);


    if(flag==1){
    printf("Element found at %d",i+1);
    }
    else{
    printf("Element not found");
    }

    return 0;
}
