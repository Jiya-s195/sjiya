#include <stdio.h>
int main(){
int arr[6]={10,20,50,60,50,78};
int i;
int *ptr;
ptr=arr;
printf("Accessing array elements using pointer:\n");
for(i=0;i<6;i++){
printf("Elements %d=%d\n",i,*(ptr++));
}
return 0;
}
