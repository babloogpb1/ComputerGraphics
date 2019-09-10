//C++ program illustrating bouncing ball.

#include<bits/stdc++.h>
#include<graphics.h>
#include "functions.h"
using namespace std;
void draw(float x,float y,float r)
{
    setcolor(15);
    circle(x,y,r);
    floodfill(x,y,2);
    delay(30);
    setcolor(0);
    circle(x,y,r);
    floodfill(x,y,0); 
    setcolor(15);
    ddaLine(0, 150, 310, 150, WHITE); 
    ddaLine(640, 150, 330, 150, WHITE);            
    ddaLine(0, 300, 310, 150, WHITE);
    ddaLine(640, 300, 330, 150, WHITE);      
}

int main()
{
    int gd=DETECT,gm; 
	initgraph(&gd,&gm,NULL);
    int y=100,z=1;
    int d=150, i=5, a=320, b=150,r=1,p=0,q=0;
    draw(320,150,1);
    //draw(320,150,5);
    for(int o=0;0<20;o++)
    {
     
        while(i<=800)
        {
        
            int c=log2(i),k=2;
             for(int j=1;j<=i&&j<500;j+=i/3)
             {
                if(i%4==0)
                {
                //cleardevice();
                r++;
                if(b+q-j-r<500  )
                draw(a,b+q-j-r,r);
                p=j;
                }
               
             }
         
             k = 0;
             for(int j=1;j<=i&&j<500;j+=i/3) 
             {  
                if(i%4==0)
                {
                //cleardevice();
                r++;
                draw(a,b-p+j-r,r);
                q=j;
                }
             }
             i*=2;  
               //if(i%10==0)
                //z*=2;   
        }
        i=5;
        r=1;
    }
    //cleardevice();
    //cout<<"here ";
	getchar();
}
