#include<iostream>
#include <string>
#include<cmath> //includes square roots and other advanced operations

using namespace std;
int main(){
//math operations 
int x; int y; int z;
x = 1;
y = 4;
z = 7; 
//obvious: +(add), -(subtract), *(multiply), /(divide), %(mod/remainder)
cout<<"adding "<<x<<" and "<<y<<": "<<x+y<<endl;
cout<<"subtractiong "<<y<<" by "<<x<<": "<<y-x<< endl;
cout<<"multiplying "<<x<<" by "<<z<<": "<<x*z<<endl;
cout<<"dividing "<<y<<" by "<<z<<": "<<y/z<<endl;
cout<<"mod with "<<x<<" and "<<z<<": "<<x%z<<endl;
// ++var(increse 1); --var(decrese 1) {placing before or after affects when the operation happens}    
cout<<"incrementing "<<x<<" before: ";x++;cout<<(++x*2)<<endl;
cout<<"incrementing "<<y<<" after: ";y++;cout<<(y++*2)<<endl;
//^does not effect outcome

// adding '=' to the operation means the variable operation is said value 
cout<<"\"+=\" value for "<<z<<":";z+=10;cout<<z<<endl;

//advanced operations 
cout<<sqrt(100)<<endl;
cout<<round(5.4)<<endl;
cout<<log(2)<<endl;
cout<<abs(x)<<endl; //aboslute value
cout<<cbrt(y)<<endl; //cube root
cout<<exp(z)<<endl; //exponent to the z power
cout<<floor(x)<<endl; //round down to nearest integer
cout<<ceil(x)<<endl; //round up ot nearest integer
cout<<pow(y,z)<<endl; //y to the power of z
cout<<fmax(x,y)<<endl; //highest value of floating x and y
cout<<fmin(x,y)<<endl; //lowest value of floating x and y
cout<<fmod(y,z)<<endl; //floating point remainder of y/z

/*
find out:
- &
- |
- ^
- <<
- >>
*/

// comparison operators: (==)(=!)(<)(>)(<=)(>=)
//Logical operators:&(and) |(or) {use too in order to declare true from one} 
return 0;
}