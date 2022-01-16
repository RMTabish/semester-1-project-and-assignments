//rai muhamamd tabish 
//i212541

#include <iostream>
#include<cmath>
using namespace std;

//functions to caclculate position at any instant 

int position(double vi)
{
//variable decrelation
const t =0.01;

const g=9.8;

double p=0;

//updating position at rate of 100 seconds

  for(int i=0;i<=100;i++)
  
  {
  //calculating position by formula
        p = v*t - (1/2)*g*pow(t,2);

//updating velocity 

        v = v - g * t;
//updating postition 

        p = p + v * t;
       
        
    }
    return p;


}

int main()
{
    
    double x;
    cout<<"\nEnter initial position: ";
   
    cin>>x;
   cout<<"the position is "<<position(x)<<endl;
}

