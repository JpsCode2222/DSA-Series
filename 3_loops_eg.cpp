#include <iostream>
using namespace std;
int main(){
    // Pattern printing
    // int n = 4;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         cout<<j<<"\t";
    //     }
    //     cout<<"\n";
    // }

    // int n = 4;
    // for(int i=0;i<n;i++){
    //     char ch = 'A';
    //     for(int j=0;j<n;j++){
    //         cout<<ch<<"\t";
    //         ch += 1;
    //     }
    //     cout<<"\n";
    // }

    // int n = 3;
    // int k = 1;
    // for(int i=1;i<=3;i++){
    //     for(int j=1;j<=3;j++){
    //         cout<<k<<"\t";
    //         k+=1;
    //     }
    //     cout<<endl;
    // }

    // int n = 3;
    // int k = 1;
    // char ch = 'A';
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<ch<<"\t";
    //         ch+=1;
    //     }
    //     cout<<endl;
    // }

    // int n = 4;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<"*\t";
    //     }
    //     cout<<endl;
    // }

    // int n = 4;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<i+1<<"\t";
    //     }
    //     cout<<endl;
    // }

    // int n = 4;
    // char ch = 'A';
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<ch<<"\t";
    //     }
    //         ch+=1;
    //     cout<<endl;
    // }

    // int n = 3;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<j<<"\t";
    //     }
    //     cout<<endl;
    // }

    // int n = 3;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<i-j+1<<"\t";
    //     }
    //     cout<<endl;
    // }

    // int n = 4;
    // int num = 1;
    // for(int i=1;i<=n;i++){
    //     for(int j=0;j<i;j++){
    //         cout<<num<<"\t";
    //         num++;
    //     }
    //     cout<<endl;
    // }

    // int n = 4;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<i;j++){
    //         cout<<"\t";
    //     }
    //     int k = 1;
    //     while(k<=n-i+1){
    //         cout<<i<<"\t";
    //         k++;
    //     }
    //     cout<<endl;
    // }

    // int n = 4;
    // char ch = 'A';
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<i;j++){
    //         cout<<"\t";
    //     }
    //     for(int k=0;k<=n-i;k++){
    //         cout<<ch<<"\t";
    //     }
    //     ch++;
    //     cout<<endl;
    // }

    // int n = 4;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i;j++){
    //         cout<<"\t";
    //     }
    //     for(int k=0;k<i;k++){
    //         cout<<k+1<<"\t";
    //     }
        
    //      for(int l=0;l<n-i;l++){
    //         cout<<"\t";
    //     }
    //     cout<<endl;
    // }


    // int n = 4;
    // for(int i=1;i<=n;i++){
    //     for(int j=n-i;j>=1;j--){
    //         cout<<"\t";
    //     }
    //     for(int k=i;k>=1;k--){
    //         cout<<k<<"\t";
    //     }
    //    for(int l=i;l>1;l--){
    //     cout<<l<<"\t";
    //    }
    //     cout<<endl;
    // }

    // int n = 4;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i-1;j++){
    //         cout<<" ";
    //     }
    //         cout<<"*";  
    //         if(i != 0){
    //             for(int m=0;m<2*i-1;m++){
    //                 cout<<" ";
    //             }
    //             cout<<"*";
    //         }
    //         cout<<endl;
    // }

    // for(int i =0;i<n-1;i++){
    //     //SPACE 
    //     for(int j =0;j<i+1;j++){
    //         cout<<" ";
    //     }
    //     cout<<"*";
    //     if(i!= n-2){
    //         for(int j=0;j<2*(n-i)-5;j++){
    //             cout<<" ";
    //         }
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }


    int n = 4;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int j=0;j<2*(n-i)-2;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

      for(int i=3;i>=0;i--){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int j=0;j<2*(n-i)-2;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }



    return 0;
}