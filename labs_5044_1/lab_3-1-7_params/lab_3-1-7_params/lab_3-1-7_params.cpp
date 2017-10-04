#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[]) {
	printf("argc = %d\n", argc);

	for (int i = 0; i < argc; i++) {
		printf("%d: %s\n", i, argv[i]);
	}
		
	_getch();
	return 0;
}