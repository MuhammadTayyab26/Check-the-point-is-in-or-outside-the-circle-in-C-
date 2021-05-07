#include<iostream> 
#include<conio.h> 
using namespace std;
int main() 
{ 
int x,y,r; 
int dis,d; 
 
cout<<"\nEnter the radius of the circle :";
cin >>r;
cout<<"\nEnter coordinates of circle:"<<endl;
cout<<"point x :";
cin>>x;
cout<<"point y :";
cin>>y;
  
dis = x*x+y*y; 
d = r*r; 

if(dis == d) 
cout<<"\nPoint is on the circle"; 

else 
{ 
if(dis>d) 
cout<<"Point is outside the circle"; 
else 
cout<<"Point is inside the circle"; 
} 
 
getch(); 
} 
