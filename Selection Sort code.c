#include <stdio.h>

int main(){
  int array[100], n, i, j, swap, min;

  printf("Enter Array size: ");
  scanf("%d", &n);

  printf("Enter %d Integer Value: ", n);

  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);

      for (i = 0 ; i < n - 1; i++){
        min = i;
        for (j = i + 1; j < n; j++){
          if (array[j] < array[min])
            min = j;
        }
        if(min !=i){
            swap       = array[i];
            array[i]   = array[min];
            array[min] = swap;
        }
      }

  printf("Sorted List in Ascending Order: ");

  for (i = 0; i < n; i++){
     printf("%d  ", array[i]);
}
  return 0;
}
