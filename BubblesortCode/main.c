# include <stdio.h>
void bubblesort (int [x], int n){
int i,j,t;
for(i=0;i<n;i++){
for(j=0;j<n;j++){
if(x[j]>x[j+1]){
t=x[j];
x[j]=x[j+1];
x[j+1]=t;
}
}
}
}
void main(){
int i,n,x[25];
printf("Key in the number of elements\n");
scanf("%d",&n);

printf("key in the array elements\n");
for(i=0;i<n;i++){
scanf("%d\n",&x[i]);
}
bublesort(x,n);
printf("Array elements sorted:\n");
for(i=0;j<n;i++){
print("%d", x[i]);
}

}
