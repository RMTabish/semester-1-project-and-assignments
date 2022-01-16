#include<iostream>
#include<iomanip>
using namespace std;

float revolution(float x, float y)
{
	float c = (16.7 * x) / 2 * 3.14 * (y / 2);
	return c;


}
int main()
{
	float speed, diameter;
	cout << "PLease enter speed in km/h"<<endl;
	cin >> speed;
	cout << "Please enter cicumference: " << endl;
	cin >> diameter;
	cout << "the circumference of wheel is " << revolution(speed, diameter) << endl;
	return 0;

}
