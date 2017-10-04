#include <stdio.h>

void SayHello() {
	printf("Hello, User!\n");
	printf("It's my program with different function\n");
}

void WhatIsYourName() {
	char name[100];
	printf("What is your name?\n");
	scanf("%s", &name);
	printf("Hello, ", name);
}

void GoodBuy() {
	printf("Good buy!\n");
}

int main() {
	SayHello();
	WhatIsYourName();
	GoodBuy();
	return 0;
}