#include<iostream>
using namespace std;
int flip()
{

return rand()%2;

}
int main()
{

int t=0;

int h=0;

int n;

for(int i=0;i<100;i++)

{
n=flip();

if(n==1)
{
cout<<"tails: "<<n<<endl;
t++;

}
else if(n==0)
{
cout<<"head: "<<n<<endl;
h++;
}
}
cout<<"heads appears "<<h<<" times"<<endl;
cout<<"tails appears "<<t<<" times"<<endl;
return 0;


}
