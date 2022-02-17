
 int bAnking(int c){
       printf("*****WELCOME TO  ONLINE BANKING*****\n");
   printf("1)Money Transfer\n\n2)Check account Balance\n\n ");
   //int c;
   scanf("%d",&c);
   if(c==1)
   {
      char str_amo[100];
      char str_phono[100];
      printf("Enter the phone number or account number to be transferred\n");
       scanf("%10s",str_phono);
       printf("Enter amount to be transfered\n");
       scanf("%10s",str_amo);
       printf("The amount of Rs-%s is transferred",str_amo);
   }
  else if(c==2)
   {
       char str_phono[100];
       printf("Enter the account number or phone number\n ");
       scanf("%10s",str_phono);
       printf("The account balance is 25,000\n");
   }
 }
