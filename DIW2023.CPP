//________ WELCOME ALL OF YOU ON COMPUTER SOFT SKILLS CHANNEL _____________//
//----------------- C++ PROGRAM TO WISH HAPPY DIWALI -------------------//

#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<graphics.h>

void shoot();
void shootagain();
void area();
void explode(int,int,int);
void main()
{

int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");

shoot();
getch();
closegraph();
}

void shoot()
{
int i=0;
int x=0,y=480,x1=15,y1=460;
while(i<350)
{
area();
line(x+i,y-i,x1+i,y1-i);
delay(50);
i=i+10;
cleardevice();
}
explode(x+350,y-350,5);
shootagain();
}
void shootagain()
{
int i=0;
int x=600,y=480,x1=585,y1=460;
while(i<250)
{
setcolor(15);
area();
line(x-i,y-i,x1-i,y1-i);
delay(30);
i=i+10;
cleardevice();
}
explode(x-300,y-300,5);
}

void explode(int x,int y,int r)
{
int k,j,interval=0;
for(k=0;k<2;k++)
{
interval=interval+50;
for(j=0;j<interval;j++)
{
area();
setcolor(BLACK);
setcolor(rand()/15);
// horizontal left and right
circle(x+j,y,r+k);
circle(x-j,y,r+k);
//vertical up and down
circle(x,y+j,r+k);
circle(x,y-j,r+k);
//slighten down
circle(x+j,y+j,r+k);
circle(x-j,y-j,r+k);
//slighten up
circle(x-j,y+j,r+k);
circle(x+j,y-j,r+k);
delay(30);
cleardevice();
}
}
}

void area()
{
//Home Area___________
setcolor(14);
line(0,350,600,350);

rectangle(0,350,100,150);

setcolor(11);
rectangle(40,350,60,300);

setcolor(10);
rectangle(10,170,30,200);
rectangle(70,170,90,200);

setcolor(13);
rectangle(10,230,30,260);
rectangle(70,230,90,260);

//_____________________________
setcolor(11);
rectangle(100,350,180,250);

setcolor(12);
line(100,250,140,180);
line(180,250,140,180);

setcolor(15);
rectangle(110,280,130,300);
rectangle(150,280,170,300);
rectangle(130,350,160,330);

//___________________________
setcolor(13);
rectangle(180,350,350,300);
rectangle(190,310,220,330);
rectangle(340,310,310,330);

setcolor(12);
rectangle(210,290,190,300);
rectangle(230,285,210,300);
rectangle(250,280,230,300);
setcolor(15);
rectangle(270,270,250,300);
rectangle(290,270,270,300);
setcolor(10);
rectangle(310,280,290,300);
rectangle(330,285,310,300);
rectangle(350,290,330,300);

//________________________
setcolor(2);
rectangle(370,350,440,150);
rectangle(385,350,405,300);

setcolor(9);
rectangle(380,170,400,200);
rectangle(410,170,430,200);

setcolor(13);
rectangle(380,230,400,260);
rectangle(410,230,430,260);

//_____________________
setcolor(11);
rectangle(550,350,450,250);

setcolor(15);
line(550,250,510,180);
line(450,250,510,180);

setcolor(14);
rectangle(530,280,500,300);
rectangle(500,280,470,300);
rectangle(490,280,460,300);
rectangle(490,350,460,300);

//_________________________
setcolor(11);
settextstyle(8,0,5);
outtextxy(50,10,"HAPPY DIWALI 2023");

setcolor(13);
settextstyle(7,0,3);
outtextxy(30,60,"MAY YOU GET UNIVERSAL COMPASSION,");

setcolor(10);
settextstyle(7,0,3);
outtextxy(20,90,"HAPPINESS, AND LOVE ON THIS DIWALI");

setcolor(14);
settextstyle(1,0,2);
outtextxy(350,400,"COMPUTER SOFT SKILLS");
}


//____________ I HOPE YOU LIKE THIS PROGRAMMING VIDEO ___________________

//____________ LIKE __________ SHARE __________ SUBSCRIBE __________________

