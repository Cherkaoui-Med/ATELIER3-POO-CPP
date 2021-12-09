#include<iostream>
using namespace std;
class Mother     //création de la classe Mother
{
public:
void display()   //définition du fonction display de la classe Mother
{
    cout<<"the function display of the class Mother invoked !"<<endl;
}
};
class Child : public Mother  // création de la classe Child ,héritée de la classe Mother
{
    public:
    void display()     ////définition du fonction display de la classe Child
{
    cout<<"the function display of the class Child invoked !"<<endl;
}
};
int main()
{
    Child obj;    //création d'un objet de la classe Child
    obj.display();  //appeler la fonction dispaly() de la classe Child
};
