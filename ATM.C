#include <stdio.h>

 int main()
 {
  int b=5000,a,ch;

  printf("1.withdrawal\n2.deposit\n");
  scanf("%d",&ch);

  printf("enter amount:");
  scanf("%d",&a);

  if (ch==1&&a>0 && a <=b)
     printf("balance=%d",b-a);
  else if (ch==2&& a>0)
       printf("balance=%d",b+a);
  else
      printf("invalid amount");

      return 0;
   }