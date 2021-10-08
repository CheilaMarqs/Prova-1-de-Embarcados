#include<stdio.h>
int main(){
	int a,b,x;
	a=1;
	b=1;
	x=!(a || b);
	x=!x;
	printf("\n\nNOT (%d NOR %d) = %d",a,b,x);
	a=0;
	b=1;
	x=!(a || b);
	x=!x;
	printf("\nNOT (%d NOR %d) = %d",a,b,x);
	a=1;
	b=0;
	x=!(a || b);
	x=!x;
	printf("\nNOT (%d NOR %d) = %d",a,b,x);
	a=0;
	b=0;
	x=!(a || b);
	x=!x;
	printf("\nNOT (%d NOR %d) = %d",a,b,x);
	return 0;
}
