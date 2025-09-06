#include<iostream>
using namespace std;
int main(){
    float a,b;
    char c;
    cout<<"Enter the first number:"<<endl;
    cin>>a;
    cout<<"Enter the second nummber:"<<endl;
    cin>>b;
    cout<<"Enter the operator:"<<endl;
    cin>>c;
    if(c=='+'){
    cout<<" SUM "<<a+b<<endl;}
    else if(c=='-'){
    cout<<" sub "<<a-b<<endl;}
    else if(c=='*'){
    cout<<" MUL "<<a*b<<endl;}
    else if(c=='/'){
    if (b==0){
    cout<<"Error";
    cout<<"Enter your value again:"<<endl;
    cin>>b;
    }
    cout<<"DIV"<<a/b<<endl;}
    else{
    cout<<"invalid Operation";}
    return 0;
    }
