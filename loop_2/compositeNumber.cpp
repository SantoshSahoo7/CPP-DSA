#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    bool flag = false;   // false means prime
    for(int i = 2; i < n; i++){
        if(n % i == 0){     //i is a factor of n     
            flag = true;   //true means composite 
           break; 
        }
    }
    if(n == 1){
        cout<<"neither composite nor prime";
    }
    else if(flag == false){
        cout<<n<<" "<<"is prime";
    }
    else{
        cout<<"is composite";
    }
}