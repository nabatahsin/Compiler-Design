#include<iostream>
using namespace std;

int main(){
int x, i;
float num[5], sum, average;

cout << "Enter the size of the array : ";
cin >> x;
cout << "Enter the values of the array : ";
for(i = 0; i < x; ++i)
    {
        cin >> num[i];
        sum += num[i];
    }

    average = sum / x;
    cout<<"Average = " << average;

    return 0;
}
