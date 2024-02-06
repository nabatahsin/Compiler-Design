#include <iostream>
#include<string>

using namespace std;

int check_operator(char i) {
   return i == '+' || i == '-' || i == '*' || i == '/' || i == '%';

}

int main()
{
    string givenInput;
    cout<< " Enter input: ";
    cin >>givenInput;


        cout << "Operator:" << endl;
            for (char i : givenInput){
                    if (check_operator(i)){
                cout << i << " ";

    }
    }

    return 0;
}
