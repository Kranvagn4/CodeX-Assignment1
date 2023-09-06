#include <iostream>

using namespace std;

int main(){
    int num1, num2, num3;
    cout << "Enter first number:"<<endl;
    cin >> num1;
    cout << "Enter second number:"<<endl;
    cin >> num2;
    cout << "Enter third number:"<<endl;
    cin >> num3;

    if (num1>num2 && num1>num3){
        cout << "The first number is the greatest, which is: "<< num1 << endl;

    }
    else if (num2>num1 && num2>num3){
        cout << "The second number is the greatest, which is: " << num2 << endl;

    }
    else {
        cout << "The third number s the greatest, which is: " << num3 << endl;
    }
    return 0;

}