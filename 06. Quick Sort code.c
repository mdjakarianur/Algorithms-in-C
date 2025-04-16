#include<stdio.h>

void quicksort(int arr[20],int L,int R){
    
    int i, j, pivot,temp;
    if(i<j){
        pivot=arr[L];
        i=L;
        j=R;
        while(i<j){
            while(arr[i]<=arr[pivot])
            i++;
            while(arr[j]>arr[pivot])
            j--;
            if(i<j){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
         temp=arr[pivot];
        arr[pivot]=arr[j];
        arr[j]=temp;
        quicksort(arr,L,j-1);
        quicksort(arr,j+1,R);
    }
}

int main(){
    int i, n, arr[20];
    printf("Enter Ellement: ");
    scanf("%d",&n);
    printf("Enter %d elements: ", n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    quicksort(arr,0,n-1);
    printf("Sorted elements: ");
    for(i=0;i<n;i++)
    printf(" %d",arr[i]);
    return 0;
}
