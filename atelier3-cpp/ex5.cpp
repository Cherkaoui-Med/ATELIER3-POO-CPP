#include<iostream>
using namespace std;
class Animal
{
    int age;
    string nom;
    public:
    void set_value();
};
class Zebra : public Animal
{
    // des information pour le Zebra :
    int age=30;
    string nom="zebra";
    string lieu_d_origine="Afrique";
    string durée_de_la_grossesse="13 mois";
    public:
    void set_value()
    {
    cout<<"l'age du "<<nom<<" est : "<<age<<" ,son origine est : "<<lieu_d_origine<<" ,et il a une duree de grossesse de : "<<durée_de_la_grossesse<<endl;
    }
};
class Dolphin : public Animal
{
    // des information pour le Dolphin :
    int age=45;
    string nom="dolphin";
    string lieu_d_origine="ocean Pacifique";
    string durée_de_la_grossesse="12 mois";
    public:
    void set_value()
    {
    cout<<"l'age du "<<nom<<" est : "<<age<<" ,son origine est : "<<lieu_d_origine<<" ,et il a une duree de grossesse de : "<<durée_de_la_grossesse<<endl;
    }
};
int main()
{
    Zebra obj_zebra;
    Dolphin obj_dolphin;
    obj_zebra.set_value();
    obj_dolphin.set_value();
}