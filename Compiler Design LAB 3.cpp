#include<iostream>
#include<string>
using namespace std;

bool isValid(string id, int& n)
{

    if (!((id[0] >= 'a' && id[0] <= 'z') || (id[0] >= 'A' && id[0] <= 'Z') || id[0] == '_'))
    {
        n = 0;
        return false;
    }
    for (int i = 1; i < id.length(); i++) {
        if (!((id[i] >= 'a' && id[i] <= 'z')
              || (id[i] >= 'A' && id[i] <= 'Z')
              || (id[i] >= '0' && id[i] <= '9')
              || id[i] == '_'))
              {
                  n = i;
                  return false;
    }

    return true;
}
}
int main(){
    string givenInput;
    int n = givenInput.length();
    cout<< "Enter input: ";
    getline(cin, givenInput);

    if (isValid(givenInput, n))
        cout << "Valid identifier.";
    else
        cout << "Invalid identifier at index "<< n;

    return 0;
}
