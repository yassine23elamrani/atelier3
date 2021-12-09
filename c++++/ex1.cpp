#include <iostream>
using namespace std;

class MyClass{    //creation de la class

    private:
    string name;
    public:     
    MyClass();  //la declaration de la constructeur
    ~MyClass(); //la declaration de la destructeur
};

MyClass::MyClass(){ //définition de constructeur
    string nom;
    cout<<"comment vous appelez ? : "; //demander premierement le nom de l'utilisateur 
    cin>>nom;
    name=nom;
    cout<<"Bonjour "<<name<<endl;    //le message du constructeur
}
MyClass::~MyClass(){ //définition de destructeur  
    cout<<"au revoir "<<name;//le message du destructeur
}

int main()
{
    MyClass s;
}
