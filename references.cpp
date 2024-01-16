#include<iostream>
using namespace std;
//refferences 
int main(){
string plain_burger = "Buns and a patty with sauce";

string toppings = "with veggies and a fries egg";

string &OG = plain_burger; //references other variable 

cout<<OG<<"\n"<<plain_burger<<endl;

//memory adresses 

string food = "pizza";

string* ref = &food; //creates pointer variable with the adress

cout<<food<<"\n"<<&food<<"\n"<<ref<<endl;

cout<<*ref<<endl;//difference operator recieving variable with pointer 

//so what happens if oyu change one of the two?
*ref = "borito";
cout<<food<<endl;

    return 0;
}