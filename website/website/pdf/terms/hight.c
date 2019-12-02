#include<math.h>
#include<iostream>
using namespace std;
class height
{
float feet,inch;
public: height()
{
feet=0.0;
inch=0.0;
}
void read_height();
void disp_height();
void add(height , height);
};
void height::read_height()
{
cout<<" student's height':";

cin>>feet>>inch;
}
void height::disp_height()
{
cout<<"height in feet"<<feet<<", Inches:"<<inch<<"\n";
}
void height::add(height x,height y)
{
inch=x.inch+y.inch;
feet=x.feet+y.feet;
if(inch>=12.0)
{
feet=x.feet+y.feet+(inch/12.0);
inch=(int)inch%12;
}
}
main()
{
height d1,d2,d3;
cout<<"Enter 1st :";
d1.read_height();
cout<<"Enter second :\n";
d2.read_height();
d3.add(d1,d2);
d3.disp_height();
}