#include<iostream>
using namespace std;
int main()
{
	int p, q;
	int x;	char a;
	string col1, col2;
	cout << "select Option A or B" << endl;

	cin >> a;

	switch (a)
	{
	case 'A':
		cout << "enter the number" << endl;
		cin >> x;

		if (x < 1 && x>81)
			cout << "number is out of grid" << endl;
		else {
			if (x == 1 || x == 7 || x == 12 || x == 15 || x == 18 || x == 19 || x == 22 || x == 25 || x == 30 || x == 33 || x == 36 || x == 37 || x == 40 || x == 43 || x == 48 || x == 51 || x == 54 || x == 55 || x == 58 || x == 61 || x == 66 || x == 69 || x == 72 || x == 73 || x == 76 || x == 79)
				cout << "the colour of " << x << " is grey";

			else if (x == 2 || x == 58 || x == 10 || x == 13 || x == 16 || x == 20 || x == 23 || x == 26 || x == 28 || x == 31 || x == 34 || x == 38 || x == 41 || x == 44 || x == 46 || x == 49 || x == 52 || x == 56 || x == 59 || x == 62 || x == 64 || x == 67 || x == 70 || x == 74 || x == 77 || x == 80)
				cout << "the colour of " << x << " is blue";
			else
				cout << "the colour of " << x << " is red";
		}
		break;
	case 'B':


		cout << "enter two numbers to check if the squares have same colour or not" << endl;
		cin >> p;
		cin >> q;
		if (p == 1 || p == 7 || p == 12 || p == 15 || p == 18 || p == 19 || p == 22 || p == 25 || p == 30 || p == 33 || p == 36 || p == 37 || p == 40 || p == 43 || p == 48 || p == 51 || p == 54 || p == 55 || p == 58 || p == 61 || p == 66 || p == 69 || p == 72 || p == 73 || p == 76 || p == 79)
		{
			col1 = "gray";
		}
		else if (p == 2 || p == 58 || p == 10 || p == 13 || p == 16 || p == 20 || p == 23 || p == 26 || p == 28 || p == 31 || p == 34 || p == 38 || p == 41 || p == 44 || p == 46 || p == 49 || p == 52 || p == 56 || p == 59 || p == 62 || p == 64 || p == 67 || p == 70 || p == 74 || p == 77 || p == 80)
		{
			col1 = "blue";
		}
		else if (p == 3 || p == 6 || p == 9 || p == 11 || p == 14 || p == 17 || p == 21 || p == 24 || p == 27 || p == 29 || p == 32 || p == 35 || p == 39 || p == 42 || p == 45 || p == 47 || p == 51 || p == 53 || p == 57 || p == 60 || p == 63 || p == 65 || p == 68 || p == 71 || p == 75 || p == 78 || p == 81)
		{
			col1 = "red";
		}
		
		if (q == 1 || q == 7 || q == 12 || q == 15 || q == 18 || q == 19 || q == 22 || q == 25 || q == 30 || q == 33 || q == 36 || q == 37 || q == 40 || q == 43 || q == 48 || q == 51 || q == 54 || q == 55 || q == 58 || q == 61 || q == 66 || q == 69 || q == 72 || q == 73 || q == 76 || q == 79)
		{
			col2 = "gray";
		}
		else if (q == 2 || q == 58 || q == 10 || q == 13 || q == 16 || q == 20 || q == 23 || q == 26 || q == 28 || q == 31 || q == 34 || q == 38 || q == 41 || q == 44 || q == 46 || q == 49 || q == 52 || q == 56 || q == 59 || q == 62 || q == 64 || q == 67 || q == 70 || q == 74 || q == 77 || q == 80)
		{
			col2 = "blue";
		}
		else if (q == 3 || q == 6 || q == 9 || q == 11 || q == 14 || q == 17 || q == 21 || q == 24 || q == 27 || q == 29 || q == 32 || q == 35 || q == 39 || q == 42 || q == 45 || q == 47 || q == 51 || q == 53 || q == 57 || q == 60 || q == 63 || q == 65 || q == 68 || q == 71 || q == 75 || q == 78 || q == 81)
		{
			col2 = "red";
		}
	
		if (col2==col1)
				{
					cout << "the colour is same" << endl;

				}
				else 
				{
					cout << "colour is not same" << endl;
				}
			
	
	}
	return 0;
}
