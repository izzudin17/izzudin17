#include<stdio.h>


int main()

{
	int v,a,b ;
	
		printf("Input Loop : ") ; 
		scanf("%d", &v) ;
 		printf("\n\n");
 		
	for (a=1; a<=v; a++) {
 	for (b=1; b<=a; b++) {
 		
 	printf("*"); }
 	
	 printf("\n") ;}
	 
	 return 0;
}
