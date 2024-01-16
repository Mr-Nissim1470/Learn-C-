#include<iostream>
using namespace std;
#include<string>

int main(){
string phraze = "hello"; 
string Firstname = "Ava";
string Lastname = "Ruso";

cout<<Firstname<<" "<<Lastname<<endl;

//concatinations 
string fullname1 = Firstname.append(Lastname) ;
string fullname2 = Firstname+"(crush)";

cout<<fullname1<<endl;
cout<<fullname2<<endl;

int len = phraze.size();
phraze[4]='0';
//"0" creates error and no numeral removes number
cout<<"lenght of phrase \""<<phraze<<"\": "<<len<<endl;
cout<<"initials: "<<Firstname[0]<<Lastname[0]<<endl;
//find why + gives a numeral


// using getline() 
string importedname;
cout<<"enter your enire name: ";

getline(cin,importedname);

cout<< "your full name is: "<<importedname<<endl;     
    return 0;

}