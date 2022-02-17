
int mEdicine(int a){
    char str_medi[100];
   
    printf("*****Welcome to Online Medicine Booking*****\n");
    printf("1.Homeopathy\n2.Ayurveda\n");
    scanf("%d",&a);
    if(a==1)
    {
       printf("Enter the Homeopathy medicine to be booked\n");
       scanf("%10s",str_medi);
       printf("%s  Medicine is successfully ordered\nThank you",str_medi);
    }
    else if(a==2)
    {
       printf("Enter the Ayurvedha medicine to be booked\n");
       scanf("%10s",str_medi);

       printf("%s  Medicine is successfully ordered\nThank you",str_medi);
    }
    else
    {
    printf("Invalid option try again");
    }
}
