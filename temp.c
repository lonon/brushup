#include <stdio.h>

/*Print fahrenheit to Celcius */
int main(){
	int step, lower, upper;
	step = 10;
	lower = 0;
	upper = 300;

	float fahr, cel;
	
	fahr = lower;
	printf("Fahrenheit\t\tCelcius\n");
	while(fahr <= upper){
		cel = 5 * (fahr - 32) / 9;
		printf("%4.0f\t\t%6.2f\n", fahr, cel);
		fahr = fahr + step;
	}


	return 0;
}
