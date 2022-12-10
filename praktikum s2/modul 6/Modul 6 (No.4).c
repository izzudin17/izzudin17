#include <stdio.h>
#include <stdlib.h>

main(){
	char array1[5] = {'A','B','C','D','E'};
	char array2[5] = {'a','b','c','d','e'};
	char array3[10];
	
	printf("Array 1 : {");
	for (int i=0; i<5; i++){
		printf("%c ", array1[i]);
	}
	printf("}\n");
	
	printf("Array 2 : {");
	for (int i=0; i<5; i++){
		printf("%c ", array2[i]);
	}
	printf("}\n");
	
	for (int i=0; i<5; i++){
		array3[i] = array1[i];
	}
	
	for (int i=5; i<10; i++){
		array3[i] = array2[i-5];
	}
	
	printf("Array 3 : {");
	for (int i=0; i<10; i++){
		printf("%c ", array3[i]);
	}
	printf("}");
	
}
