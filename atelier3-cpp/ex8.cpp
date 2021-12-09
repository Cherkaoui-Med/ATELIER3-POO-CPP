#include<iostream>
using namespace std;
class Media
{
    protected:
    string titre;
    public:
    virtual void imprimer();
    virtual char *id();
};
class Audio : public Media
{
    int duree_en_secondes;
    void vitesse_de_lecture();
};
class CD : public Audio
{
    string prix,taille;
};
class Cassette : public Audio
{
    string prix,taille;
};
class Disque : public Audio
{
    string prix,taille;
};
class Livre : public Media
{
    string prix,auteur;
    int nombre_de_pages();
};
class Presse : public Media
{
    string nom_de_presse;
};
class Magazine : public Presse
{
    string nom_de_magazine;
};
class Journal : public Presse
{
    string nom_du_journal;
};
class Revue : public Presse
{
    float publications_par_mois();
};
int main()
{

};