#include<stdio.h>
int main(){
	int choice = 0;
  int qty = 0;
  int total = 0;

     printf("                Welcome to charloos snack bar.          \n ");
  printf("             +============================+          \n\n");
  printf("                  $  Snack Menu  $ \n\n");
  printf("  && Please select the snack that you would like to purchase. && \n\n");
  printf("\t\t   [1] hot dog - sh 90.00\n");
  printf("\t\t   [2] hamburger - sh 300\n");
  printf("\t\t   [3] french fries - sh 150\n");
  printf("\t\t   [4] milk shake - sh 150\n");
  printf("\t\t   [5] coffee - sh 70\n");
  printf("\t\t   [6] beef smokie - sh 40\n");
  
  
  printf("Enter your choice here : ");
  scanf("%d", &choice);
  

    switch (choice)
    {
    case 1:
        printf("HOT DOG JUICE SELECTED, PLEASE! Enter the Quantity : ");
        scanf("%d", &qty);
        total = qty * 90;
        printf("Total Amount For Pay : %d", total);
        break;
    case 2:
        printf("HAMBURGER SELECTED, PLEASE! Enter the Quantity : ");
        scanf("%d", &qty);
        total = qty * 300;
        printf("Total Amount For Pay : %d", total);
        break;
    case 3:
        printf("FRENCH FRIES, PLEASE! Enter the Quantity : ");
        scanf("%d", &qty);
        total = qty * 150;
        printf("Total Amount For Pay : %d", total);
        break;
    case 4:
        printf("MILK SHAKE, PLEASE! Enter the Quantity : ");
        scanf("%d", &qty);
        total = qty * 150;
        printf("Total Amount For Pay : %d", total);
        break;
    case 5:
        printf("COFFEE SELECTED, PLEASE! Enter the Quantity : ");
        scanf("%d", &qty);
        total = qty * 70;
        printf("Total Amount For Pay : %d", total);
        break;
    case 6:
        printf("BEEF SMOKIE SELECTED, PLEASE! Enter the Quantity : ");
        scanf("%d", &qty);
        total = qty * 40;
        printf("Total Amount For Pay : %d", total);
        break;
    
    default:
        printf("We are Sorry, for this....");
        break;
    }
    return 0;
     printf("                  Thank You Very Much          \n ");
  printf("             +============================+          \n\n");
  printf("               && Please come again. && \n\n");
}



  