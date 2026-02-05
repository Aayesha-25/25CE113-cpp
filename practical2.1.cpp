#include<iostream>
using namespace std;
class rectangle
{
  double lenght;
  double width;
  public:
      double area();
      double perimeter();
      void setd(double,double);
};
void rectangle::setd(double l,double w)
{
    if(l>0&&w>0)
    {

    lenght=l;
    width=w;
    }
    else
        cout<<"Invalid input";
}
double rectangle::area()
{
    return lenght*width;
}
double rectangle::perimeter()
{
    return 2*(lenght+width);
}
int main()
{
    int n,i;
    cout<<"Enter number of rectanglen you want";
    cin>>n;
    rectangle a[n];
    double l,w;
   for(i=0;i<n;i++)
   {
        cout<<"Enter length and width of the rectangle";
    cin>>l>>w;
    a[i].setd(l,w);
    double Area=a[i].area();
    double Perimeter=a[i].perimeter();
    cout<<"Area of the rectangle is :"<<Area<<endl;
    cout<<"Perimeter of the rectangle is :"<<Perimeter<<endl;
   }
   return 0;
}
