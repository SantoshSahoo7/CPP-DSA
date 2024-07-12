#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"entr the string (numbers) less than 10 : ";
    getline(cin,s);
    int n = s.size();
    int product = 1;
    int ans = 0;
    for(int i=n;i>0;i--){
        ans += i*product;
        product *= 10;
    }
    cout<<s<<" ";
}
