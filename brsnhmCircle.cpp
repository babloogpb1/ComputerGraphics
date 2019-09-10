// C++ program for circle drawing using Bresenham’s Algorithm 

#include<bits/stdc++.h>
#include <graphics.h> 
using namespace std;

void brsnhmCircle(int xc, int yc, int r) 
{ 
	int x = 0, y = r; 
	int d = 3 - 2 * r; 
	while (y >= x) 
	{ 
	    putpixel(xc+x, yc+y, RED); 
	    putpixel(xc-x, yc+y, RED); 
	    putpixel(xc+x, yc-y, RED); 
	    putpixel(xc-x, yc-y, RED); 
	    putpixel(xc+y, yc+x, RED); 
	    putpixel(xc-y, yc+x, RED); 
	    putpixel(xc+y, yc-x, RED); 
	    putpixel(xc-y, yc-x, RED);
		x++; 
		if (d > 0) 
		{ 
			y--; 
			d = d + 4 * (x - y) + 10; 
		} 
		else
			d = d + 4 * x + 6; 
	     
		delay(30); 
	} 
} 


int main() 
{ 
	int xc = 50, yc = 50, r = 30; 
	int gd = DETECT, gm; 
	initgraph(&gd, &gm, NULL); 
	brsnhmCircle(xc, yc, r); 
	
	getchar();
} 

