#include<stdio.h>

int negyzet(int number){
	return number * number;
}

int main(){
	int valtozo = 3;
	int eredmeny = negyzet(valtozo);
	printf("eredmeny: %d\n", eredmeny);
	return 0;
}