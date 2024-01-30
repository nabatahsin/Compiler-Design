#include <iostream>
using namespace std;

int main()
{
    string s1, s2, name;

    cout << "Enter your first name: ";
    cin>> s1;

    cout << "Enter your last name: ";
    cin>>s2;

    name = s1 + " " + s2;

    cout << "Your full name is:  "<< name;

    return 0;
}

