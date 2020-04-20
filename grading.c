#include<stdio.h>
void main ()
{
  printf("Enter the number \n");
  int number;
  scanf("%d",&number);
  if (number>= 85 && number<=100)
  {
    printf("Grade A");
  }
  if(number<=84 && number >=70)
  { 
    printf("Grade B");
   }
  if(number<=69 && number >=55)
   {
    printf("Grade C");
   }
   if(number<=54 && number >=40)
   {
    printf("Grade D");
   }
   if(number<40)
   {
    printf("Grade F");
   }
}
