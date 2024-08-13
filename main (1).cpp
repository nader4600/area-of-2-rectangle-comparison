#include <iostream>
using namespace std;
int main()
{
    int area,length,width,area2,length2,width2;
    cout<<"Enter The length and width of recangle1  :  "<<endl;
    cin>>length>>width;
    cout<<"Enter The length and width of recangle2  :  "<<endl;
    cin>>length2>>width2;
    area=length*width;
    area2=length2*width2;
    if(area>area2)
    {
        cout<<"area of a recangle 1 is bigger than recangle 2 "<<endl;
    }
    else if(area2>area)
    {
        cout<<"area of a recangle 2 is bigger than recangle 1 "<<endl;
    }
    else
    {
        cout<<"the area of both recangle is equal "<<endl;
    }
}