#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	char s[256];

	while (1)
	{
		cin.getline(s, 256);

		if (s[0] == '#') {
			break;
		}
		int count = 0;
		
		for (int i = 0; i < strlen(s) - 1; i++)
		{
			if (s[i] == 'a' || s[i] == 'A') { 
				count++;
			}
			if (s[i] == 'e' || s[i] == 'E') {
				count++;
			}
			if (s[i] == 'i' || s[i] == 'I') {
				count++;
			}
			if (s[i] == 'o' || s[i] == 'O') {
				count++;
			}
			if (s[i] == 'u' || s[i] == 'U') {
				count++;
			}
			
		}
		cout << count << '\n';
	}
}