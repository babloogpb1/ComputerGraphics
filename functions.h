#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
void ddaLine(int x1,int y1,int x2,int y2,int a)
{
	if(x1==x2)
	{
	    if(y1<y2)
		    while(y1<=y2)
		    {
			    putpixel(x1,y1,a);
		        y1+=1;//round(float(y1)-((x1-i)*m));		
		        //delay(2);
		    }
		
	    else
	        while(y1>=y2)
		    {
			    putpixel(x1,y1,a);
		        y1-=1;//round(float(y1)-((x1-i)*m));		
		        //delay(2);
		    }
	}
	else
	{
	    float m=(float)(y2-y1)/(x2-x1);
	    //cout<<m<<endl;
	    int y=y1;
	    if(x1<x2)
	    for(int i=x1;i<x2;i++)
	    {
		    putpixel(i,y,a);	
		    y=round(float(y1)+((i-x1)*m));
		 // delay(2);
	    }
	    else
	    for(int i=x1;i>x2;i--)
	    {
		    putpixel(i,y,a);
		    y=round(float(y1)-((x1-i)*m));		
		    //delay(2);
	    }
	}

}

void ddaCircle(float x,float y,float r)
{
	float x1,y1;
	float e=1/pow(2,ceil(log10(r)/log10(2)));
	//cout<<e;
	x1 = 0;
	y1 = r;
	putpixel(x,y,GREEN);
	while(x1<=r)
	{
		putpixel(x+x1,y+y1,RED);
		putpixel(x+x1,y-y1,RED);
		putpixel(x-x1,y-y1,RED);
		putpixel(x-x1,y+y1,RED);
		x1+=(y1*e);
		y1-=(x1*e);
	}
		//delay(30);
		/*putpixel(x+x1,y+y1,GREEN);
		putpixel(x+x1,y-y1,GREEN);
		putpixel(x-x1,y-y1,GREEN);
		putpixel(x-x1,y+y1,GREEN);
		//delay(30);
	}
		putpixel(x+x1,y+y1,RED);
		putpixel(x+x1,y-y1,RED);
		putpixel(x-x1,y-y1,RED);
		putpixel(x-x1,y+y1,RED);*/
	//getchar();
}
