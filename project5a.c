#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	{
	int x =4;
	int*p;//declaration
	p=&x;//initialization
	printf("value at address pointed by P: %d\n",*p);
	printf("value of x: %d\n",x);
	printf("address of x: %d\n",&x);
	printf("value of p: %d\n",p);
	printf("address of p: %d\n",&p);
	*p=*p+2;
	}
	return 0;
}
