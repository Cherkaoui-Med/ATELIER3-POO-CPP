#include<iostream>
using namespace std;
class Test    //creation du classe Test
{
    public:   //rendre la fonction call() public
    void call()
    {
        static int compteur=1;   //definir une variable static 
        cout<<"la fonction call() du classe Test etait appelee "<<compteur<<" fois."<<endl;
        compteur++;  //incrementer le compteur chaque fois on apple la fonction call()
    }
};
int main()
{
Test object;
object.call();
object.call();
object.call();
Test object2;    //le compteur continuer de calculer le nombre d'appelation meme pour un autre objet
object2.call();
object2.call();
}