#include<iostream>
using namespace std;
int main()
{
	//variables
	double gb;
	int pkg_a_cost;
	int pkg_b_cost;
	char pkg;
	//program
	cout << "enter the internet used in gb " << endl;
	cin >> gb;
	cout << "sekect the package " << endl;
	cin >> pkg;
	switch (pkg)
	{
	case 'A':
		if (gb <= 1)
			pkg_a_cost = 100;
		else if (gb > 1)
			pkg_a_cost = 100 + (gb - 1) * 200;
	case 'B':
		if (gb <= 1)
			pkg_b_cost = 200;
		else if (gb > 1)
			pkg_b_cost = 100 + (gb - 2.5) * 100;
	}
		switch (pkg)
		{
	case'A':
		cout<<"total cost " << pkg_a_cost;

		break;
	case 'B':
		cout << "total cost "<<pkg_b_cost;
		break;
	}
		if (pkg_a_cost > pkg_b_cost)
			cout << " you could have saved RS " << pkg_a_cost - pkg_b_cost<<" if you subscribed to offer B";
		else if (pkg_a_cost < pkg_b_cost)
			cout << " you could have save RS " << pkg_a_cost - pkg_b_cost << " if you subscribed to offer A";


		return 0;
}
