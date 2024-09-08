#include<iostream>
using namespace std;
int main(){

// conditional Statements
// int age;
// cout<<"Enter Your Age";
// cin>>age;

// if(age>18){
//     cout<<"Eligible for Vote";
// }
// else{
//     cout<<"Not Eligible for Vote";
// }

// if(age < 5){
//     cout<<"less than five";
// }
// else if(age < 3){
//     cout<<"less than three";
// }
// else{
//     cout<<"greter that five";
// }

// odd or even
// int num;
// cout<<"Enter Number : ";
// cin>>num;

// if(num%2==0){
//     cout<<"Number is Even ";
// }
// else{
//     cout<<"Number is odd";
// }


// else if 
// int marks;
// cout<<"Enter Mark : ";
// cin>>marks;

// if(marks > 70){
//     cout<<"Grade A";
// }
// else if(marks > 60){
//     cout<<"Grade B";
// }
// else if(marks > 50){
//     cout<<"Grade C";
// }
// else{
//     cout<<"Grade E";
// }


// // uppercase or lowercase
// char alpha;
// cout<<"Enter Charector : ";
// cin>>alpha;

// if(alpha >= 'a' && alpha <= 'z'){
//     cout<<"Lower Case";
// }
// else{
//     cout<<"Upper Case";
// }

// Ternary Stement 
// (condition ? stt1 : stt2);
// int n = 53;
// cout<< (n>10?"Greater than 10" : "less than ten");

// Loops 
// numbers 1 - 10
// for(int i=1; i<=10; i++){
//     cout<<i<<"\n";
// }

// While loop
// int i = 1;
// while(i<=10){
//     cout<<i<<"\t";
//     i++;
// }

// Sum from 1 to 100;
// int n = 100;
// int sum = 0;
// for(int i=0;i<=n;i++){
//     sum += i;
//     if (i==5){
//         break;
//     }
// }
// cout<<"Sum is : "<<sum;

// sum of odd numbers
// int n = 100;
// int sum = 0;
// for(int i=0;i<=n;i++){
//     if (i%2!=0){
//         cout<<i<<"\n";
//         sum += i;
//     }
// }
// cout<<"Sum is : "<<sum;

// int n = 100; int sum = 0;
// while(n>=1)
// {
//     if(n%2 != 0){
//         cout<<n<<"\n";
//         sum+=n;
//     }
//     n--;
// }
// cout<<sum;

// do while loop
// int n = 100;
// int i = 1;
// do{
//     cout<<i<<"\n";
//     i++;
// }while(i<=n);

// Prime Number
// int num = 11;
// int i=2;
// while(i<num){
//     if(i%num == 0){
//         cout<<"Prime";
//     }else{
//        i++;
//        if(i+1 == num){
//         cout<<"Not Prime";
//        }
//     }
// }

// int n = 10;
// int sum = 0;
// for(int i=1;i<=n;i++){
//     if(i%3 == 0){
//         sum += i;
//     }
// }
// cout<<"Sum is : "<<sum;

int n = 5;
int fact = 1;
while(n>0){
    fact *= n;
    n--;
}
cout<<"Factorial of : "<< fact;





    return 0;
}