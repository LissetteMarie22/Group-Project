/*
EXAM 2
BY; James Baker, Lissette Ramos, Pablo Colon Teissonniere
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main() {

	int iResponse = 0;
	int k;
	int averageMiles;
	double gasPrice;
	double currentMoney;
	int carGallons = 10; //gallons of gas the car has.
	int milesTraveled = 0;
	int stopForGas = 0;
	int  num = 0, rf, rc;
	char ch, degree[64];
	int Running = 1;
	char c;
	do {
		printf("\n--------------------------------");
		printf("\n------------EXAM 2--------------");
		printf("\n--------------------------------\n\n");
		printf("\n LIST OF APPLICATIONS \n");
		printf("\n1 Decimal To Binary Converter.");
		printf("\n2 Dice Roller.");
		printf("\n3 Prime Numbers 1-100.");
		printf("\n4 How Far Can You Go?");
		printf("\n5 Temperature Converter.\n");
		printf("\n6 Quit \n\n");
		printf("\nPlease Select from the choices Above: ");
		scanf_s("%d", &iResponse);





		switch (iResponse) {

		case 1:

			/*
			Dice rolling program. Rolls 2 6 sided die, and prints the result:
			Author: James Baker
			Date: 06/23/17
			*/

			printf("-----------------------------------\n");
			printf("----DECIMAL TO BINARY CONVERTER----\n");
			printf("-----------------------------------\n");

			int deci = 0;  //variables
			char bin[8];
			int strray = 0;
			int input = 0;

			printf("\nEnter a number from 1-100: "); //input
			scanf_s("%i", &deci);

			input = deci; //used to print original input at last print

			while (deci != 0)
			{                         //loop for while input does not = 0 continue modulus/divide deci by 2 
				bin[strray] = (deci % 2) + '0';             //and add a tring value of the remainder into strray. 
				deci /= 2;
				strray++;
			}

			bin[strray] = '\0';                             // bin strray array output saved to bin to be printed along with input.

			printf("\n\n%i in binary is: %s\n\n", input, _strrev(bin)); // reverse the bindary string (it prints backwards otherwise)

			system("pause");

			for (;;) {

				printf("Want to use another tool from our menu? (Y/N)\n\n");
				while (getchar() != '\n');
				scanf_s("%c",  &c, 1);
				c = toupper(c);
				if (c == 'N') {
					Running = 0;
					break;
				}
				else if (c == 'Y')
					return main();

				else {
					printf("Invalid Input\n\n");
				}
			}

			return 0; //END
			break;

		case 2:

			/*
			Dice rolling program. Rolls 2 6 sided die, and prints the result:
			Author: James Baker
			Date: 06/23/17
			*/

			printf("-------------------------------\n\n");
			printf("WELCOME TO CRITICAL ROLL v1.0");
			printf("\n\n-------------------------------\n\n"); //Weclome


			int Dice1 = 0;  //Variables
			int Dice2 = 0;
			srand(time(NULL));
			Dice1 = (rand() % 6) + 1;
			Dice2 = (rand() % 6) + 1;

			if (Dice1 == 1) {               //Print ASCII Dice in reference to Random Die Result for 1-6
				printf("\n-------\n");
				printf("\n---X---\n");
				printf("\n-------\n");
				printf("\n\tONE\n");
			}
			else if (Dice1 == 2) {
				printf("\n----X-\n");
				printf("\n------\n");
				printf("\n-X----\n");
				printf("\n\tTWO\n");

			}
			else if (Dice1 == 3) {
				printf("\n-----X-\n");
				printf("\n---X---\n");
				printf("\n-X-----\n");
				printf("\n\tTHREE\n");
			}
			else if (Dice1 == 4) {
				printf("\n-X---X-\n");
				printf("\n-------\n");
				printf("\n-X---X-\n");
				printf("\n\tFOUR\n");
			}
			else if (Dice1 == 5) {
				printf("\n-X---X-\n");
				printf("\n---X---\n");
				printf("\n-X---X-\n");
				printf("\n\tFIVE\n");
			}
			else if (Dice1 == 6) {
				printf("\n-X---X-\n");
				printf("\n-X---X-\n");
				printf("\n-X---X-\n");
				printf("\n\tSIX\n");
			}
			if (Dice2 == 1) {
				printf("\n-------\n");
				printf("\n---X---\n");
				printf("\n-------\n");
				printf("\n\tONE\n");
			}
			else if (Dice2 == 2) {
				printf("\n----X-\n");
				printf("\n------\n");
				printf("\n-X----\n");
				printf("\n\tTWO\n");

			}
			else if (Dice2 == 3) {
				printf("\n-----X-\n");
				printf("\n---X---\n");
				printf("\n-X-----\n");
				printf("\n\tTHREE\n");
			}
			else if (Dice2 == 4) {
				printf("\n-X---X-\n");
				printf("\n-------\n");
				printf("\n-X---X-\n");
				printf("\n\tFOUR\n");
			}
			else if (Dice2 == 5) {
				printf("\n-X---X-\n");
				printf("\n---X---\n");
				printf("\n-X---X-\n");
				printf("\n\tFIVE\n");
			}
			else if (Dice2 == 6) {
				printf("\n-X---X-\n");
				printf("\n-X---X-\n");
				printf("\n-X---X-\n");
				printf("\n\SIX\n");
			}
			if (Dice1 + Dice2 == 2) {                       // Combine the reults of Die1 & Die 2 and Print the Sum for 1-12
				printf("\n\nYOU ROLLED TWO!!!\n\n");
			}
			else if (Dice1 + Dice2 == 3) {
				printf("\n\nYOU ROLLED THREE!!!\n\n");
			}
			else if (Dice1 + Dice2 == 4) {
				printf("\n\nYOU ROLLED FOUR!!!\n\n");
			}
			else if (Dice1 + Dice2 == 5) {
				printf("\n\nYOU ROLLED FIVE!!!\n\n");
			}
			else if (Dice1 + Dice2 == 6) {
				printf("\n\nYOU ROLLED SIX!!!\n\n");
			}
			else if (Dice1 + Dice2 == 7) {
				printf("\n\nYOU ROLLED SEVEN!!!\n\n");
			}
			else if (Dice1 + Dice2 == 8) {
				printf("\n\nYOU ROLLED EIGHT!!!\n\n");
			}
			else if (Dice1 + Dice2 == 9) {
				printf("\n\nYOU ROLLED NINE!!!\n\n");
			}
			else if (Dice1 + Dice2 == 10) {
				printf("\n\nYOU ROLLED TEN!!!\n\n");
			}
			else if (Dice1 + Dice2 == 11) {
				printf("\n\nYOU ROLLED ELEVEN!!!\n\n");
			}
			else if (Dice1 + Dice2 == 12) {
				printf("\n\nYOU ROLLED TWELEVE!!!\n\n");
			}
			system("pause");
			for (;;) {

				printf("Want to use another tool from our menu? (Y/N)\n\n");
				while (getchar() != '\n');
				scanf_s("%c", &c, 1);
				c = toupper(c);
				if (c == 'N') {
					Running = 0;
					break;
				}
				else if (c == 'Y')
					return main();

				else {
					printf("Invalid Input\n\n");
				}
			}


			return 0; // END
			break;

		case 3:
			/* Programmed by: Lissette Ramos
			Programmed on: June 23, 2017
			Program's Intentions: To list the prime numbers from 1 to 100*/
			// Represents any given number from 1 to 100.

			printf("--------------------------------------------------\n");
			printf("----------Find Prime Numbers from 1 - 100---------\n");
			printf("--------------------------------------------------\n");

			for (k = 2; k <= 10; k++) {

				if (k == 2 || k % 2 != 0) {

					printf("%d \n", k);
				}
			}

			for (k = 2; k <= 100; k++) {



				if (k % 2 != 0 && k % 3 != 0 && k % 5 != 0 && k % 7 != 0) {

					printf("%d  \n", k);
				}

			}

			system("pause");
			for (;;) {

				printf("Want to use another tool from our menu? (Y/N)\n\n");
				while (getchar() != '\n');
				scanf_s("%c", &c, 1);
				c = toupper(c);
				if (c == 'N') {
					Running = 0;
					break;
				}
				else if (c == 'Y')
					return main();

				else {
					printf("Invalid Input\n\n");
				}
			}

			return 0;
			break;

		case 4:
			printf("------------------------------------------------- \n");
			printf("-------------------How Far Can You Go?-----------\n");
			printf("----------------------------------------------------\n");

			/*Programmed by Lissette Ramos with help from Pablo J Colon
			On June 23, 2017
			Code Purpouse: Tell someone how far they can go given their car's mpg, how much gas is, and how much money they have.*/


			printf("I will tell you how far you can go based on how much money you have currently, given your cars' mph average, and how much a gallon of gas costs for you. So first off, what is your cars' average MPG?");
			scanf("%d", &averageMiles);

			printf("Nice! OK, how much do you need to pay for a gallon of gas where you live?");
			scanf("%lf", &gasPrice);

			printf("Cool, and how much money do you have now?");
			scanf("%lf", &currentMoney);

			while (carGallons > 0) {
				carGallons = carGallons - 1;
				milesTraveled = milesTraveled + averageMiles;
				if (carGallons == 0 && currentMoney > 0) {
					if (currentMoney >= (gasPrice * 10)) {
						currentMoney = currentMoney - (gasPrice * 10);
						carGallons = 10;
						stopForGas++;
						continue;
					}
				}

			}
			printf("You were able to travel %d miles before running out of money. \n", milesTraveled);
			printf("You stopped to get gas %d times\n", stopForGas);
			printf("You now have %.2lf remaining\n", currentMoney);

			system("pause");

			for (;;) {

				printf("Retry? (Y/N)\n\n");
				while (getchar() != '\n');
				scanf_s("%c", &c, 1);
				c = toupper(c);
				if (c == 'N') {
					Running = 0;
					break;
				}
				else if (c == 'Y')
					return main();

				else {
					printf("Invalid Input\n\n");
				}

				for (;;) {

					printf("Want to use another tool from our menu? (Y/N)\n\n");
					while (getchar() != '\n');
					scanf_s("%c", &c, 1);
					c = toupper(c);
					if (c == 'N') {
						Running = 0;
						break;
					}
					else if (c == 'Y')
						return main();

					else {
						printf("Invalid Input\n\n");
					}
				}


				return 0;
				break;

		case 5:
			/* Programmed by Pablo J Colon
			Last Revision: June 24th, 2017*/

			//Variable Declarations

			//Introductions and data input

			printf("---------------------------------\n");
			printf("-----TEMPERATURE CONVERTER-------\n");
			printf("---------------------------------\n\n");
			//Number Verification
			while (num == 0) {
				printf("Please type the number of degrees (Min -50/Max 250): ");
				fgets(degree, 63, stdin);

				if (strlen(degree) < 3 || strlen(degree) > 4) {
					printf("Invalid Input. Try again.\n");
					continue;
				}
				if (sscanf_s(degree, "%d", &num) != 1) {
					num = 0;
					printf("Invalid Input. Try again.\n");
					continue;
				}
				if (num < -50 || num > 250) {
					num = 0;
					printf("Invalid Input. Try again.\n");
					continue;
				}

			}
			//Follow-up Question for Type
			printf("Thank you! Now is this Celsius or Fahrenheit? (C/F): ");
			scanf_s(" %c", &ch);
			if (ch == 'F' || ch == 'f') {
				rf = (num - 32) / 1.8;
				printf("\nThe result is: %d \370C \n", rf);
			}
			else {
				if (ch == 'C' || ch == 'c') {
					rc = num * 1.8 + 32;
					printf("\nThe result is: %d \370F \n", rc);
				}
			}
			for (;;) {

				printf("Want to use another tool from our menu? (Y/N)\n\n");
				while (getchar() != '\n');
				scanf_s("%c", &c, 1);
				c = toupper(c);
				if (c == 'N') {
					Running = 0;
					break;
				}
				else if (c == 'Y')
					return main();

				else {
					printf("Invalid Input\n\n");
				}
			}
			}


		case 6:
			exit(0);

		default:
			printf("Sorry, but that was not an option; Please enter one of our choices. Type any number between 1 and 6.");



			system("pause");
		}

	}while (iResponse != 6);
}