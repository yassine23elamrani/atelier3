#include <iostream>
using namespace std;

class complexe{ //declaration de notre classe
	public:
		int r1;//declaration du variable reel 1 
		int r2;//declaration du variable reel 2
		int im1;//declaration du variable imaginaire 1 
		int im2;//declaration des variable imaginaire 2 
		string operation;
		 complexe(){//declaration de notre fonction complesxe 
		 	cout<<"donnez votre premiere nombre reel "<<endl;// demander a l'utilisateur d'entrer le 1er nombre reel
			cin>>r1; 
		    cout<<"donnez votre premiere nombre imaginaire"<<endl; // demander a l'utilisateur d'entrer le 1er nombre imaginaire
			cin>>im1; 	
			cout<<"donnez votre deuxieme nombre reel "<<endl;// demander a l'utilisateur d'entrer le 2eme nombre reel
			cin>>r2;
			cout<<"donnez votre deuxieme nombre imaginaire "<<endl;// demander a l'utilisateur d'entrer le 2eme nombre imaginaire
			cin>>im2;  
			cout<<"Entrer votre operation : "<<endl;//demander a l'utilisateur d'entrer l'operation qui veut efectuer		
			cin>>operation;
			};
	void calcul(){
		if(operation=="addition"){
	    cout<<"la nouvelle partie reele : " <<r1+r2<<endl;
	  	 cout<<"la nouvelle partie imaginaire: " <<im1+im2<<endl;
	}
	  else if (operation=="soustraction")  {
	  	 cout<<"la nouvelle partie reele : " <<r1-r2<<endl;
	  	 cout<<"la nouvelle partie imaginaire: " <<im1-im2<<endl;
	  	}
	  	else if(operation=="multiplication"){
	  		cout<<"la nouvelle partie reele"<<r1*r2+im1*im2<<endl;
	  		cout<<"la nouvelle partie imaginaire : "<<r1*im2+im1*r2<<endl;
			 }
		  else if(operation=="devision"){
		   if(im2==0 && r2==0){
		   	cout<<"erreur";
		   }
		   else{
		        cout<<"la nouvelle partie reele : " <<float(im1*im2-r1*r2)/float(im2*im2+r2*r2)<<endl;
		  		cout<<"la nouvelle partie imaginaire : " <<float(im1*r2-r1*im2)/float(r2*r2+im2*im2)<<endl;
		  		}	 
		  }
		  else{
		  	cout<<"vous n'avez pas choississez une operation arithméthique!"<<endl;
		  }
	}	
};
int main(){
	complexe a;
	a.calcul();	

	return 0;
};
