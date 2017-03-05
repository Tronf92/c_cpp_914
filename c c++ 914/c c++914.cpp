#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <string>


using namespace std;

class film{
	public:
		char nume[64];
		char prim_actor[64];
		char aldoilea_actor[64];
		void arata_film();
		void initializare(char *nume, char *prim, char *aldoilea);
};

void film::arata_film(){
	cout << "Numele filmului: " << nume << endl;
	cout << "Interpreteaza: " << prim_actor << " si " << aldoilea_actor << endl << endl;
}

void film::initializare(char *nume_film, char *prim, char *aldoilea){
	strcpy(nume, nume_film);
	strcpy(prim_actor , prim);
	strcpy(aldoilea_actor, aldoilea);
}


void main(){
	film fugar, nopti;
	fugar.initializare("Fugarul","Harrison Ford","Tommy Lee Jones");
	nopti.initializare("Nopti albe in Seatle", "Tom Hanks","Meg Ryan");

	cout << "Ultimele doua filme pe care le-am vazut sunt: " << fugar.nume << " si " << nopti.nume << endl;
	cout << "Cred ca" << fugar.prim_actor << " a fost mare!" << endl;

	system("pause");

}