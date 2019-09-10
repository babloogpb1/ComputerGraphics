//C++ program to draw Circle using DDA algorithm.

#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
void ddaCircle(float x,float y,float r)
{
	float x1,y1;
	float e=1/pow(2,ceil(log10(r)/log10(2)));
	cout<<e;
	x1 = 0;
	y1 = r;
	putpixel(x,y,GREEN);
	int c=getpixel(x,y);
	cout<<c;
	while(x1<=r)
	{
		putpixel(x+x1,y+y1,RED);
		putpixel(x+x1,y-y1,RED);
		putpixel(x-x1,y-y1,RED);
		putpixel(x-x1,y+y1,RED);
		x1+=(y1*e);
		y1-=(x1*e);
		delay(30);
	}
		/*putpixel(x+x1,y+y1,GREEN);
		putpixel(x+x1,y-y1,GREEN);
		putpixel(x-x1,y-y1,GREEN);
		putpixel(x-x1,y+y1,GREEN);
		delay(30);
	}
		putpixel(x+x1,y+y1,RED);
		putpixel(x+x1,y-y1,RED);
		putpixel(x-x1,y-y1,RED);
		putpixel(x-x1,y+y1,RED);
		//floodfill(x,y,GREEN);*/
	
}

int main()
{
	int gd=DETECT,gm; 
	initgraph(&gd,&gm,NULL);
	float x1,y1,x2,y2,x,y,r,z;
	cout<<"Enter the centre and the radius of the circle...\n";
	
	cin>>x>>y>>r;
	ddaCircle(x,y,r);
	
	getchar();
}
