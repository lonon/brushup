#include <stdio.h>

int line_length(char string[], int limit);
void copy_char(char src[], char dest[])

int main(){
	


	return 0;
}

int line_length(char string[], limit){
	int c, i;

	for (i=0; i<limit=1 && (c=getchar() != EOF) && c !='\n'; ++i){
		string[i] = c;
	}
	if ( c == '\n'){
		string[i] = c;
		++i
	}
	s[i] = '\0';

	return i;
}

/*Look, the assumption here is that destinantion simepre es la mas grande*/
void copy(char from[], char to[]){
	int i;
	i = 0;

	while((to[i] = from[i]) != '\0'){
		++i;
	
	}
}
