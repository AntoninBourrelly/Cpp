#include <iostream>
#include <ipv4.h>

using namespace std;

void AfficherTableau(unsigned char *tab){
    for(int indice=0; indice < 4;indice++){
        cout << (int) tab[indice];
        if(indice < 3){
            cout << ".";
        }

    }
 cout << endl;
}
int main()
{
    unsigned char add[4]= {192,168,1,1};
    unsigned char masque[4];
    unsigned char reseau[4];
    unsigned char diffusion[4];

    IPv4 add1(add,24);

    add1.ObtenirMasque(masque);
    cout << "Adresse IPv4: ";
    AfficherTableau(add);
   add1.ObtenirMasque(masque);
    cout << "Masque : ";
    AfficherTableau(masque);
    add1.ObtenirAdresseReseau(reseau);
    cout << "Réseau : ";
    AfficherTableau(reseau);
    add1.ObtenirAdresseDiffusion(diffusion);
    cout << "Diffusion : ";
    AfficherTableau(diffusion);


    /* cout <<(int) masque[0] << "." <<(int) masque[1] << ".";
    cout <<(int) masque[2] << "." <<(int) masque[3] << endl; */
    return 0;
}
