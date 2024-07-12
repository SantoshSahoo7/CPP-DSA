#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the charecter : ";
    cin>>ch;
    int ascii = (int)ch;
    if((ascii >= 65 && ascii <= 90) || (ascii >= 97 && ascii <= 97)){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch =='o' || ch == 'u'){
        cout<<"vowels";
        }
        else{
            cout<<"consonants";
        }
    }
    else{
        cout<<"the charecter is not an alphabate";
    }
}
