#include <iostream>
#include<string>

using namespace std;

int check_number(const string& input) {
   for (char i : input){
   if (i < '0' || i > '100'){
      return 1;
}}
return 0;
}

int main()
{
    string givenInput;
    cout<< " Enter input: ";
    cin >>givenInput;


    if (check_number(givenInput)){
        cout << "Numeric constant." << endl;
    }else{
        cout << "Not numeric." << endl;
    }


    return 0;
}
