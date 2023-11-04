#include <iostream>
#define MAX_CIFRE_NR 10 // numarul maxim de cifre pe care le poate avea un numar in program
#define NR_CIFRE 10 // numarul de cifre (0, 1, 2, ..., 9)
using namespace std;
int f[NR_CIFRE];
int main()
{
	char nr[MAX_CIFRE_NR+1], *c;
	int cif, i;
	// citesc numarul de la tastatura
	cout << "Introdu un numar de maxim " << MAX_CIFRE_NR << " cifre: ";
	cin.getline(nr, MAX_CIFRE_NR+1);
	// parcurc cifrele numarului
	// si calculez frecventa cifrelor
	for (c = nr; *c; c++) f[*c-'0']++;
	// determin cel mai mare numar
	// care se poate obtine utilizand
	// toate cifrele lui n si il afisez
	cout << "Cel mai mare nr (toate cifrele): ";
	for (cif = 9; cif >= 0; cif--)
		if (f[cif])
			for (i = 0; i < f[cif]; i++)
				cout << cif;
	cout << '\n';
	// determin cel mai mare numar
	// care se poate obtine utilizand
	// toate cifrele distincte ale lui n
	// si il afisez
	cout << "Cel mai mare nr (toate cifrele distincte): ";
	for (cif = 9; cif >= 0; cif--)
		if (f[cif])
			cout << cif;
	cout << '\n';
	return 0;
}
