#include<iostream>
using namespace std;

int main() {
int num = 147, ad = 14, dition=70;
const double sum = ad+dition;
//^^sum = 10; // doesnt work because of "const"
double Num = 282.1;
char Letter = 'D', y = 147;
                    //ASCII works too
string phrase = "I wanna hug seethal!";
bool TF  = false;
// when printing raw booleans, false  = 0 and true = 1

cout<<"\nTested variables:\n"; 
cout<<" Number: "<<num<<" \n";
cout<< " Double: "<<Num<<" \n";
cout<< " Single Letter: "<<Letter<<" \n";
cout<<" Boolean: "<<TF<<".\n";
cout<<" String: "<<phrase<<".\n";
//printing sum
cout<<" Sum of numbers: "<<num+Num<<endl;
//testing sumation variable
cout<<" Added variables: "<<sum<<"."<<endl;

return 0;
}