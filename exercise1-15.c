#include <stdio.h>
int conversion(int lower, int upper, int step);
main(){
	conversion(0, 300, 20);
}
int conversion(int lower, int upper, int step){
	int fahr, celsius;
	fahr = lower;
	while(fahr<=upper){
		celsius = 5*(fahr-32)/9;
		printf("%3d\t%3d\n", fahr, celsius);
		fahr = fahr + step;
	}
}