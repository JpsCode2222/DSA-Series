#include <iostream>
using namespace std;

int main(){

    cout<<"hello world";
    cout<<"hello world" << endl;
    cout<<"hello world \n";

    cout<<"Jayad \nPathan";

    // Variable : Container to store data

    // Data Types 
    // int , char , float , bool , double
    // int 4byte = 32bits

    int age = 22;
    char letter = 'A';
    float price = 20.22f;
    bool isVoter = true; // 0 or 1
    double account = 29299399.00;

    // cout<<sizeof(age); 4 byte

    string name = "Jayad";
    string fullName = "Jayad Pathan";


    // Typecasting : convert data from one type to another
    int ammount = (int)account;
    cout<<ammount;


    // input
    cout<<"Enter newAge : ";
    int newAge;
    cin>>newAge;
    cout<<"New age is : "<<newAge;

    // Operators
    // Arithmetic , Relational , Logical
    return 0;
}