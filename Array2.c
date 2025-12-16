#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < n; i ++){
        int count = 1;
        if(arr[i] == -1) continue;
        for(int j = i + 1; j < n ; j++){
            if(arr[i] == arr[j]){
                count++;
                arr[j] = -1;
            }
        }
        printf("%d -> %d\n", arr[i], count);
    }
    return 0;
}