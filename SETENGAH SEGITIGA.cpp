#include<stdio.h>//fie header
int main(){
	//variable integer main
    int i,j,k;
    
    for(i=11;i>0;i--){
        for(j=1;j<=i;j++){
            printf(" ");
        }
        for(k=11;k>i;k--){
            printf("*");
        }
        printf("\n");
    }
}
