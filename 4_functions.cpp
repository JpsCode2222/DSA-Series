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

    // Calculate min of 2 numbs
    int calculateMin(int a,int b){
        if(a<b){
            cout<<a<<" is min";
            return a;
        }
        else{
            cout<<b<<" is min";
            return b;
        }
    }

int main(){

    // printHello();
    // printAge(20);
    calculateMin(10,30);

    return 0;
}