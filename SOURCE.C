#include<stdio.h>
int main()
{
    printf("//Rishabh SINGH\n");
    printf("//BILLING SYSTEM\n\n\n");
 int a, b, choice, opt;
 float total_amt, amt, sub_total, discount_amt, LED, TV, discount;
 printf("===========================================\n\n");
 printf("\t\tWelcome to BILLING SECTION\n\n");
 printf("===========================================\n\n");
 printf("Select Option\n\n");
 printf("\n\t1.ONLY LED\n\t2.LED AND DISH CONNECTION\n\t3.EXIT\n\n");
 scanf("%d", &choice);
  
 if (choice>4){
         printf("select the correct option");
     } 
      
 switch(choice)
 {
     case 1:printf("On the purchase of LED if you will purchase LED with televison connection you will get 10\%%"" discount,\nBut if you purchase any LED you will get only 5\%%"" discount.\n\n" );
     printf("Do you want to purchase both?\n\n");
     printf("\t1.YES\n\t2.NO\n\n");
     scanf("%d",&opt);
     switch(opt)
     {
         case 1:  printf("Enter the price of LED: ");
         scanf("%f", &LED);
         printf("Enter the price of TV connection: ");
         scanf("%f", &TV);
         printf("Enter the discount percentage:  \n");
         scanf("%f", &discount);
     
         amt= LED + TV;
     
         discount_amt = (amt * discount)/100.0;
         sub_total = amt-discount_amt;
         total_amt = sub_total;
         
         printf("\n\n\n******************BILL******************");
         printf("\nprice of LED:           %f",LED);
         printf("\nprice of TV connection: %f",TV);
         printf("\n\t\t\t\t\t\t----------");
         printf("\nAmount:                 %f", amt);
         printf("\nDiscount:              -%f",discount_amt);
         printf("\nDiscount total:         %f",sub_total);
         printf("\n\t\t\t\t\t\t-----------");
         printf("\ntoatal Amount:          %f", total_amt);
     
         break;
         
         case 2: printf("OK");
         break;
         
     }
     
     
     
     break;
      
 
    case 2:printf("Enter the price of LED: ");
         scanf("%f", &LED);
         printf("Enter the price of TV connection: ");
         scanf("%f", &TV);
         printf("Enter the discount percentage:  \n");
         scanf("%f", &discount);
     
         amt= LED + TV;
     
         discount_amt = (amt * discount)/100.0;
         sub_total = amt-discount_amt;
         total_amt = sub_total;
         
         printf("\n\n\n******************BILL******************");
         printf("\nprice of LED:           %f",LED);
         printf("\nprice of TV connection: %f",TV);
         printf("\n\t\t\t\t\t\t----------");
         printf("\nAmount:                 %f", amt);
         printf("\nDiscount:              -%f",discount_amt);
         printf("\nDiscount total:         %f",sub_total);
         printf("\n\t\t\t\t\t\t-----------");
         printf("\ntoatal Amount:          %f", total_amt);
     break;
     
     case 3: printf("Thank you");    
     break;
     
     case 4:printf("THANKS ");
     break;
 }
 return 0;
}
