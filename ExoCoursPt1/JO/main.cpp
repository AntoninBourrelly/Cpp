#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;
int main(){
    string nomDuFichier;
    cout << "Entrer le nom du fichier à lire: ";
    cin >> nomDuFichier;
    //Création du flux en lecture sur le fichier
    ifstream leFichier(nomDuFichier.c_str());
    //c_str() transforme string en char*
    if(!leFichier .is_open())
        cerr << "Erreur lors de l'ouverture du fichier"<<endl;
    else{
        string pays;
        int nbOr;
        int nbArgent;
        int nbBronze;
        cout<< "+" << setfill('-') << setw(18) << "+" <<setfill(' ')<< setfill('-') << setw(9) << "+" <<setfill(' ')<< setfill('-') << setw(9) << "+" <<setfill(' ')<< setfill('-') << setw(9) << "+" <<setfill(' ')<< endl;
        do{
            //récupération des valeurs
            leFichier >> pays >> nbOr >> nbArgent >> nbBronze;
            if(leFichier.good()) //Si les valeur sont bien été lues
            {
                cout << "|" << setw(17) << left << pays << right << "|" << setw(8) << nbOr << "|" << setw(8) << nbArgent << "|" << setw(8) << nbBronze << "|" << endl;
            }
        }while(!leFichier.eof());
        cout<< "+" << setfill('-') << setw(18) << "+" <<setfill(' ')<< setfill('-') << setw(9) << "+" <<setfill(' ')<< setfill('-') << setw(9) << "+" <<setfill(' ')<< setfill('-') << setw(9) << "+" << setfill(' ')<< endl;


    }
    return 0;
}
