#include<iostream>
#include<math.h>
using namespace std;
class vecteur3d{
public:
float x,y,z;
vecteur3d(float a=0,float b=0,float c=0)
{
    x=a;
    y=b;
    z=c;
};
void afficher()
{
    cout<<"les composants du vecteur sont : ("<<x<<","<<y<<","<<z<<")"<<endl;
}
void somme(vecteur3d u,vecteur3d v)
{
    cout<<"la somme des deux vecteurs est le vecteur des composantes : ("<<u.x+v.x<<","<<u.y+v.y<<","<<u.z+v.z<<")"<<endl;
}
void produit_scalaire(vecteur3d u,vecteur3d v)
{
    cout<<"le produit scalaire des deux vecteurs est : "<<(v.x*u.x)+(v.y*u.y)+(v.z*u.z)<<endl;
}
void coincide(vecteur3d u,vecteur3d v)
{
    if (u.x==v.x && u.y==v.y && u.z==v.z)
    {
        cout<<"les deux vecteurs ont les memes composantes !"<<endl;
    }
    else
    {
        cout<<"les deux vecteurs n'ont pas les memes composantes !"<<endl;
    }
}
void norme(vecteur3d u)
{
    cout<<"la norme du vecteur est : "<<sqrt((u.x*u.x)+(u.y*u.y)+(u.z*u.z))<<endl;
}
void normax(vecteur3d u,vecteur3d v)
{
    if(sqrt((u.x*u.x)+(u.y*u.y)+(u.z*u.z))==sqrt((v.x*v.x)+(v.y*v.y)+(v.z*v.z)))
    {
        cout<<"les deux vecteurs ont des normes egaux"<<endl;
    }
    else if (sqrt((u.x*u.x)+(u.y*u.y)+(u.z*u.z))>sqrt((v.x*v.x)+(v.y*v.y)+(v.z*v.z)))
    {
        cout<<"le vecteur qui a la plus grande norme est : ("<<u.x<<","<<u.y<<","<<u.z<<")"<<endl;
    }
    else if (sqrt((u.x*u.x)+(u.y*u.y)+(u.z*u.z))<sqrt((v.x*v.x)+(v.y*v.y)+(v.z*v.z)))
    {
        cout<<"le vecteur qui a la plus grande norme est : ("<<v.x<<","<<v.y<<","<<v.z<<")"<<endl;
    }
}

/* passage par adresse :
void* normax(vecteur3d *u,vecteur3d *v)
{
    if(sqrt((u.x*u.x)+(u.y*u.y)+(u.z*u.z))==sqrt((v.x*v.x)+(v.y*v.y)+(v.z*v.z)))
    {
        cout<<"les deux vecteurs ont des normes egaux"<<endl;
    }
    else if (sqrt((u.x*u.x)+(u.y*u.y)+(u.z*u.z))>sqrt((v.x*v.x)+(v.y*v.y)+(v.z*v.z)))
    {
        cout<<"le vecteur qui a la plus grande norme est : ("<<u.x<<","<<u.y<<","<<u.z<<")"<<endl;
    }
    else if (sqrt((u.x*u.x)+(u.y*u.y)+(u.z*u.z))<sqrt((v.x*v.x)+(v.y*v.y)+(v.z*v.z)))
    {
        cout<<"le vecteur qui a la plus grande norme est : ("<<v.x<<","<<v.y<<","<<v.z<<")"<<endl;
    }
}
passage par reference :
void& normax(vecteur3d &u,vecteur3d &v)
{
    if(sqrt((u.x*u.x)+(u.y*u.y)+(u.z*u.z))==sqrt((v.x*v.x)+(v.y*v.y)+(v.z*v.z)))
    {
        cout<<"les deux vecteurs ont des normes egaux"<<endl;
    }
    else if (sqrt((u.x*u.x)+(u.y*u.y)+(u.z*u.z))>sqrt((v.x*v.x)+(v.y*v.y)+(v.z*v.z)))
    {
        cout<<"le vecteur qui a la plus grande norme est : ("<<u.x<<","<<u.y<<","<<u.z<<")"<<endl;
    }
    else if (sqrt((u.x*u.x)+(u.y*u.y)+(u.z*u.z))<sqrt((v.x*v.x)+(v.y*v.y)+(v.z*v.z)))
    {
        cout<<"le vecteur qui a la plus grande norme est : ("<<v.x<<","<<v.y<<","<<v.z<<")"<<endl;
    }
} */
};
int main()
{
    vecteur3d obj;
    vecteur3d vct1;
    vecteur3d vct2;
    vct1.x=2;
    vct1.y=3;
    vct1.z=5;
    vct2.x=10;
    vct2.y=20;
    vct2.z=30;
    vct1.afficher();
    obj.somme(vct1,vct2);
    obj.produit_scalaire(vct1,vct2);
    obj.coincide(vct1,vct2);
    vct1.norme(vct1);
    obj.normax(vct1,vct2);
}