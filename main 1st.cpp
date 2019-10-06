#include <winbgim.h>
#include <cstdlib>
#include <math.h>

using namespace std;

int main ()
{
	float a=0;
	float pi=3.1415926535; 
	initwindow(600,600);
	while(a<pi)
	{
		setcolor(14);
		line(300-300*sqrt(2)*cos(a),300-300*sqrt(2)*sin(a),300+300*sqrt(2)*cos(a),300+300*sqrt(2)*sin(a));
		delay(200);
		setcolor(0);
		line(300-300*sqrt(2)*cos(a),300-300*sqrt(2)*sin(a),300+300*sqrt(2)*cos(a),300+300*sqrt(2)*sin(a));
		a=a+0.5;
		setcolor(14);
		line(300-300*sqrt(2)*cos(a),300-300*sqrt(2)*sin(a),300+300*sqrt(2)*cos(a),300+300*sqrt(2)*sin(a));
	}
	getch();
	return 0;
}
