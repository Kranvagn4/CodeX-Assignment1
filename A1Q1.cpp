#include <iostream>

using namespace std;



int main(){
    char Name[30];
    int Age;
    char CN[50];
    cout<<"Enter your name:\n";
    cin.getline(Name,30);

    cout<<"Enter your Age:\n";
    cin>>Age;
    cin.ignore();

    cout<<"Enter your College Name:\n";
    cin.getline(CN,50);

    cout << "Hello "<<Name<<", I see you are "<<Age<<" years old and are currently studying at "<<CN<<".";
    return 0;
    
    }

