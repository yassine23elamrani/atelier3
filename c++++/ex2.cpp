#include<iostream>
using namespace std;
class Shape{  //creation du classe shape
      public:
        float largeur;
        float hauteur;

        virtual void Constructeur(float l , float h){
                largeur=l;
                hauteur=h;
                cout<<"l= "<<largeur<<"  ,  h= "<<hauteur<<endl;
        }
};
class Triangle : Shape{   //  de sous classe rectangle 
       public:
       Form(float H,float L){
            float S=(L*H)/2;
            cout<<" l'aire de la zone de Triangle est :"<<S<<endl;
       }
};
class Rectangl : Shape{    //  de sous classe rectangle 
       public:
       Form(float H,float L){
            float S=(L*H);
            cout<<" l'aire de la zone de Rectangl est :"<<S<<endl;
       }
};

int main(){ //definir un rectangle et un triangle
Rectangl rec;
Triangle tri;
Shape C;
C.Constructeur(23,29); //appel a la fonction area dans les deux classe pour afficher le resultat
rec.Form(23,29);
tri.Form(23,29);
return 0;
}
