#include <stdio.h>

int selectionSort(int arr[], int n){
  int a, i, j, swap;
  	for(a = 0; a < (n-1); i++){
    j = a;
    for (i = a + 1; i < n; i++){
      if(arr[j] > arr[i]){
        j = i;
      }
    }
    if(j != a){
      swap = arr[a];
      arr[a] = arr[j];
      arr[j] = swap;
    }
  }
}
int main(){
  	int array[100], n, a, i;
   	printf("Pengurutan Data dengan Selection Sort\n");
	printf("__________________________________\n");
  	printf("Masukkan banyaknya jumlah data: ");
  	scanf("%d", &n);
  
 	printf("Masukkan data sebanyak %d :\n", n);
 	printf("__________________________________\n");
  	for(i = 0; i < n; i++){
    	scanf("%d", &array[i]);
  }
  	selectionSort(array, n);
  	
  	printf("__________________________________\n");
  	printf("Hasil Pengurutan Data:\n");
  	for(i = 0; i < n; i++){
    	printf("%d ", array[a]);
  }
  	printf("\n");
}
