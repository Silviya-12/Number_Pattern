#include<stdio.h>
int main(){
int i,j,k;
int n;
printf("Enter size: ");
scanf("%d",&n);
printf("Number Pattern:\n");
for(i=1;i<=n;i++)
{
for(j=i;j<=n;j++){
printf("%d ",j);
}
for(k=1;k<i;k++){
printf("%d ",k);
}
printf("\n");
}
}
