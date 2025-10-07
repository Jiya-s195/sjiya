#include <stdio.h>
int main(){
int i=5,*j,*k;
j=&i;
j++;  j+=4;
k = j+5;
printf("%d\n",k);
printf("%d\n",*j);
printf("%d\n",i);
return 0;
}
