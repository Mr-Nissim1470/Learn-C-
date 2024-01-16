#include<iostream>
using namespace std;

int main(){
//while loop
int wnum,dwnum,fnum,inc,inc2,start=0;

cout<<"enter a number to count to: ";

cin>>wnum;

while(wnum!=start){
cout<<start<<",";
start++;
}

cout<<" and finally "<<wnum<<endl; 

//do while loop [vault#4311]

cout<<"pick a number to count down to until "<<start<<": ";

cin>>dwnum;

do{
    cout<<dwnum<<",";
    dwnum--;
}while(dwnum>start);

//for loop
cout<<"\n give an incriment value: ";

cin>>inc;

cout<<"input a number to count up to in increments of "<<inc<<": ";

cin>>fnum;

for(int j=0;j<fnum;j+=inc){
cout<<j<<"\n";
}

//for loop using continue and break

cout<<"give a nimer to count up to by 3's: ";

cin>>inc2;

for(int z = 0; z<inc2;z+=3){
    if (z%9==0){
        continue;
    }
    if(z>100){
        break;
    }
    cout<<z<<"-";
}
cout<<endl;
return 0;
}