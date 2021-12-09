#include <iostream>
using namespace std;
        class mere{// creation de la classe mère 
            public:
            	void display (){
            cout << "La methode display de la classe mere";  //affiche un message mère
            }};
        class fille : public mere{ // création de la classe fille heritee 
            public:
             void display (){
              cout << "La methode display de la classe fille";  //affiche un message fille
            }};
         int main (){//utilisation du classe fille dans main
           fille b;
           b.display();
            return 0;
          }

