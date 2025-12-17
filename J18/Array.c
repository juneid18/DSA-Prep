#include <stdio.h>

int main(){
    int arr[] = {1,2,4,5};
    int n = 5;
    int sum;

    for(int i = 0; i < n - 1; i++){
        if(arr[i] < 1 || arr[i] > n){
            printf("Invalid input\n");
            return 1;
        }
        sum += arr[i];
    }
    int expected = n * (n + 1) / 2;
    printf("Missing number is this %d\n", expected - sum);
    return 0;
}