#include<iostream>
using namespace std;
//basic booleans
//remember 0 is false, 1 is true 
int main(){
int x = 10;
int y = 14;
int z = 1;
cout<<(x<y)<<endl;
//if - else - else if
if (x>y){
    cout<<x<<" is greater"<<endl;
} 
else if (y>x){
    cout<<y<<" is greater"<<endl;
}
else{
    cout<<"error has occured";
}
//other format
// variable = (condition) ? expressionTrue : expressionFalse;

//switch case
switch(z){
    case 1:{
        cout<<"its one"<<endl;
    }
    break;
    case 2:{
        cout<<"its two"<<endl;
    }
    break;
    case 3:{
        cout<<"its three"<<endl;
    }
    break;
    default:{
        cout<<"none of the other options"<<endl;
    }
}


return 0;
}