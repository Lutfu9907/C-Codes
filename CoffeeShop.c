#include <stdio.h>


void welcome()
{
	//Print a welcome message to the user
	printf  ("Welcome to X Coffee Shop\n\n");
}



int returnHesCode()
	//Ask HES code for service
{
	printf ("Please show your HES code \n\nfor showing your HES code select (1), if you don't have any HES code select (2)\n\n");
	int hcode;
	scanf_s("%d",&hcode);
    return hcode;
}
int coffee_type()
	//Ask user to select a coffee type
{
	printf  ("Please select a coffee type \nLatte(1) 2 TL , Ice Chocolate(2) 4 TL , Mocha(3) 5 TL :\n");
	int coffee;
	scanf_s ("%d",&coffee);
	return coffee;
}

int coffee_size()
	//Ask user to select a coffee type
{
	printf  ("Please select a coffee size \n Tall(1), Grande(2), Venti(3):\n");
	int size;
	scanf_s ("%d",&size);
	return size;
}

int coffee_sugar()
	//Ask if user would like to add sugar
{
	printf  ("Please select if you want your coffee with sugar \n with sugar(1), without sugar(2)):\n");
	int sugar;
	scanf_s ("%d",&sugar);
	return sugar;
}



void cost(int coffeeType, int coffeeSize, int sugar)
	//Print the price of the coffee acording to user's choices.
{
	int price = 0;
	if(coffeeType == 1)
	{
		price =  2;
	}      
	else if(coffeeType == 2)
	{
		price =  4;
	}
	else if(coffeeType == 3)
	{
		price =  5;
	}
	if(coffeeSize == 2)
	{
		price *= 2;
	}
	else if(coffeeSize == 3)
	{
		price *= 3;
	}
    if(sugar == 1)
    {
    	price += 1;
	}
	printf("Price of your coffee is : %d TL \n",price);
}

void paymentOption()
	//Ask user for a payment option
{
	printf("How do you going to pay with\nCredit card(1),Cash(2)\n");
	int payment;
	scanf_s("%d", &payment);
	if (payment == 1)
	{
		printf("We're taking your payment with Credit card...\n");
	}
	else if (payment == 2)
	{
		printf("We're taking your payment with Cash...\n");
	}
}

void goodbye()
	//Print a goodbye message for the user
{
	printf("Goodbye, have a nice day");	
}

void main()
	//Welcome the user, take their order, calculate the price and say goodbye
{
	int coffee;
	int size;
	int sugar;
	
	welcome ();
	int hcode = returnHesCode();
	if (hcode == 1)
	{		
		printf("Welcome again, you can start to pick your coffee\n");
	}
	else if (hcode == 2)
	{   
		printf("You can't get any service without a HES code\n");
		//We terminated the program if user doesn't have any HES code
		return;
	}
	coffee = coffee_type();
	size   = coffee_size();
	sugar  = coffee_sugar();
	cost(coffee,size,sugar);
	paymentOption();
	goodbye();
}
