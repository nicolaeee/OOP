#include <iostream>
#include <cstring>
using namespace std;

class Specie {
protected:
    char nume[20];
    char adresa[20];

public:
    Specie() {
        strcpy(nume, "");
        strcpy(adresa, "");
    }

    Specie(const char* nume, const char* adresa) {
        strcpy(this->nume, nume);
        strcpy(this->adresa, adresa);
    }

    Specie(const Specie& other) {
        strcpy(this->nume, other.nume);
        strcpy(this->adresa, other.adresa);
    }

    void citeste() {
        cout << "Introduceti numele: ";
        cin.getline(nume, 20);

        cout << "Introduceti adresa: ";
        cin.getline(adresa, 20);
    }

    void afiseaza() {
        cout << "Nume: " << nume << endl;
        cout << "Adresa: " << adresa << endl;
    }
};

class Mamifere : public Specie {
protected:
    char varsta[20];
    char zona[20];

public:
    Mamifere() : Specie() {
        strcpy(varsta, "");
        strcpy(zona, "");
    }

    Mamifere(const char* nume, const char* adresa, const char* varsta, const char* zona) : Specie(nume, adresa) {
        strcpy(this->varsta, varsta);
        strcpy(this->zona, zona);
    }

    Mamifere(const Mamifere& other) : Specie(other) {
        strcpy(this->varsta, other.varsta);
        strcpy(this->zona, other.zona);
    }

    void citeste() {
        Specie::citeste();

        cout << "Introduceti varsta mamiferului: ";
        cin.getline(varsta, 20);

        cout << "Introduceti zona de provenienta: ";
        cin.getline(zona, 20);
    }

    void afiseaza() {
        Specie::afiseaza();
        cout << "Varsta mamiferului: " << varsta << endl;
        cout << "Zona de provenienta: " << zona << endl;
    }
};

class Pasari : public Specie {
protected:
    char greutatea[20];
    char varsta[20];

public:
    Pasari() : Specie() {
        strcpy(greutatea, "");
        strcpy(varsta, "");
    }

    Pasari(const char* nume, const char* adresa, const char* greutatea, const char* varsta) : Specie(nume, adresa) {
        strcpy(this->greutatea, greutatea);
        strcpy(this->varsta, varsta);
    }

    Pasari(const Pasari& other) : Specie(other) {
        strcpy(this->greutatea, other.greutatea);
        strcpy(this->varsta, other.varsta);
    }

    void citeste() {
        Specie::citeste();

        cout << "Introduceti greutatea pasarii: ";
        cin.getline(greutatea, 20);

        cout << "Introduceti varsta pasarii: ";
        cin.getline(varsta, 20);
    }

    void afiseaza() {
        Specie::afiseaza();
        cout << "Greutatea pasarii: " << greutatea << endl;
        cout << "Varsta pasarii: " << varsta << endl;
    }
};

int main() {
    Specie specie1;
    specie1.citeste();
    specie1.afiseaza();

    Mamifere mamifer1;
    mamifer1.citeste();
    mamifer1.afiseaza();

    Pasari pasare1;
    pasare1.citeste();
    pasare1.afiseaza();

    return 0;
}
