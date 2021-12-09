#include <iostream>
using namespace std;
class complexes_operations    //creation de la classe complexes_operations
{
    public:
    float a,b,c,d;            
    complexes_operations()    //definr le constructeur
    {
    cout<<"entrer la partie reelle du premier nombre complexe : "<<endl;      //demander à l'utilisateur d'insérer la partie reelle 
    cin>>a;                                                                   // du premier nombre complexe et l'affecter à a
    cout<<"entrer la partie imaginaire du premier nombre complexe : "<<endl;  //demander à l'utilisateur d'insérer la partie imaginaire
    cin>>b;                                                                   // du premier nombre complexe et l'affecter à b
    cout<<"entrer la partie reelle du deuxième nombre complexe : "<<endl;     //demander à l'utilisateur d'insérer la partie reelle
    cin>>c;                                                                   // du deuxième nombre complexe et l'affecter à c
    cout<<"entrer la partie imaginairee du deuxième nombre complexe : "<<endl;//demander à l'utilisateur d'insérer la partie imaginaire
    cin>>d;                                                                   // du deuxième nombre complexe et l'affecter à d
    }
    float egalite()   //definition de  la fonction qui vérifie l'égalité du deux nombres complexes
    {
        if (a==c && b==d){
            cout<<" les deux nombres complexes sont egaux "<<endl;
        }
        else{
            cout<<"les deux nombres complexes ne sont pas egaux"<<endl;
        }
        return 0;
    }
    float addition()   //définition de la fonction qui fait la somme du deux nombres complexes
    {
        cout<<"l'addition des deux nombres complexes est : "<<a+c<<"+i"<<"("<<b+d<<")"<<endl;
        return 0;
    } 
    float soustraction()    //définition de la fonction qui fait la soustraction  du deux nombres complexes
    {
        cout<<"la soustraction des deux nombres complexes est : "<<a-c<<"+i"<<"("<<b-d<<")"<<endl;
        return 0;

    } 
    float multiplication()   //définition de la fonction qui fait la multiplication du deux nombres complexes
    {
        cout<<"la multiplication des deux nombres complexes est : "<<a*c-b*d<<"+i"<<"("<<a*d+b*c<<")"<<endl;
        return 0;

    } 
    float division()         //définition de la fonction qui fait la division du deux nombres complexes
    {
        cout<<"la division des deux nombres complexes est : "<<(a*c+b*d)/(c*c+d*d)<<"+i"<<"("<<(b*c-a*d)/(c*c+d*d)<<")"<<endl;   
        return 0;

    } 
};
float menu()      //définition d'une menu et ses options
{
float n;
cout<<"-------------Ce menu vous permet d'effectuer des operations arithmetiques sur des nombres complexes----------------"<<endl;
cout<<"Verifier l'egalite des deux nombres complexes  ----------------------------------(1)"<<endl;
cout<<"Faire l'addition des deux nombres complexes -------------------------------------(2)"<<endl;
cout<<"Faire la soustraction des deux nombres complexes---------------------------------(3)"<<endl;
cout<<"Faire la multiplication des deux nombres complexes ------------------------------(4)"<<endl;
cout<<"Faire la divisionn des deux nombres complexes -----------------------------------(5)"<<endl;
cout<<"quitter -------------------------------------------------------------------------(6)"<<endl;
cout<<"svp chosir un nombre :"<<endl;
cin>>n;    //enregistrer l'option choisi par l'utilisateur dans n
return n;
}

int main(){
    
    complexes_operations exp;  //définition d'un objet exp de la classe complexes_operation
    int i;
    do 
    {
    i=menu();  //i prend la valeur de l'option choisi par l'utilisateur
    switch (i)  //selon l'option choisi on appelle la fonction correspondante et on reaffiche le menu jusqu'a l'utilisateur choisit de quitter (option 6)
    {
    case 1:
    exp.egalite();
        break;
    case 2:
    exp.addition();
        break;
    case 3:
    exp.soustraction();
        break;
    case 4:
    exp.multiplication();
        break;
    case 5:
    exp.division();
        break;
    case 6:
    cout<<"---------------MERCI--------------" <<endl; 
        break;
    default : 
    cout<<"ce nombre n'est pas disponible !!!!!!"<<endl;  // afficher ce message en cas l'utilisateur choisit un nombre autre que 1,2,3,4,5 ou 6      
    }
    }
    while(i!=6); 
}
