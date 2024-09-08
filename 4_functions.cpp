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

    double calculateSum(int n){
        int sum = 0;
        for(int i=1;i<=n;i++){
            sum += i;
        }
        cout<<"Sum is : "<<sum;
        return sum;
    }

    double factorial(int n){
        int fact = 1;
        for(int i=1;i<=n;i++){
            fact *= i;
        }
        cout<<"Factorail of "<<n<<" : "<<fact;
        return fact;
    }

    int calculateSumOfDigits(int num){
        int sum = 0;
        while(num>0){
            sum += num % 10;
            num = num / 10;
        }
        cout<<" sum is "<<sum;
    }

    checkPrime(int n){
        for(int i=2;i<n;i++){
            if(n%i == 0){
                // cout<<"Number is not prime : "<<n<<endl;
                return n;
            }
        }
        cout<<"Number is Prime : "<<n<<endl;
        return n;
    }

    void primeNumbers(int n){
        for(int i=1;i<=n;i++){
            checkPrime(i);
        }
    }

    void fibonacci(int n){
        int a = 0;
        int b = 1;
        int fib = a+b;
        cout<<a<<endl<<b<<endl;
        if(n<2){
            return;
        }
        for(int i=1;i<=n-2;i++){
            cout<<fib<<endl;
            fib+=i;
        }
    }

int main(){

    // printHello();
    // printAge(20);
    // calculateMin(10,30);
    // calculateSum(100);
    // factorial(5);
    // calculateSumOfDigits(123);
    // primeNumbers(60);
    fibonacci(4);
    return 0;
}