//C++ program for dancing man
#include<bits/stdc++.h>
#include<graphics.h>
#include "functions.h"
using namespace std;
int main()
{
    int gd=DETECT,gm; 
	initgraph(&gd,&gm,NULL);
    ddaLine(50, 250, 600, 250, LIGHTGRAY); 
    ddaLine(0, 300, 640, 300, WHITE); 
    ddaLine(50, 250, 0, 280, WHITE); 
    ddaLine(600, 250, 640, 280, WHITE);
    
    
    int start_angle = 0; 
    int end_angle = 360; 
    int x_rad = 60; 
    int y_rad = 15; 
    
    circle(200,160,20);
    circle(200,160,19);
    line(200, 180, 200, 230);
    line(200, 230, 190, 275);
    line(200, 230, 210, 275);
    
    line(200, 200, 210, 220);
    line(200, 200, 190, 220);
    line(210, 220, 195, 232);
    line(190, 220, 205, 232);  
    delay(700);
    
    cleardevice();
    ddaLine(50, 250, 600, 250, LIGHTGRAY); 
    ddaLine(0, 300, 640, 300, WHITE); 
    ddaLine(50, 250, 0, 280, WHITE); 
    ddaLine(600, 250, 640, 280, WHITE);
    circle(200,160,20);
    circle(200,160,19);
    line(200, 180, 200, 230);
    line(200, 230, 190, 275);
    line(200, 230, 210, 275);
    
    line(200, 200, 210, 220);
    line(200, 200, 190, 220);
    line(190, 220, 205, 232);    
    int i = 0,j=0;
    while(i<=35)
    {
        if(i<=25)  
        { 
        setcolor(15);
        line(195+i, 232+j, 210, 220);
        delay(10);
        setcolor(0);
        line(195+i, 232+j, 210, 220);
        i = i+4;
        }
        j=j+1;
        if(i==25)
            j=0;
        if(i>25)    
        {
         setcolor(15);
         line(195+i, 232-j, 210, 220);
         delay(10);
         setcolor(0);
         line(195+i, 232-j, 210, 220);         
         i+=2;
            if(i>35)
            {
                int x,y;
                for(int z=0;z<3;z++)
                {
                    x=y=0;
                    while(x<=20)
                    {
                        setcolor(15);
                        line(195+i-x, 232-j-y, 210, 220);
                        delay(10);
                        setcolor(0);
                        line(195+i-x, 232-j-y, 210, 220);
                        x+=1;
                        if(x<=12)
                        y+=2;
                       
                    }
                    setcolor(15);
                    //line(195+i-x, 232-j-y, 210, 220);
                    int a=195+i-x, b=232-j-y;
                    x=0;
                    y=0;
                    while(x<=5)
                    {
                        setcolor(15);
                        line(195+i+x, 232-j+y, 210, 220);
                        delay(10);
                        setcolor(0);
                        line(195+i+x, 232-j+y, 210, 220);
                        x+=1;
                        //if(x>=12)
                        y+=2;
                   
                   }
                   
                    setcolor(15);
                    line(195+i+x, 232-j+y, 210, 220);
                    ellipse(400, 275, start_angle, end_angle, x_rad, y_rad);
                    floodfill(400,275,WHITE);
                    delay(700); 
                    setcolor(0);
                    //if(z!=2)
                    line(195+i+x, 232-j+y, 210, 220);
                    floodfill(400,275,0);
                    ellipse(400, 275, start_angle, end_angle, x_rad, y_rad); 
                }  
                setcolor(15);
                line(195, 232, 210, 220);                          
            }
         }
        //delay(2);
        //line(200, 200, 190, 220); 
    } 
    setcolor(0);
    circle(200,160,20);
    circle(200,160,19);
    line(200, 180, 200, 230);
    line(200, 230, 190, 275);
    line(200, 230, 210, 275);
    
    line(200, 200, 210, 220);
    line(200, 200, 190, 220);
    line(210, 220, 195, 232);
    line(190, 220, 205, 232);
    setcolor(15);
    ellipse(200, 170, start_angle, end_angle, 7, 20);
    line(200, 190, 200, 230);
    line(200, 230, 196, 276);
    line(200, 230, 204, 274);
    
    line(200, 200, 204, 242);
    line(200, 200, 196, 244);
    delay(20);
    setcolor(0);
    line(200, 190, 200, 230);
    line(200, 200, 204, 242);
    line(200, 230, 204, 274);
    line(200, 200, 196, 244);
    line(200, 230, 196, 276);
    setcolor(15);
    line(200, 190, 196, 230);
    line(200, 200, 205, 220);
    line(205, 220, 196, 230);
    line(196, 230, 209, 252);    //impppp
    line(209, 252, 207, 276);
    line(200, 200, 188, 244);//left hand
    line(198, 230, 202, 252);//right leg changed...
    line(202, 252, 196, 276);//right leg
    i=0;
    int z=0,s;
    for(int q=0;q<3;q++)
    {
        for(z=0;z<4;z++)
        {
            setcolor(15);
            line(200, 190, 196+z, 230);//torso
            line(200, 200, 205+z, 220-z);
            line(205+z, 220-z, 196+z, 230);
            line(196+z, 230, 209+z, 252-z);    //impppp
            line(209+z, 252-z, 207, 276);//left
            line(200, 200, 188, 244);//right hand
            line(198+z, 230, 202, 252);//right leg
            line(202, 252, 196, 276);//right leg
            delay(80);
            setcolor(0);
            line(200, 190, 196+z, 230);
            line(200, 200, 205+z, 220-z);
            line(205+z, 220-z, 196+z, 230);
            line(196+z, 230, 209+z, 252-z);    //impppp
            line(209+z, 252-z, 207, 276);
            line(200, 200, 188, 244);//left hand
            line(198+z, 230, 202, 252);//right leg
            line(202, 252, 196, 276);//right leg
        
        }
        setcolor(15);
            line(200, 190, 196+z, 230);
            line(200, 200, 205+z, 220-z);
            line(205+z, 220-z, 196+z, 230);
            line(196+z, 230, 209+z, 252-z);    //impppp
            line(209+z, 252-z, 207, 276);
            line(200, 200, 188, 244);//left hand
            line(198+z, 230, 202, 252);//right leg
            line(202, 252, 196, 276);//right leg
        delay(300);
         for(s=0;s<4;s++)
        {
            setcolor(15);
            line(200, 190, 196+z-s, 230);
            line(200, 200, 205+z-s, 220-z+s);
            line(205+z-s, 220-z+s, 196+z-s, 230);
            line(196+z-s, 230, 209+z-s, 252-z+s);    //impppp
            line(209+z-s, 252-z+s, 207, 276);
            line(200, 200, 188, 244);//left hand
            line(198+z-s, 230, 202, 252);//right leg
            line(202, 252, 196, 276);//right leg
            delay(80);
            setcolor(0);
            line(200, 190, 196+z-s, 230);   
            line(200, 200, 205+z-s, 220-z+s);
            line(205+z-s, 220-z+s, 196+z-s, 230);
            line(196+z-s, 230, 209+z-s, 252-z+s);    //impppp
            line(209+z-s, 252-z+s, 207, 276);
            line(200, 200, 188, 244);//left hand
            line(198+z-s, 230, 202, 252);//right leg
            line(202, 252, 196, 276);//right leg
        
        }
            setcolor(15);
           /* line(200, 190, 196+z-s, 230);   
            line(200, 200, 205+z-s, 220-z+s);
            line(205+z-s, 220-z+s, 196+z-s, 230);
            line(196+z-s, 230, 209+z-s, 252-z+s);    //impppp
            line(209+z-s, 252-z+s, 207, 276);
            line(200, 200, 188, 244);//left hand
            line(198+z-s, 230, 202, 252);//right leg
            line(202, 252, 196, 276);//right leg*/
            
    }
    line(200, 190, 200, 230);
    line(200, 200, 204, 242);
    line(200, 230, 204, 274);
    line(200, 200, 196, 244);
    line(200, 230, 196, 276);
    //ellipse(200, 200, start_angle, end_angle, x_rad, y_rad);
    //circle(200,200,100);
        //setfillstyle(HATCH_FILL,RED); 
        
    //floodfill(200,200,YELLOW);
    
    getchar();
}
