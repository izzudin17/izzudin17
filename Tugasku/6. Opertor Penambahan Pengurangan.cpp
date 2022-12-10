#include <stdio.h>

int main()
{
	int x = 5;
	int y;
	
	y = x++;
	
	printf("nilai y = %d\n",y); //untuk menampilkan penambahan
	printf("nilai x = %d\n",x);
	y = x--;
	
	printf("nilai y = %d\n",y);  //untuk menamplkan pengurangan
	printf("nilai x = %d",x);
	
	return 0;
}
