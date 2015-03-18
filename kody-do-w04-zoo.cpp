/*
Autor: Krzysztof J. Urbański
Materiały na licencji "Uznanie autorstwa (Creative Commons)"
*/

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

class Zwierze 
{ 
public:
	Zwierze() { cout << "Zwierze() " << endl; } //a czy konstruktor może być wirtualny?
	Zwierze(const Zwierze&) { cout << "Zwierze(Zwierze&) " << endl; }
	virtual ~Zwierze() { cout << "~Zwierze() " << endl; } //uwaga!!! jest jedna metoda wirtualna, więc destruktor w tej klasie też musi być wirtualny
	virtual void daj_glos() { cout << "????????" << endl; } //bez virtual nie będzie polimorfizmu
protected:
private:
};

class Krowa : public Zwierze 
{
public:
	Krowa() { cout << "Krowa() " << endl; }
	Krowa(const Krowa&) { cout << "Krowa(Krowa&) " << endl; }
	~Krowa() { cout << "~Krowa() " << endl; }
	virtual void daj_glos() { cout << "Muuu!" << endl; } //virtual tutaj opcjonalnie
};

class Kon : public Zwierze 
{
public:
	Kon() { cout << "Kon() " << endl; }
	Kon(const Kon&) { cout << "Kon(Kon&) " << endl; }
	~Kon() { cout << "~Kon() " << endl; }
	virtual void daj_glos() { cout << "Ihaaaa!" << endl; } //virtual tutaj opcjonalnie
};

int main() 
{
	srand(time(NULL));
	
	Zwierze *z;
	if(rand() % 100 > 50)
		z = new Kon();
	else
		z = new Krowa();
	z->daj_glos();
	delete z;
	return 0;
}
