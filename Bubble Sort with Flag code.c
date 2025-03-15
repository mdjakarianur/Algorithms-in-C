#include <stdio.h>

int main(){
  int arr[100], n, i, j, swap, flag=0;

  printf("Enter Array size: ");
  scanf("%d", &n);

  printf("Enter %d Integer Value: ", n);

  for (i = 0; i < n; i++){
    scanf("%d", &arr[i]);
  }

    for (i = 0 ; i < n - 1; i++){
        
        for (j = 0; j < n-1-i; j++){
          if (arr[j] > arr[j+1])
          {
            swap = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = swap;
            flag =1;
          }
          if (flag==0) break;
      }
}
  printf("Bubble Sort in Ascending Order: ");
  
  for (i = 0; i < n; i++){
     printf("%d  ", arr[i]);
      
  }
  
  return 0;
}
