#include <stdio.h>

int main(){
	int step, lower, upper;
	float fahr, cel;

	step = 20;
	upper = 300;
	
	printf("Fahrenheit\t\tCelcius");
	for(fahr = 0; fahr <= upper; fahr = fahr + step){
		printf("%0.f\t\t%6.2f\n", fahr, (5.0/9.0)*(fahr-32));
	}

	return 0;
}
