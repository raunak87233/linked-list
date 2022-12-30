#include <bits/stdc++.h>
using namespace std;
 
struct Point{
	int x;
	int y;
	int z;
};
 
int main() {
	Point p1 = {1,2,3};
	cout<<" x: "<<p1.x<<" y: "<<p1.y<<" z: "<<p1.z<<"\n";
	p1.y=18;
	cout<<" x: "<<p1.x<<" y: "<<p1.y<<" z: "<<p1.z<<"\n";
 
	Point *p2 = &p1;
	//request for member ‘x’ in ‘p2’, which is of pointer type ‘Point*’ (maybe you meant to use ‘->’ ?)
//	cout<<p2.x; need to use the -> here
 
	cout<<" x: "<<p2->x<<" y: "<<p2->y<<" z: "<<p2->z<<"\n";
	// your code goes here
	return 0;
}
