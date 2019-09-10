//C++ program to draw a house

#include<bits/stdc++.h>
#include<graphics.h>
#include "functions.h"
using namespace std;
int main()
{
    int gd=DETECT,gm; 
	initgraph(&gd,&gm,NULL);
    ddaLine(150, 200, 300, 220, WHITE);
    ddaLine(150, 275, 300, 320, WHITE);
    ddaLine(200, 290, 200, 245, WHITE);//door
    ddaLine(175, 283, 175, 238, WHITE);
    ddaLine(175, 238, 200, 245, WHITE); //door bar
    ddaLine(150, 200, 150, 275, WHITE);
    ddaLine(300, 220, 300, 320, WHITE);
    ddaLine(150, 200, 225, 135, WHITE);
    ddaLine(300, 220, 225, 135, WHITE);
    
    ddaLine(425, 135, 225, 135, WHITE);
    ddaLine(300, 220, 480, 200, WHITE);
    ddaLine(425, 135, 480, 200, WHITE);
    ddaLine(300, 320, 480, 275, WHITE);
    ddaLine(480, 200, 480, 275, WHITE);
    
    ddaLine(175, 238, 185, 245, WHITE);
    
    ddaLine(175, 283, 185, 275, WHITE);
    ddaLine(185, 245, 185, 275, WHITE);
    ddaLine(185, 245, 185, 275, WHITE);
    
    ddaLine(370, 245, 420, 235, WHITE);    //window
    ddaLine(370, 245, 370, 270, WHITE);
    ddaLine(370, 270, 420, 260, WHITE);
    ddaLine(420, 235, 420, 260, WHITE);
    ddaLine(420, 260, 410, 255, WHITE);
    ddaLine(370, 263, 410, 255, WHITE);
    
    ddaLine(410, 255, 410, 238, WHITE);    //bars
    ddaLine(411, 255, 411, 238, WHITE);
    
    ddaLine(400, 257, 400, 240, WHITE);
    ddaLine(390, 259, 390, 242, WHITE);
    ddaLine(380, 261, 380, 244, WHITE);
    
    
    ddaLine(240, 240, 240, 270, WHITE);    //windowFront
    ddaLine(265, 244, 265, 278, WHITE);
    ddaLine(240, 240, 265, 244, WHITE);
    ddaLine(265, 278, 240, 270, WHITE);
    
    ddaLine(244, 246, 262, 249, WHITE);
    ddaLine(244, 246, 244, 267, WHITE);
    ddaLine(244, 267, 262, 272, WHITE); 
    ddaLine(262, 249, 262, 272, WHITE); 
    ddaLine(244, 256, 262, 260, WHITE); 
    ddaLine(253, 247, 253, 270, WHITE);
    
    
    
    ddaLine(410, 135, 410, 122, WHITE);   
    ddaLine(400, 135, 400, 121, WHITE);        
    ddaLine(392, 135, 392, 122, WHITE);  
    
    ddaLine(400, 121, 392, 122, WHITE);        
    ddaLine(410, 122, 400, 121, WHITE);                      
    //setfillstyle(STA_FLL,RED);
    //floodfill(300,300,WHITE);
    
    //window1
    //floodfill(370,150,BROWN, WHITE);
    //int a=410-370,b=240,c=370,d=245,a1=;
    
    //ddaLine(175, 238, 200, 240, WHITE);   
   /*ddaLine(150, 200, 350, 220, WHITE);
    ddaLine(150, 300, 350, 320, WHITE);
    ddaLine(200, 306, 200, 240, WHITE);//door
    ddaLine(175, 304, 175, 238, WHITE);
    ddaLine(175, 238, 200, 240, WHITE); //door bar
    ddaLine(150, 200, 150, 300, WHITE);
    ddaLine(350, 220, 350, 320, WHITE);
    
    */
    getchar();
}
