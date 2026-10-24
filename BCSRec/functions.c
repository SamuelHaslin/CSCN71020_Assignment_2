#include <stdio.h>
#include <stdbool.h>
#include "functions.h"
// function to read an integer input by displaying a message
int getIntInput(char message[]) {
	int input;
		printf("\n%s\n", message);
		 scanf_s("%i", &input);
		return input;
}
// read length if between 0 and 100 otherwise set it to -1
int setLength(int input) {
	if (input >= 1 && input <= 99)//I changed the code from input >0 && <= 100 to input >= 1 && input <= 99 

	{
		int length = input;
		return length;
	}
	

	return 1; //I removed the bracket on the one after the return 
		
	
}
// read width if between 0 and 100 otherwise set it to -1
	int setWidth(int input)
	{

		if (input >= 1 && input <= 99) //I changed the code from input >0 && <= 100 to input >= 1 && input <= 99
		{
			int width = input;
			return width;
		}
		return 1;
	}

// calculate permiter
int getPerimeter(int length, int width) //I changed the return formula for the get perimeter because it was incorrect
{
	return 2 *(length + width);
}
// calculate area
int getArea(int length, int width) //I changed the formula for the area, becasue it was incorrect
{
	return length * width;
}
// printing menu and options

void printWelcomeMenu() {
	printf(" **********************\n");
	printf("**     Welcome to     **\n");
	printf("**    Assignment 02   **\n");
	printf(" **********************\n");
}

void printOptions() {
	printf("1. Get Rectange Length & Width\n");
	printf("2. Change Rectangle Length\n");
	printf("3. Change Rectangle Width\n");
	printf("4. Get Rectangle Perimeter\n");
	printf("5. Get Rectangle Area\n");
	printf("6. Exit\n");
}