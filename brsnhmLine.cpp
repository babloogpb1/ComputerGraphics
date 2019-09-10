// C++ program for brsnhm’s Line Generation.

#include<bits/stdc++.h> 
#include<graphics.h> 
using namespace std; 

void brsnhm(int x1, int y1, int x2, int y2) 
{ 
    int m = 2 * (y2 - y1); 
    int d = m - (x2 - x1); 
    for (int x = x1; x <= x2; x++) 
    { 
        putpixel(x, y1, WHITE);
	    d += m; 
	     
	    if (d >= 0) 
	    { 
		    y1++; 
		    d -= 2 * (x2 - x1); 
	    } 
    } 
} 
 
int main() 
{ 

    int x1 = 0 , y1 = 20, x2 = 200, y2 = 400; 
    int gd=DETECT,gm; 
    initgraph(&gd,&gm,NULL);
    brsnhm(x1, y1, x2, y2); 
    getchar();
    return 0; 
} 

