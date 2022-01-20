#include <iostream>
using namespace std;


void swap(int *x, int *y)
{
	int aux = *x;
	*x = *y;
	*y = aux;
}

//98 52 63 2 18 96 31 58 84 40 41 45 66 100 46 71 26 48 81 20 73 91 68 76 13 93 17 29 64 95 79 21 55 75 19 85 54 51 89 78 15 87 43 59 36 1 90 35 65 56 62 28 86 5 82 49 3 99 33 9 92 32 74 69 27 22 77 16 44 94 34 6 57 70 23 12 61 25 8 11 67 47 83 88 10 14 30 7 97 60 42 37 24 38 53 50 4 80 72 39

int contadorbubble(int arr[], int r)
{
	int cont = 0;
	bool swapped = true;
	while(swapped != false){
		swapped = false;
		cont++;
		for ( int i=0; i < r - 1 ; i++){
			if (arr [i] > arr [i + 1])
			{
				swap(&arr[i], &arr[i + 1]);
				swapped = true;
				
			}
		}
	}

return cont;
}

int main()
{

	string line;
	int i = 0, n;
	cin >> n ;
	int v[n];

	while (i < n)
	{
		cin >> v[i];
		i++;
	}

	cout <<	contadorbubble(v, n) << "\n";

}
