#include <iostream>
#include<string>

using namespace std;

 int main (){
      string givenInput;
    cout<< " Enter input: ";
    cin >>givenInput;

    if (givenInput.find("//") == 0)
    {
        cout << "Single line comment.";
    }

    else if (givenInput.find("/*") == 0 && givenInput.find("*/")!= 0)
        {
        cout << "Multiline comment.";
    }
    else {
        cout << "Not a comment.";
    }
 return 0;
 }
