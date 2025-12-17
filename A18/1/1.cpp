#include <iostream>
using namespace std;

void reverseString(char str[])
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    int left = 0, right = length - 1;
    while (left < right)
    {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
}
int main()
{
    char str[100]="hi";
   // cout << "enter string"<<endl;
   // cin.getline//(str, 100);
    reverseString(str);
    cout << str << endl;
    return 0;
}
