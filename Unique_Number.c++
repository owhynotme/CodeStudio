#include <iostream>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int uni(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans ^= arr[i];
    }
    return ans;
}

int main()
{
    int arr[] = {2, 3, 1, 6, 3, 9, 6, 2, 1}, size;
    size = sizeof(arr) / sizeof(int);
    print(arr, size);
    cout << uni(arr, size);

    return 0;
}