//MOHAMAD SAIFUL NIZAM BIN ABD AZIZ (A179830)
#include<stdio.h>
int main(){

int orderrr;
// 1=Roti Canai
// 2=Nasi Lemak
// 3=Mee Kari
// 4=Roti Bakar
double pric , quan;
printf("<<<WELCOME TO SAITAMA RESTAURANT>>>");
printf("\n...................................\nList of Menu:-  Price:-\n1=Roti Canai    RM1.50\n2=Nasi Lemak    RM3.00\n3=Mee Kari      RM6.50\n4=Roti Bakar    RM2.50");
printf("\n...................................\nEnter your order number: ");
scanf("%d",&orderrr);
printf("Enter quantity: ");
scanf("%lf",&quan);

switch(orderrr){
   case 1:
      pric=1.50 * quan;
      printf("The total price for your %.0lf roti canai is RM%.2lf",quan,pric);
      break;
   case 2:
      pric=3.00*quan;
      printf("The total price for your %.0lf nasi lemak is RM%.2lf",quan,pric);
      break;
   case 3:
      pric=6.50*quan;
      printf("The total price for your %.0lf mee kari is RM%.2lf",quan,pric);
      break;
   case 4:
      pric=2.50*quan; 
      printf("The total price for your %.0lf roti bakar is RM%.2lf",quan,pric);
      break;
   default:
      printf("Your order is not on the menu");
   }
}