#include <iostream>

using namespace std;
int main(){
    int a, b;
	int result;
    char operation;
    
    cout<<"Calculator in C++ \n";
    
    cout<<"Choose The Operation You Want (+, -, *,/) : ";
    cin>>operation;
    
    cout<<"Enter Two Numbers : ";
    cin>>a>>b;
    
    switch(operation){
        case '+': cout <<"Addition of " << a << " + " << b << " = " << a + b; 
        break;
        case '-': cout <<"Substraction of " << a << " - " << b << " = " << a - b; 
        break;
        case '*': cout <<"Multiplication of " << a << " * " << b << " = " << a * b;
        break;
        case '/': cout <<"Division of " << a << " / " << b << " = " << a / b;
        break;
        default: cout<<"Invalid Operation";
    }
    return 0;
}
