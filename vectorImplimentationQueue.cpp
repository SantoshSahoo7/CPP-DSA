#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Queue{
public:
    vector<int> arr;
    Queue(){
    }
    void push(int x){
        arr.push_back(x);
    }
    void pop(){
        if(arr.size()==0){
            cout<<"underflow...";
            return;
        }
        arr.erase(arr.begin());
    }
    int front(){
        if(arr.size()==0){
            cout<<"underflow...";
            return 0;
        }
        else{
            return arr[0];
        }
    }
    int back(){
         if(arr.size()==0){
            cout<<"underflow...";
            return 0;
        }
        else{
            return arr[arr.size()-1];
        }
    }
    int size(){
        return arr.size();
    }
    bool empty(){
        if(arr.size()) return false;
        else return true;
    }
    void display(){
        for(int i=0; i<arr.size(); i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.display();
    q.pop();
    q.display();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.empty()<<endl;;
    cout<<q.size()<<endl;
}