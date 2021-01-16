//Code 1
#include <iostream> 
using namespace std;   
int main()  
{  
    char characterType ;
    int integerType;   
    float floatType;  
    double doubleType;
    cout << "Size of char is: " << sizeof(characterType)<<endl;   
    cout << "Size of int is: " << sizeof(integerType) <<endl;   
    cout << "Size of float is: " << sizeof(floatType) <<endl;   
    cout << "Size of double is: " <<  sizeof(doubleType) <<endl; 
    return 0;      
}  
//Code 2
#include <iostream>
using namespace std;

int main()
{
float a,b;


cout<<"Enter Your First Value"<<endl;
cin>>a;
cout<<"Enter Your Second Value"<<endl;
cin>>b;
cout<<"The product of two values is :"<<a*b<<endl;
}
