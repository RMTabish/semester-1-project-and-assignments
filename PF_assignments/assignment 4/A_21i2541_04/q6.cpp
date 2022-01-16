
//rai muhammad tabish
//i21-2541
//question number 6

#include<iostream>
using namespace std;
int main()
{
//variable  decrelation
int floors, rooms = 0, ocp_rooms = 0, un_rooms;
float percentage;


//program started
cout << "enter the number of floors in the building " << endl;
cin >> floors;

for (int i = 1;i <=floors;i++)
{
cout << "enter the number of rooms in " << i << " floor" << endl;
cin >> rooms;
cout << "enter how many rooms are occupied in " << i << " floor" << endl;
cin >> ocp_rooms;

rooms =+ rooms;
ocp_rooms =+ ocp_rooms;


}
//calculating requirements
un_rooms = rooms - ocp_rooms;
percentage = (ocp_rooms / rooms)*100;
//required outputs
cout << "the total number of rooms are :" << rooms << endl;
cout << "the number of rooms occupied are :" << ocp_rooms << endl;
cout << "the number of rooms un-occupied are :" << un_rooms << endl;
cout << "percentage of occupied rooms are :" << percentage <<"%" << endl;

return 0;

}


	
	
	

