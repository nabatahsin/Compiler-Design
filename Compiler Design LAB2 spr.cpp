#include<iostream>
using namespace std;

int main ()
{
    int arr[10], n, i, max, min;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the values of the array : ";
    for (i = 0; i < n; i++)
        cin >> arr[i];

    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }

    min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }

    cout << "Maximum value of the array : " << max<< endl;
    cout << "Minimum value of the array : " << min;
    return 0;
}

