#include <stdio.h>

/*Print fahrenheit to Celcius */
int main(){
	int step, lower, upper;
	step = 10;
	lower = 0;
	upper = 300;

	int fahr, cel;
	
	fahr = lower;
	printf("Fahrenheit\t\tCelcius\n");
	while(fahr <= upper){
		cel = 5 * (fahr - 32) / 9;
		printf("%d\t\t%d\n", fahr, cel);
		fahr = fahr + step;
	}


	return 0;
}
