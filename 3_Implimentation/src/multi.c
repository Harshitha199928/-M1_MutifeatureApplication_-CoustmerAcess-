#include<stdio.h>
#include"quant.h"
#include"banking.c"
#include"medicine.c"
void main()
{
   int c;
   char str[50];
   char str_password[50];
   //char str_medi[100];
    int a;
   int p1;
   printf("New user SELECT 1\n    Login SELECT 2\n");
   scanf("%d",&p1);
   if(p1==1)
{
    printf("Enter user name\n");
    scanf("%10s",str);
    printf("Enter password\n");
    scanf("%10s",str_password); 
    printf("Logedin sucessfully\n");
    
}
else if(p1==2)
{
   printf("Enter user name\n");
    scanf("%10s",str);
    printf("Enter password\n");
    scanf("%10s",str_password); 
    printf("Logedin sucessfully\n");
}
else
{
   printf("Please enter Valid Option\n");
}
printf("\n*****WELCOME TO MULTIFEATURE APPLICATION******\n");
printf("1.For Food Order\n2.For Banking\n3.For Medicine Booking\n");
int p2;
scanf("%d",&p2);
if(p2==1)
{
   printf("*****WELCOME TO ENGINEERS KITCHEN******\n");
   printf("CHOOSE YOUR FAVORITE\n1)Vegitarian\n2)Non Vegitarian\n ");
   int op;
   scanf("%d",&op);
   if(op==1)
   {
       int choice,q;
       printf("Vegitarian Menu\n1.Ragiball meals=100-Rs/-\n2.Masala Dosa=45-Rs/-\n3.IDLI=30-Rs/-\n\n ");
       scanf("%d",&choice);
       if(choice==1)
       {
             printf("Quatinty of Ragiball meals\n");
             scanf("%d",&q);
             printf("Your order  %d Quantity of Ragiball meals Booked\nThank you for choosing Engineers kitchen\n Enjoy the food and visit again",q);
       }
       else if(choice==2) 
       {
              printf("Quatinty of Masala Dosa\n");
             scanf("%d",&q);
             printf("Your order  %d Quantity of Masala Dosa Booked\nThank you for choosing Engineers kitchen\n Enjoy the food and visit again",q);
        }
         else if(choice==3) 
       {
              printf("Quatinty of  IDLI\n");
             scanf("%d",&q);
             printf("Your order  %d Quantity of IDLI Booked\nThank you for choosing Engineers kitchen\n Enjoy the food and visit again",q);
        }
         else
         {
              printf("Selected Invalid option Please try again");
         }
   }
  else if(op==2)
   {
       int choice,q;
       printf("Non Vegitarian Menu\n1.Chicken Sambar with Ragiball=200-Rs/-\n2.Mutton Biryani=145-Rs/-\n3.Fish Tawa Fry=150-Rs/-\n");
       scanf("%d",&choice);
       if(choice==1)
       {
             printf("Quatinty of Chicken Sambar with Ragiball\n");
             scanf("%d",&q);
             printf("Your order  %d Quantity of Chicken Sambar with Ragiball Booked\nThank you for choosing Engineers kitchen\n Enjoy the food and visit again",q);
       }
       else if(choice==2) 
       {
              printf("Quatinty of Mutton Biryani\n");
             scanf("%d",&q);
             printf("Your order  %d Quantity of Mutton Biryani Booked\nThank you for choosing Engineers kitchen\n Enjoy the food and visit again",q);
       }
         else if(choice==3) 
       {
           
              printf("Quatinty of  Fish Tawa Fry\n");
             scanf("%d",&q);
             int b;
             int sum=quant(q,b);
             printf("Your order  %d Quantity of Fish Tawa Fry Booked and amount of Rs%d/-\nThank you for choosing Engineers kitchen\n Enjoy the food and visit again",q,sum);
        }
         else 
         {
              printf("Selected Invalid option Please try again");
         }
   }
}
if(p2==2)
{
    c = bAnking(c);
}
if(p2==3)
{  
   a= mEdicine(a);
   
}
}
