#include<iostream>
using namespace std;

int main()
{
//variable decrelation
int humid,precpt;
string vis,outlook,wind,temp;
//starting text
cout<<"welcome to the trip advisor"<<endl;
cout<<"enter the outlook"<<endl;
cout<<"is it sunny, rain or overcast "<<endl;
getline(cin,outlook);
//in case outlook is sunny
if(outlook=="sunny")
{cout<<"enter the humidity"<<endl;
cin>>humid;
if(humid<40)
{cout<<"GO FOR TRIP"<<endl;}
if(humid>60)
{cout<<"STAY AT HOME"<<endl;}
else if(humid>=40&&humid<=60)
{cout<<"enter the tepmrature"<<endl;
getline(cin,temp);
if(temp=="high")
cout<<"stay att home"<<endl;
else if(temp=="low")
cout<<"go for trip"<<endl;
}
//incase outlook is overcast
}
else if(outlook=="overcast")
{
cout<<"Chance of precipitation"<<endl;
cin>>precpt;
if(precpt<50)
{
cout<<"What is wind factor"<<endl;
getline(cin,wind);
if(wind=="strong")
cout<<"stay at home"<<endl;
else if(wind=="moderate")
cout<<"stay at home"<<endl;
}
else if(precpt>=50)
cout<<"STAY AT HOME"<<endl;
}
//incase out look is rainy
else if(outlook=="rain")
{cout<<"what is visibility"<<endl;
getline(cin,vis);
if(vis=="poor")
cout<<"stay at home"<<endl;
else if(vis=="normal")
cout<<"go for trip"<<endl;
}


return 0;}


