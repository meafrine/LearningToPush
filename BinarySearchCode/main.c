#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[25],n,element,i,flag=0,low,high;
    printf("Enter the number of elements\n");
    scanf("%d\n",&n);

    printf("Enter the elements in ascending order\n");
    for(i=o;i<n;i++){
    scanf("%d",num[i]);
    }

    printf("Key in the elements to search\n");
    scanf("%d",&element);

    low=0; high=n-1;
    while(low<high){
    mid=(low+high)/2
    if(num[mid]=element){
    flag=1;
    break;
    }
    else{
    low=mid+1;
    }
    }

    if(flag==1){
    printf("Element found at location %d\n,mid+1")
    }
    else{
    printf("Element not found\n");
    }

    return 0;
}
