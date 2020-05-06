#include <stdio.h>

int main()
{
  int num1,num2,option;
  printf("Open Source SW Project\n");
  printf("First Github Tranning\n");
  printf("Choose \n1.add\n2.sub\n3.mul\n4.div\n5.exit\n:");
  scanf("%d",&option);
  switch(option)
  {
    case 1:
      printf("Enter the first number:");
      scanf("%d",&num1);
      printf("Enter the second number:");
      scanf("%d",&num2);
      printf("%d +%d =%d",num1,num2,num1+num2);
      break;
    case 2:
      printf("Enter the first number:");
      scanf("%d",&num1);
      printf("Enter the second number:");
      scanf("%d",&num2);
      printf("%d -%d =%d",num1,num2,num1-num2);
      break;
    case 3:
      printf("Enter the first number:");
      scanf("%d",&num1);
      printf("Enter the second number:");
      scanf("%d",&num2);
      printf("%d *%d =%d",num1,num2,num1*num2);
      break;
    case 4:
      printf("Enter the first number:");
      scanf("%d",&num1);
      printf("Enter the second number:");
      scanf("%d",&num2);
      printf("%d /%d =%d",num1,num2,num1/num2);
      break;
    case 5:
      printf("exit\n");
     return 0;
    default:
      printf("You enter the wrong number\n");
      break;
  }
  return 0;
}
