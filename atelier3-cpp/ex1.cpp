#include <iostream>
using namespace std;
class MyClass       //creation de la classe MyClass
{
    public:         //mettre le constructeur et le destructeur public
    MyClass();
    ~MyClass();
};
MyClass::MyClass()    //définition du constructeur en dehors de la classe
{
cout<<"constructeur invoked !"<<endl;     //afficher le text "constructeur invoked !" quand le constructeur est appelé
}
MyClass::~MyClass()   //définition du destructeur en dehors de la classe
{
cout<<"destructeur invoked !"<<endl;      //afficher le text "constructeur invoked !" quand le constructeur est appelé
}
int main(void)
{
    MyClass a;   // creation de l'objet a de la classe MyClass
}