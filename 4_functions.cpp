#include <iostream>
using namespace std;

// Function : repeated work done by function
    // returntype function_name(){
    //     return anything
    // }

    void printHello(){
        cout <<"hello";
    }

    int printAge(int age){
        cout<<"Age is : "<<age;
        return age;
    }

int main(){

    // printHello();
    printAge(20);

    return 0;
}