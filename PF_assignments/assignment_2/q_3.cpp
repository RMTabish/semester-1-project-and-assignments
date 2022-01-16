#include<iostream>
#include<cmath>

using namespace std;


//fuction to calculate LHS

double LHS(int x)
{
	double a = x * (3.14 / 180);
	double c = sin(a);
	return c;
}

//function to calculate RHS
double RHS(int X)
{
	double C = X - ((pow(X, 3.0)) / 3 * 2) + ((pow(X, 5.0)) / 5 * 4 * 3 * 2) - ((pow(X, 7.0)) / 7 * 6 * 5 * 4 * 3 * 2) + ((pow(X, 9.0)) / 9 * 8 * 7 * 6 * 5 * 4 * 3 * 2);
	return C;
}



//function to find difference
int diff(int d)
{
	int differene = RHS(d) - LHS(d);
	return differene;

}

//functions for part d
int series(int s)
{
 cout << s << "   " << (pow(s, 3)) / 3 * 2 << "   " << (pow(s, 5)) / 5 * 4 * 3 * 2 << "   " << (pow(s, 7)) / 7 * 6 * 5 * 4 * 3 * 2 << "   " << (pow(s, 9)) / 9 * 8 * 7 * 6 * 5 * 4 * 3 * 2 << endl;
 return 0;

}


//main funtion

int main()
{
	double angle;
	cout << "Please enter the angle :" << endl;
	cin >> angle;
	cout << "the resut of LHS is :" << LHS(angle)<<endl;
	cout << "resut of RHS in scientific format is :" << RHS(angle) << endl;
	cout << "the resut of RHS in fixed format is :" << fixed << RHS(angle) << endl;

	cout << "difference  of bothe side is :" << diff(angle)<<endl;
	
	cout << series(angle) << endl;
	return 0;

}
