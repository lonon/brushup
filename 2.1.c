#include <stdio.h>

#include <limits.h>
#include <float.h>

int main(){
	printf("The range for char is from %d to %d\n", CHAR_MIN, CHAR_MAX);
	printf("The range for long int is from %ld to %ld\n", LONG_MIN, LONG_MAX);

	//from here following the logic is straightforward, just check the headers
	return 0;

}
