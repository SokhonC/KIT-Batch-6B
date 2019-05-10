#include<stdio.h>
main()
{
  int i,j,b,c=0;
  scanf("%d",&i);
  j=i;
  while(j!=0){
    b=j%10;
    c=c*10+b;
    j/=10;
  }
  if(i==c)
    printf("palindrom");
  else
  printf("not a palindrom");
}
