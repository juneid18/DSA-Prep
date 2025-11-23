#include<stdio.h>

void subsets(int arr[], int n,int index, int subset[], int subsetSize){
    if(index == n){
        printf("[");
        for (int i = 0; i < subsetSize; i++)
            printf("%d", subset[i]);
        printf("]\n");
        return;
    }
    // Include current element
    subset[subsetSize] = arr[index];
    subsets(arr, n, index + 1, subset, subsetSize + 1);

    // Exclude current element
    subsets(arr, n, index + 1, subset, subsetSize);
}

int main(){
    int arr[] = {1,2};
    int subset[10];
    int n = 2;
    subsets(arr,n,0, subset,0);

    return 0;
}