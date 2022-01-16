	#include<iostream>
#include<iomanip>
using  namespace std;

float train_length(float t)
{

	int l = (72 + 54) * t;
	return l;
}
int main()
{

	int time;
	cout << "please enter the time the good train passes the him" << endl;
	cin >> time;
	cout << "the length of train passing the person at " << time << " is " << train_length(time) << endl;
	return 0;

}
