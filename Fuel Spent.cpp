// C++ program to accept an amount
// and count number of notes
#include <bits/stdc++.h>
using namespace std;

void countCurrency(int amount)
{
	int notes[7] = {100,
					50, 20, 10, 5,2, 1 };
	int noteCounter[7] = { 0 };

	for (int i = 0; i < 7; i++) {
		if (amount >= notes[i]) {
			noteCounter[i] = amount / notes[i];
			amount = amount - noteCounter[i] * notes[i];
		}

	}


	for (int i = 0; i < 7; i++) {
		if (noteCounter[i] != 0) {
			cout << noteCounter[i] << " nota(s) de R$ "<< notes[i] <<",00"<< endl;
		}
		else{
            cout << noteCounter[i]*0  << " nota(s) de R$ "<< notes[i] <<",00"<< endl;

		}
	}
}

int main()
{
	int amount ;
	cin>>amount;
	countCurrency(amount);
	return 0;
}
