#include<iostream>
#include<string>

using namespace std;

int main()
{
	int N[8];
	int asc = 0, des = 0;

	for (int i = 0; i < 8; i++)
	{
		cin >> N[i];
		if (N[i] == i + 1) {
			asc++;
		}
		else if (N[i] == 8 - i) {
			des++;
		}
		
	}

	if (asc == 8){
		cout << "ascending" << endl;
	}
	else if (des == 8){ 
		cout << "descending" << endl;
	}
	else{ 
		cout << "mixed" << endl; 
	}

	return 0;
}