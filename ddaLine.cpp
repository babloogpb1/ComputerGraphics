//C++ program to draw line using DDA algorithm.
#include<iostream>
#include<graphics.h>
using namespace std;
void ddaLine(int x1,int y1,int x2,int y2)
{
	if(x1==x2)
	{
	    if(y1<y2)
		    while(y1<=y2)
		    {
			    putpixel(x1,y1,GREEN);
		        y1+=1;//round(float(y1)-((x1-i)*m));		
		        delay(20);
		    }
		
	    else
	        while(y1>=y2)
		    {
			    putpixel(x1,y1,GREEN);
		        y1-=1;//round(float(y1)-((x1-i)*m));		
		        delay(20);
		    }
	}
	else
	{
	    float m=(float)(y2-y1)/(x2-x1);
	    cout<<m<<endl;
	    int y=y1;
	    if(x1<x2)
	    for(int i=x1;i<x2;i++)
	    {
		    putpixel(i,y,CYAN);	
		    y=round(float(y1)+((i-x1)*m));
		    delay(20);
	    }
	    else
	    for(int i=x1;i>x2;i--)
	    {
		    putpixel(i,y,GREEN);
		    y=round(float(y1)-((x1-i)*m));		
		    delay(20);
	    }
	}
	getchar();

}
int main()
{
	int gd=DETECT,gm; 
	initgraph(&gd,&gm,NULL);
	int x1,y1,x2,y2;
	cout<<"Enter the initial and final points\n";
	
	cin>>x1>>y1>>x2>>y2;
	putpixel(x1,y1,RED);
	delay(2000);
	putpixel(x2,y2,RED);
	delay(2000);	
	ddaLine(x1,y1,x2,y2);
	
}
