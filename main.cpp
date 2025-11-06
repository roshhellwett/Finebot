#include <cstdlib>
#include <stdio.h>
int inputdaysFunc(int days)
{
   scanf("%d",&days);
   return days;
}
int calcfineFunc(int days, int fine)
{
   if (days <= 15)
   {
      fine = (days*1);
      return fine;
   }
   else if (days <= 16 && days >= 30)
   {
      fine = (days*2);
      return fine;
   }
   else
   {
      fine = (days*5);
      return fine;
   }
}
int amountFunc(int days, int amount)
{
   if (days <= 15)
   {
      return amount = 1;
   }
   else if (days >= 16 && days <= 30)
   {
      return amount = 2;
   }
   else
   {
      return amount = 5;
   }
}
void disfineFunc(int days, int fine, int amount)
{
   printf("\n");
   printf("\n:--DISPLAY SECTION--:\n");
   printf("FINE : %d(%d DAYS * %dRS)",fine, days, amount);
   printf("\n");
}
char loopFunc(char choice)
{
   printf("\n");
   printf(":--CALCULATE FINE AGAIN--:\n");
   printf("Y FOR YES\n");
   printf("N FOR NO\n");
   scanf(" %c",&choice);
   printf("\n");
   return choice;
}
int main()
{
   char choice;
   do
   {
      int days, fine, amount;
      printf("Enter the number of days: ");
      days = inputdaysFunc(days);
      fine = calcfineFunc(days, fine);
      amount = amountFunc(days, amount);
      disfineFunc(days, fine, amount);
      choice = loopFunc(choice);
      if (choice == 'n' || choice == 'N')
      {
         printf("\n:--THANKS FOT USING--:\n");
         exit(0);
      }
   }while (choice == 'y' || choice == 'Y');
   return 0;
}