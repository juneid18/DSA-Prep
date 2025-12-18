#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {1, 3, -4};
    int len = sizeof(arr) / sizeof(arr[0]);
    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = 0; i < len; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << min << "," << max << endl;
    return 0;
}
