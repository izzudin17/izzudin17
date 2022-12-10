#include <stdio.h>
#include <stdlib.h>

main(){
	int i, kolom;
	char input[]={'T', 'u', 'r', 'b', 'o', '_', 'C'};
	/**
	printf("Masukkan kata : ");
	scanf("%c", &input);**/
	
	for(i=7; i>=0; i--){
		for(kolom=0; kolom<i; kolom++){
			printf("%c ",input[kolom]);
		}
		printf("\n");
	} 
}
