#include<stdio.h>
int main()
{
  int Number, i, Sum = 0;
  
  printf("\nPlease Enter any Integer Value\n");
  scanf("%d", &Number);
  
  for(i = 1; i <= Number; i++)
  {
     Sum = Sum + i;
  }
  
  printf("Sum of Natural Numbers = %d", Sum);
  return 0;
}




ease Enter any Integer Value
14
Sum of Natural Numbers = 105