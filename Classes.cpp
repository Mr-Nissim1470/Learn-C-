#include<iostream>
using namespace std;

//class declaring parts to object
class FirstClass {
    public:
        int num;
        string MYString;

};

//class declaring methods 
class SecondClass {
    public:
        string Phrase;
    void MyMethod(string I){
        cout<<I<<endl;
    }
};

//class using constructors
class ThirdClass{
    public:
    ThirdClass(){
        cout<<"third class is working"<<endl;
    }
};

//class construsctor taking in peramaters 
class Student{
    public:
    string Name;
    string Major;
    int Age;
    Student(string N, string M, int A){
        Name = N;
        Major = M;
        Age = A;

        cout<<"Name: "<<Name<<"\nMajor: "<<Major<<"\nAge: "<<Age<<endl;
    }
    
};
//class where constructor is created in the main
class Student2{
    public:
    string Person;
    string Quirk;
    bool posibility;
    Student2(string m, string r, int e);
};


Student2::Student2(string m, string r, int e){
    Person = m;
    Quirk = r;
    posibility = false;
    cout<<"Name: "<<Person<<"\nType: "<<Quirk<<"\nChance: "<<posibility<<endl;
}


int main(){

    FirstClass ObjectF;

    ObjectF.num = 147;

    ObjectF.MYString = "We've Got Class";

    cout<<ObjectF.num<<endl;
    cout<<ObjectF.MYString<<endl;

    FirstClass ObjectN;

    ObjectN.MYString = "another one";

    ObjectN.num = 282;

    cout<<ObjectN.num<<endl;
    cout<<ObjectN.MYString<<endl;

    SecondClass ObjN;

    ObjN.Phrase = "retype";

    ObjN.MyMethod(ObjN.Phrase);

    ThirdClass Class3;

    Student("Yosef","CS",21);

    Student2("Ava","Super Woman",false);

return 0;
}