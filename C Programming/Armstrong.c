#include<stdio.h>
#include<math.h>
main()
{
  int a,b,c,d,i,res=0;
  scanf("%d",&a);
  c=a;
  d=a;
  while(a!=0){
  a=a/10;
  b++;
  }
  printf("%d",b);
  while(c!=0){
    i=c%10;
    res=res+pow(b,i);
    c=c/10;
  }
  printf("%d",d);
  printf("%d",res);
  if(d==res)
  printf("yes");
  else if(d!=res)
  printf("no");
}
