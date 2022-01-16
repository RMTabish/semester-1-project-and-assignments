//rai muhammad tabish
//i21-2541
//asiignment no 4


#include<iostream>
#include<cmath>
using namespace std;
int term;
int s=1;
double su=1;
double calc_term(int nth_term, double angle)
{
double power=1;
s=s*-1;
int factorial = 1;
for (int i = (nth_term);i > 0;i--)
{
factorial *= i;
}

for (int i = 0;i < (nth_term );i++)
{
power*= angle;
}


double x = (power*s) / factorial;

return x;

}

double sum(double x)
{
double ans;
for (int i = 0,j = 1;i<term;i++)
{
ans= calc_term(++j,x);
++j;

su+=ans;

}
return su;
}

double test(double x)
{
double y=cos(x);
return y;


}


int main()
{
double angle;
cout << "enter the angle in radians: " << endl;
cin >> angle;
cout << "enter the number of terms"<<endl;
cin >> term;
cout << sum(angle) << endl;
cout<<	"the value by test function is "<<test(angle)<<endl;
	
}
