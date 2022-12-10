#include <stdio.h>

// Shell sort
void shellSort(int array[], int n) {
  for (int interval = n / 2; interval > 0; interval /= 2) {
    for (int i = interval; i < n; i += 1) {
      int temp = array[i];
      int j;
      for (j = i; j >= interval && array[j - interval] > temp; j -= interval) {
        array[j] = array[j - interval];
      }
      array[j] = temp;
    }
  }
}


void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

// Driver code
int main() {
  int array[100], n=30, i;
  int a[29];
     a[0] = 65;
     a[1] = 70;
     a[2] = 85;
     a[3] = 90;
     a[4] = 75;
     a[5] = 70;
     a[6] = 75;
     a[7] = 80;
     a[8] = 85;
     a[9] = 90;
     a[10] = 75;
     a[11] = 80;
     a[12] = 60;
     a[13] = 85;
     a[14] = 90;
     a[15] = 85;
     a[16] = 80;
     a[17] = 75;
     a[18] = 75;
     a[19] = 85;
     a[20] = 80;
     a[21] = 80;
     a[22] = 90;
     a[23] = 85;
     a[24] = 80;
     a[25] = 85;
     a[26] = 70;
     a[27] = 80;
     a[28] = 85;
     a[29] = 85;



  	printf("Sebelum diurutkan :\n\n");
	for(i = 0; i < n; i++){
    printf("%d ", a[i]);
    
  }
  printf("\n");
  shellSort(a, n);

  printf("Hasil sesudah pengurutan sebagai berikut:\n\n");
  for(i = 0; i < n; i++){
    printf("%d ", a[i]);
  }
  printf("\n");
}
