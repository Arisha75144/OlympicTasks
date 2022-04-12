#include <iostream>
using namespace std;
#include <vector>
#include <cmath>
#include <algorithm>

struct Point{
  int x, y;

  Point(){
    cin>>x>>y;
  }

  double  calcDistance(Point& aOther){
    return sqrt((aOther.x-x)*(aOther.x-x)+
      (aOther.y-y)*(aOther.y-y));
    
  
  }
/*istream& operator>> (istream& is, Point& dt)
{
    is>> dt.x>> dt.y;
    return is;
}*/
  Point(int aX, int aY){
    x = aX; y = aY;
  }
bool operator<(Point& aOther){
  if (x  != aOther.x) return x < aOther.x;
  return y < aOther.y;
  
  
}
  void print(){
    cout<<x<<" "<<y<<"\n";
  }
};
struct  Square{
vector<Point>points;
  Square(){
    points.resize(4);
    int a=points[0].calcDistance(points[1]);
    for (int i=0;i<points.size()-1;i++)
      if(points[i].calcDistance(points[i+1])!=a)
      {
        cout<<"ne kv";
        return;
        }
        if (points[0].calcDistance(points.back())!=a)
        cout<<"ne kv";
    
  }
 double  calcPerimetr(){
   int suma=0;
    for (int i=0;i<points.size()-1;i++)
  suma+=points[i].calcDistance(points[i+1]);
  return suma+points[0].calcDistance(points.back());
   
   
 }
double calcArea(){
  int  a=(points[0].calcDistance(points[1]));
  return a*a;
  
}

};

int main() {
  //int n;
  //cin>>n;
  int suma=0;
  // vector  <Point>a (n);
  // for (int i=0;i<a.size()-1;i++)
  //   cout<<a[i].calcDistance(a[i+1])<<"\n";
  // vector <Point>h(4);
  // sort(h.begin(),h.end());
  // for (int i=0;i<h.size();i++)
  //   h[i].print();
  
  //for (int i=0;i<h.size();i++)
    //cin>>h[i].x >> h[i].y;
  Square s;
  
  cout<<s.calcArea();
  



  
  //p.create();
  //p.print();

}
