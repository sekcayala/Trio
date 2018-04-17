#include <iostream>
using namespace std;

void rearrangeInt (int & , int & , int & );

int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA
  
  
  rearrangeInt (red, green, blue);


  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}

void rearrangeInt(int & r, int & g, int & b)
{
int greatest;
int mid;
int least;

  if (r>=g && r>=b && g>=b)
   {
    greatest = r;
    mid = g;
    least = b;
   }
  else if (r>=g && r>=b && b>=g)
   {
   greatest = r;
   mid = b;
   least = g;
   }
  else if (g>=r && g>=b && r>=b)
   {
   greatest = g;
   mid = r;
   least = b;
   }
 else if (g>=r && g>=b && b>=r)
   {
   greatest = g;
   mid = b;
   least = r;
   }
  else if (b>=r && b>=g && g>=r)
   {
   greatest = b;
   mid = g;
   least = r;
   }
  else if (b>=r && b>=g && r>=g)
   {
   greatest = b;
   mid = r;
   least = g;
   }
  else 
  {
  cout<<"ERROR\n";
  }
r=greatest;
g=mid;
b=least;
}
