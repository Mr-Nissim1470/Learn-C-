#include<iostream>
using namespace std;
//basics of arrays
int main(){
//declaring
string names[4];// can also be - dt name [amount] = {values,};

names[0]="Yosef";

names[1]="Ava";

names[2]="Maddie";

names[3]="Eli";
for(int i=0;i<4;i++){
cout<<names[i]<<endl;
}
cout<< names.indexOf("Eli");
    return 0;
}