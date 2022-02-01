#include <iostream>
using namespace std;

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void Sort012(int arr[],int n)
{
    int c0=0,c1=0,c2=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            c0++;
        }
        if(arr[i]==1)
        {
            c1++;
        }
        if(arr[i]==2)
        {
            c2++;
        }
    }
    for(int i=0;i<c0;i++)
    {
        arr[i]=0;
    }
    for(int j=c0;j<c0+c1;j++)
    {
        arr[j]=1;
    }
    for(int k=c0+c1;k<n;k++)
    {
        arr[k]=2;
    }

}

int main()
{
    int arr[7] = {0,1,2,2,1,0,2}, size;
    size = sizeof(arr) / sizeof(int);

    Sort012(arr, size);
    display(arr, size);

    return 0;
}