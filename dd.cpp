#include <iostream>
using namespace std;
#include <vector>
#include <cmath>
#include <algorithm>

struct Point {
    int x, y;

    Point() {
        cin >> x >> y;
    }

    double  calcDistance(Point& aOther) {
        return sqrt((aOther.x - x)*(aOther.x - x) +
            (aOther.y - y)*(aOther.y - y));
    }

    Point(int aX, int aY) {
        x = aX; y = aY;
    }
    bool operator<(Point& aOther) {
        if (x != aOther.x) return x < aOther.x;
        return y < aOther.y;
    }
    void print() {
        cout << x << " " << y << "\n";
    }
};
struct Rectangle {
    vector<Point>points;

    Rectangle() {
        vector<int>a;
        points.resize(4);
        for (int i = 0; i < points.size(); i++) {
            a.push_back(points[i].calcDistance(points[i + 1]));
        }
        for (int i = 0; i < a.size()-2; i++) {
            if (a[i] != a[i + 2]) {
              cout<<"\n";
              cout<<i<<" ";
              cout<<a[i]<<" "<<a[i+2]<<"\n";
                cout << "ne rectangle"<<"\n";
                break;
            }

        }
    }

    double calcArea() {
        int  a = (points[0].calcDistance(points[1]));
        int b = (points[1].calcDistance(points[2]));
        return a * b;
    }

    double  calcPerimetr() {
        int suma = 0;
        for (int i = 0; i < points.size() - 1; i++)
            suma += points[i].calcDistance(points[i + 1]);
        return suma + points[0].calcDistance(points.back());
    }
virtual
string proverka(){
  return "rectangle"; 

  
}
};

struct  Square:public Rectangle
{
    Square() {
        int a = points[0].calcDistance(points[1]);
        for (int i = 0; i < points.size() - 1; i++)
            if (points[i].calcDistance(points[i + 1]) != a)
            {
                cout << "ne kv";
                return;
            }
        if (points[0].calcDistance(points.back()) != a)
            cout << "ne kv";

    }
string proverka(){
  return "square"; }
};

int main() {
    Rectangle *d=new Square;
  //Square fq;
  cout<<d->proverka()<<"\n";
  //cout<<fq.proverka();
  
}
/*
0 0
0 5
3 5
3 0


0 0
0 7
7 7
7 0




*/
