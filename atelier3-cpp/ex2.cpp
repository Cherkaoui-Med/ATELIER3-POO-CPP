#include <iostream>
using namespace std;
class shape  //défintion du classe shape
{
    public:
    shape()   //définition du constructeur
    {
        int x,y;   //déclarer x et y (largeur et hauteur)
    }
};
class triangle : public shape  //défintion du sous-classe triangle
{
    public:
    int area(int x,int y)     //définition de la fonction area pour le triangle
    {
        cout<<"la surface de la triangle est : "<<x*y<<endl;   //afficher l'air du triangle
        return 0;
    }
};
class rectangle : public shape   //défintion du sous-classe rectangle
{
    public:
    int area(int x,int y)    //définition de la fonction area pour le rectangle
    {
        cout<<"la surface de la rectangle est : "<<x*y<<endl;   //afficher l'air du rectangle
        return 0;
    }
};
int main()
{
    triangle t;    //creation de l'objet t du classe triangle
    t.area(5,7);    //appel du fonction area du classe triangle
    rectangle r;    //creation de l'objet r du classe rectangle
    r.area(10,2);   //appel du fonction area du classe rectangle
}