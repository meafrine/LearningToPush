#include <stdio.h>
void selectionsort (int low, int high);
int a[25];
int main (){
int num, i=0;
printf("Enter the number of elements\n");
scanf("%d",&num);

printf("key in the array elements\n");
for(i=0;i<num;i++){
scanf("%d\n",&a[i]);
}
selectionsort (0,num-1);
printf("Element after sorting are:\n");

for (i=0;i<num;i++){
printf("%d\n",&a[i])
return 0;
}
voidselectionsort (int low,int high){
int i=0,j=0,temp=0,minindex;
for(i=low;i<=high;i++){
minindex=i;
for(j=i+1;j<=high;j++){
if(a[j]<a[minindex])
minindex=j;
temp=a[i];
a[i]=a[minindex];
a[minindex]=temp;
}
}
}
}
