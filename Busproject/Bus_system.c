#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
char b,n;
char Uname[15];//username
char Pas[6];//password
int c,s,j,tb; //c for cost s for seats j for option selection tb is type of bus
int cost;
int amount,total,bal;
    printf("Username:\n");
    scanf("%s",&Uname);
    printf("Password:\n");
    scanf("%s",&Pas);
    if(strcmp(Uname,"CAPTAIN")==0){
    if(strcmp(Pas,"1234")==0)
    printf("hello there %s, You are logged in\n",Uname);
    printf("\nDo u want to make a booking or payment?\n");
    } else{
    printf("Wrong username or password, please try again\n");
    exit(EXIT_SUCCESS);
    }
    printf("1-Yes\n");
    printf("2-No\n");
    printf("---------------\n");
    scanf("%d",&c);
    while(1){
    switch (c){
    case 1:
    printf("01-Bus Booking status\n");
    printf("02-Bus Booking\n");
    printf("03-Booking payment\n");
    printf("04-Bus Booking reports\n");
    printf("05-Sign out\n");
    printf("-----------------\n");
    scanf("%d",&j);
    switch (j){
    case 01:
    printf("No bookings yet\n");
    break;
    case 02:
    printf("What is the type of Bus?\n");
    printf("001- Luxury\n");
    printf("002- Ordinary\n");
    scanf("%d",&tb);
    switch(tb){
    case 001:
    printf("The cost is %d",cost = 50000);
    break;
    case 002:
    printf("The cost is %d",cost = 25000);
    break;
    }
    printf("\n---------------\n");
    printf("How many seats?\n");
    scanf("%d",&s);
    if(s>60){
    printf("We only have 60 Luxury Seats and 60 Ordinary seats available, please try again and choose correctly\n");
    }else{
    printf("Number of seats is %d",s);
    printf("\nYour total cost is %d\n",s*cost);
    printf("Your receipt number is %dBS%d\n",cost,s);
    printf("\n------------------\n");
    }
    break;
    case 03:
    printf("Enter Your Receipt Number\n");
    scanf("%dBS%d",&cost,&s);
    printf("Receipt No : %dBS%d",cost,s);
    printf("\nEnter Amount Being Paid\n");
    scanf("%d",&amount);
    int bal;
    if(amount > s*cost){
    printf("The balance is %d\n",bal = amount - s*cost);
    printf("Receipt Number:\t %dBS%d",cost,s);
    printf("\nBooking Number PN%d",s);
    printf("\nAmount paid is %d",s*cost);
    printf("\n--------------------\n");
    }else{
    printf("Enter Amount greater or equal to cost\n");
    scanf("%d",&amount);
    printf("Receipt Number:\t %dBS%d",cost,s);
    printf("\nBooking Number PN%d",s);
    printf("\nAmount paid is %d",s*cost);
    printf("\nBalance : %d",bal = amount - s*cost);
    printf("\n-----------------\n");
    }
    break;
    case 04:
    printf("\n No reports to show\n");
    printf("\n------------------\n");
    break;
    case 05:
    printf("\nYou are signed out\n");
    exit(EXIT_SUCCESS);
    break;
    default :
    printf("Incorrect Input\n");
    break;
    }
    break;
    case 2 :
    printf("\nGOOD BYE\n");
    break;

    default:
    printf("Invalid Input\n");
    break;
    }
    }
    getch();
    return 0;}
