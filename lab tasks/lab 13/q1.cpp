#include<iostream>
using namespace std;
int main()
{
int matrix[5][5];
for(int i=0;i<5;i++)
{
for(int j=0;j<5;j++)
{
cout << "Enter the values : ";
cin>>matrix[i][j];
}
}


cout<<"the elements of array"<<endl;

for(int i=0;i<5;i++)
{
for(int j=0;j<5;j++)
{
cout<<matrix[i][j]<<" ";
}
cout << endl ;
}
cout << endl;

return 0;


}
