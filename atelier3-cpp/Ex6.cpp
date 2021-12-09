#include<iostream>
using namespace std;

class Personne   // creation du classe Personne
{
	private :  //déclarer ces attributs privées
		string nom;
		string prenom;
		string date_naissance;
	public:
		Personne(string nom,string prenom,string date_naissance)  //constructeur 
		{
		this->nom=nom;
		this->prenom=prenom;
		this->date_naissance=date_naissance;
		}
	    virtual void afficher() 
	        {
	        cout <<"Nom : "<<nom<<" , Prenom : "<<prenom<<" , date de naissance : "<<date_naissance;
			}
};

class Employe:public Personne  // creation du sous classe Employe de la classe Personne
{
	protected :
		        float salaire;
	public :
		    Employe(string nom,string prenom,string date_naissance,float salaire) : Personne(nom,prenom,date_naissance)
		    {
		    this->salaire=salaire;
			}
		void afficher()
		{
			Personne::afficher();
			cout <<" , Salaire : "<<salaire <<" ";
		}
	
};

class Chef:public Employe   // creation du sous classe Chef de la classe Employe
{
	protected :
		        string service;
	public :
		    Chef(string nom,string prenom,string date_naissance,float salaire,string service) : Employe(nom,prenom,date_naissance,salaire)
		    {
		    	this->service=service;
			}
};
int main()
{
	int i;
	Personne *T[2];  // objet de la classe Personne
	T[0]=new Personne("Nom1","Prenom1","Date1");  //affecter des valeurs à l'objet
	T[1]=new Employe("Nom2","Prenom2","Date2",10000);
	for(i=0;i<2;i++)   //afichage des éléments d'objet
	{
	    T[i]->afficher();
		cout<<endl;	
	}
}
