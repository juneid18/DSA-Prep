#include <stdio.h>
int main(){
    int arr[] = {1, 3, 4, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                printf("Duplicate: %d\n", arr[i]);
                return 0;    
            }
        }
    }
}