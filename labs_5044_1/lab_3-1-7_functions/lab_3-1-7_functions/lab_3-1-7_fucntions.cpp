#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <conio.h>


void SayHello() {
	printf("Hello, User!\n");
	printf("It's my program with different function\n");
}

void WhatIsYourName() {
	char name[100];
	printf("What is your name?\n");
	scanf("%s", name);
	printf("Hello, %s!\n", name);
}

void GoodBuy() {
	printf("Good buy!\n");
}

int main() {
	SayHello();
	WhatIsYourName();
	GoodBuy();

	_getch();
	return 0;
}