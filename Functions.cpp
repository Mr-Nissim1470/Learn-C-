#include<iostream>
using namespace std;

//basic function
void firstfunction(){
    cout<<"first function done!"<<endl;
}
//peramiter function
void nameprint (string name){
cout<<"hello "<<name<<endl;
}

//function with default peramiter
void goodbye(string gbn = "friend"){
    cout<<"Goodbye "<<gbn<<endl;
}

//function with multiple peramiters (with defaults)
void report(string name = "John Doe", int age = 18){
    cout<<"Student:\n\t"<<name<<" - "<<age<<endl;
}

//function using return and default
string basic_math(int num1 = 0 ,int num2 = 0){
    
    double S = num1+num2;
    
    string N1 = to_string(num1);

    string N2 = to_string(num2);    

    string solve = "The sum of:\n "+N1+" + "+N2+" = "+to_string(S);

    return solve;
}

//function using reference paramaters and defaults
void swap(int &x,int &y){//without the "&" the variable in the main will not change
int z = x;
x=y;
y=z;
}

//we're using the same function but differernt peramiters to show function overloading
string basic_math(double num1 ,double num2 ){
    
    double S = num1+num2;
    
    string N1 = to_string(num1);

    string N2 = to_string(num2);    

    string solve = "The sum of:\n "+N1+" + "+N2+" = "+to_string(S);

    return solve;
}


int main(){

firstfunction();
//secondfunction();
nameprint("Ava");
goodbye("sethanl");
goodbye();
report();
report("Diana",19);
string equation = basic_math(12,2);
cout<<basic_math()<<endl;
cout<<equation<<endl;
cout<<basic_math(140,7)<<endl;

int num1 = 147;
int num2 = 282;

cout<<"b4 swap \n num1 = "<<num1<<"\n num2 = "<<num2<<endl;
swap(num1,num2);
cout<<"After swap \n num1 = "<<num1<<"\n num2 = "<<num2<<endl;

cout<<basic_math(1.47,28.2)<<endl;
    
    return 0;
}
/* the function bellow will not work as it is called before reading the function
void secondfunction(){
    cout<<"seond function done!"<<endl;
}*/


