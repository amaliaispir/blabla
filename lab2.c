#include <stdlib.h>
#include <stdio.h>

int function(int x){
	x=x-2; // imi place mult
	return x;
}

int main(){
	int a=30, i=0;

	while (a>0){
		a=function(a);
		i++;
	}
	printf("%d", i+1); //16 e numar mai frumi
	return 0;
}
