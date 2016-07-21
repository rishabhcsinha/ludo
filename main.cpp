#include<bits/stdc++.h>
#include<iostream>
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<time.h>
#include<dos.h>
#include<process.h>

void box(int ,int,int);
void home(int,int);
void triangle(int, int,int,int);
void pieces(int, int, int);

int cr=0, cb=0, cy=0,cg=0;


int dice()
{
 randomize();
 char ch[2];
 int p[8];
     p[0]=630;
     p[1]=480;
     p[2]=630;
     p[3]=250;
     p[4]=480;
     p[5]=250;
     p[6]=480;
     p[7]=480;

 setcolor(BLACK);
 setfillstyle(SOLID_FILL,BLACK);
 fillpoly(4,p);
 setcolor(WHITE);
 settextstyle(DEFAULT_FONT,0,1);
 outtextxy(481,310,"PRESS Y TO PROCEED");
 outtextxy(481,320,"OTHERWISE PRESS N");
 ch[0]=getch();
 settextstyle(DEFAULT_FONT,0,2);
 outtextxy(490,340,ch);
 randomize();
 int d;
 int q[]={560,460,560,400,500,400,500,460};

 setfillstyle(SOLID_FILL,9);
 fillpoly(4,q);
 settextstyle(DEFAULT_FONT,0,5);
 if(ch[0]=='y'|| ch[0]=='Y')
  {
   d=(rand()%6)+1;

     outtextxy(510,410,"1");
     delay(500);
      fillpoly(4,q);
     outtextxy(510,410,"2");
     delay(500);
      fillpoly(4,q);
     outtextxy(510,410,"3");
     delay(500);
      fillpoly(4,q);
     outtextxy(510,410,"4");
     delay(500);
      fillpoly(4,q);
     outtextxy(510,410,"5");
     delay(500);
      fillpoly(4,q);
     outtextxy(510,410,"6");
     delay(500);
      fillpoly(4,q);

   ch[0]=48+d;
   outtextxy(510,410,ch);
   delay(5000);
  }

else
  exit(0);
 setcolor(BLACK);
 setfillstyle(SOLID_FILL, BLACK);
 fillpoly(4,p);
 setcolor(BLACK);

 return(d);

}

void movegreen(int p[],int d=0)
{

  int x=205,y= 415;

  setcolor(WHITE);
  setfillstyle(SOLID_FILL,WHITE);
  fillellipse(p[0],p[1],11,11);

  p[2]=p[2]+d;

  if (p[2]==0)
  {
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    fillellipse(p[0],p[1],11,11);

    p[0]=x;
    p[1]=y;
  }

  else if(p[2]<=4)
  {
  p[0]=x;
  p[1]=y-(p[2]*30);
  }

  else if (p[2]>4 && p[2]<=10)
  {
  p[0]=x-(p[2]-4)*30;
  p[1]=y-5*30;
  }

  else if(p[2]==11)
  {
  p[0]=25;
  p[1]=235;
  }

  else if(p[2]>=12 && p[2]<=17)
  {
  p[0]=25+(p[2]-12)*30;
  p[1]=y-7*30;
  }

  else if(p[2]>=18 && p[2]<=23)
  {
  p[0]=x;
  p[1]=y-7*30-(p[2]-17)*30;
  }

  else if(p[2]==24)
  {
  p[0]=x+30;
  p[1]=25;
  }

  else if(p[2]>=25 && p[2]<=30)
  {
  p[0]=x+2*30;
  p[1]=25+(p[2]-25)*30;
  }

  else if (p[2]>=31 && p[2]<=36)
  {
  p[0]=x+2*30+(p[2]-30)*30;
  p[1]=y-7*30;
  }

  else if(p[2]==37)
  {
  p[0]=460-15;
  p[1]=235;
  }

  else if(p[2]>=38 && p[2]<=43)
  {
  p[0]=460-15-(p[2]-38)*30;
  p[1]=y-5*30;
  }

  else if(p[2]>=44 && p[2]<=49)
  {
  p[0]=x+2*30;
  p[1]=y-5*30+(p[2]-43)*30;
  }

  else
  {
  p[0]=x+30;
 // p[1]=finalgreen(p);
  }
  setcolor(GREEN);
  setfillstyle(SOLID_FILL,GREEN);
  fillellipse(x,y,11,11);

  moveto(p[0],p[1]);

  setcolor(BLACK);
  pieces(p[0],p[1],2);

}



void moveyellow(int p[],int d=0)
{

  int x=415,y=265;

  setcolor(WHITE);
  setfillstyle(SOLID_FILL,WHITE);
  fillellipse(p[0],p[1],11,11);

  p[2]=p[2]+d;

  if (p[2]==0)
  {
    setcolor(14);
    setfillstyle(SOLID_FILL,14);
    fillellipse(p[0],p[1],11,11);


    p[0]=x;
    p[1]=y;
  }

  else if(p[2]<=4)
  {
  p[0]=x-(p[2]*30);
  p[1]=y;
  }

  else if (p[2]>4 && p[2]<=10)
  {
  p[0]=x-5*30;
  p[1]=y+(p[2]-4)*30;
  }

  else if(p[2]==11)
  {
  p[0]=235;
  p[1]=460-15;
  }

  else if(p[2]>=12 && p[2]<=17)
  {
  p[0]=x-7*30;
  p[1]=460-15-(p[2]-12)*30;
  }

  else if(p[2]>=18 && p[2]<=23)
  {
  p[0]=x-7*30-(p[2]-17)*30;
  p[1]=y;
  }

  else if(p[2]==24)
  {
  p[0]=25;
  p[1]=235;
  }

  else if(p[2]>=25 && p[2]<=30)
  {
  p[0]=25+(p[2]-25)*30;
  p[1]=y-2*30;
  }

  else if (p[2]>=31 && p[2]<=36)
  {
  p[0]=x-7*30;
  p[1]=y-2*30-(p[2]-30)*30;
  }

  else if(p[2]==37)
  {
  p[0]=235;
  p[1]=25;
  }

  else if(p[2]>=38 && p[2]<=43)
  {
  p[0]=x-5*30;
  p[1]=25+(p[2]-38)*30;
  }

  else if(p[2]>=44 && p[2]<=49)
  {
  p[0]=x-5*30+(p[2]-43)*30;
  p[1]=y-2*30;
  }

  else
  {
  //p[0]=finalyellow(p);
  p[1]=y-30;
  }
  setcolor(YELLOW);
  setfillstyle(SOLID_FILL,YELLOW);
  fillellipse(x,y,11,11);

  moveto(p[0],p[1]);

  setcolor(BLACK);
  pieces(p[0],p[1],14);

}



void moveblue(int p[],int d=0)
{

  int x=265,y= 55;

  setcolor(WHITE);
  setfillstyle(SOLID_FILL,WHITE);
  fillellipse(p[0],p[1],11,11);

  p[2]=p[2]+d;

  if (p[2]==0)
  {
    setcolor(1);
    setfillstyle(SOLID_FILL,1);
    fillellipse(p[0],p[1],11,11);

    p[0]=x;
    p[1]=y;
  }

  else if(p[2]<=4)
  {
  p[0]=x;
  p[1]=y+(p[2]*30);
  }

  else if (p[2]>4 && p[2]<=10)
  {
  p[0]=x+(p[2]-4)*30;
  p[1]=y+5*30;
  }

  else if(p[2]==11)
  {
  p[0]=460-15;
  p[1]=235;
  }

  else if(p[2]>=12 && p[2]<=17)
  {
  p[0]=460-15-(p[2]-12)*30;
  p[1]=y+7*30;
  }

  else if(p[2]>=18 && p[2]<=23)
  {
  p[0]=x;
  p[1]=y+7*30+(p[2]-17)*30;
  }

  else if(p[2]==24)
  {
  p[0]=235;
  p[1]=460-15;
  }

  else if(p[2]>=25 && p[2]<=30)
  {
  p[0]=x-2*30;
  p[1]=460-15-(p[2]-25)*30;
  }

  else if (p[2]>=31 && p[2]<=36)
  {
  p[0]=x-2*30-(p[2]-30)*30;
  p[1]=y+7*30;
  }

  else if(p[2]==37)
  {
  p[0]=25;
  p[1]=235;
  }

  else if(p[2]>=38 && p[2]<=43)
  {
  p[0]=25+(p[2]-38)*30;
  p[1]=y+5*30;
  }

  else if(p[2]>=44 && p[2]<=49)
  {
  p[0]=x-2*30;
  p[1]=y+5*30-(p[2]-43)*30;
  }

  else
  {
  p[0]=x-30;
  //p[1]=finalblue(p);
  }
  setcolor(BLUE);
  setfillstyle(SOLID_FILL,BLUE);
  fillellipse(x,y,11,11);

  moveto(p[0],p[1]);

  setcolor(BLACK);
  pieces(p[0],p[1],1);

}





void movered(int p[],int d=0)
{

  int x=55,y=205;

  setcolor(WHITE);
  setfillstyle(SOLID_FILL,WHITE);
  fillellipse(p[0],p[1],11,11);

  p[2]=p[2]+d;

  if (p[2]==0)
  {
    setcolor(4);
    setfillstyle(SOLID_FILL,4);
    fillellipse(p[0],p[1],11,11);


    p[0]=x;
    p[1]=y;
  }

  else if(p[2]<=4)
  {
  p[0]=x+(p[2]*30);
  p[1]=y;
  }

  else if (p[2]>4 && p[2]<=10)
  {
  p[0]=x+5*30;
  p[1]=y-(p[2]-4)*30;
  }

  else if(p[2]==11)
  {
  p[0]=235;
  p[1]=25;
  }

  else if(p[2]>=12 && p[2]<=17)
  {
  p[0]=x+7*30;
  p[1]=25+(p[2]-12)*30;
  }

  else if(p[2]>=18 && p[2]<=23)
  {
  p[0]=x+7*30+(p[2]-17)*30;
  p[1]=y;
  }

  else if(p[2]==24)
  {
  p[0]=460-15;
  p[1]=235;
  }

  else if(p[2]>=25 && p[2]<=30)
  {
  p[0]=460-15-(p[2]-25)*30;
  p[1]=y+2*30;
  }

  else if (p[2]>=31 && p[2]<=36)
  {
  p[0]=x+7*30;
  p[1]=y+2*30+(p[2]-30)*30;
  }

  else if(p[2]==37)
  {
  p[0]=235;
  p[1]=460-15;
  }

  else if(p[2]>=38 && p[2]<=43)
  {
  p[0]=x+5*30;
  p[1]=460-15-(p[2]-38)*30;
  }

  else if(p[2]>=44 && p[2]<=49)
  {
  p[0]=x+5*30-(p[2]-43)*30;
  p[1]=y+2*30;
  }


  else
  {
  //p[0]=finalred(p);
  p[1]=235;
  }
  setcolor(RED);
  setfillstyle(SOLID_FILL,RED);
  fillellipse(x,y,11,11);

  moveto(p[0],p[1]);

  setcolor(BLACK);
  pieces(p[0],p[1],4);

}


void redchance(int r1[], int r2[], int r3[], int r4[])
{setcolor(RED);
 settextstyle(DEFAULT_FONT,0,2);
 outtextxy(530,30,"RED");

 int d=dice();
 setcolor(WHITE);
 settextstyle(DEFAULT_FONT,0,1);
 switch(cr)
{int x; char z[2];

 case 0:
 if(d==6)
 { cr++;
   movered(r1);
   redchance(r1,r2,r3,r4);
 }

 else
  {outtextxy(480,60,"TRY TO GET 6");

  }

 break;

case 1:
 if(d==6)
 {
 outtextxy(480,60,"  0 TO TAKE OUT 2nd LUDO");
 outtextxy(480,80,"  1 TO MOVE 1st LUDO");
 z[0]=getch(); x=(int)z[0]-48;// outtextxy(500,160,z);

   if(x==0)
   { cr++;
     movered(r2);
     redchance(r1,r2,r3,r4);
   }
   else
    movered(r1,d);
 }

else
 movered(r1,d);

 break;


case 2:
 outtextxy(480,60,"  0 TO TAKE OUT 3rd LUDO");
 outtextxy(480,80,"  1 TO MOVE 1st LUDO");
 outtextxy(480,100,"  2 TO MOVE 2nd LUDO");
 z[0]=getch(); x=(int)z[0]-48;// outtextxy(500,160,z);

 if(x==0 && d==6)
   { cr++;
     movered(r3);
     redchance(r1,r2,r3,r4);
   }

 else if(x==1)
   movered(r1,d);

 else
   movered(r2,d);

 break;


case 3:
 outtextxy(480,60,"  0 TO TAKE OUT 3rd LUDO");
 outtextxy(480,80,"  1 TO MOVE 1st LUDO");
 outtextxy(480,100,"  2 TO MOVE 2nd LUDO");
 outtextxy(480,120,"  3 TO MOVE 3rd LUDO");
 z[0]=getch(); x=(int)z[0]-48;// outtextxy(500,160,z);

 if(x==0 && d==6)
   { cr++;
     movered(r4);
     redchance(r1,r2,r3,r4);
   }

 else if(x==1)
   movered(r1,d);

 else if(x==2)
   movered(r2,d);

 else
   movered(r3,d);

 break;


case 4:
 outtextxy(480,60,"  1 TO MOVE 1st LUDO");
 outtextxy(480,80,"  2 TO MOVE 2nd LUDO");
 outtextxy(480,100,"  3 TO MOVE 3rd LUDO");
 outtextxy(480,120,"  4 TO MOVE 4th LUDO");
 z[0]=getch(); x=(int)z[0]-48;// outtextxy(500,160,z);

 if (x==1)
   movered(r1,d);

 else if(x==2)
   movered(r2,d);

 else if(x==3)
   movered(r3,d);

 else
   movered(r4,d);

 break;

case 8:

 outtextxy(480,60,"RED WINS");
 delay(500);
 exit(0);

default:
 outtextxy(480,60,"GET 6 NEXT TIME");
}
delay(5000);

setcolor(BLACK);
int poly[]={639,479,639,10,479,10,479,479};
setfillstyle(SOLID_FILL,BLACK);
fillpoly(4,poly);
setcolor(BLACK);
}



void bluechance(int b1[], int b2[],int b3[], int b4[])
{setcolor(BLUE);
 settextstyle(DEFAULT_FONT,0,2);
 outtextxy(510,30,"BLUE");

 int d=dice();
 setcolor(WHITE);
 settextstyle(DEFAULT_FONT,0,1);
 switch(cb)
{int x; char z[2];

 case 0:
 if(d==6)
 { cb++;
   moveblue(b1);
   bluechance(b1,b2,b3,b4);
 }

 else
  {outtextxy(480,60,"TRY TO GET 6");

  }
 break;

case 1:
 if(d==6)
 {
 outtextxy(480,60,"  0 TO TAKE OUT 2nd LUDO");
 outtextxy(480,80,"  1 TO MOVE 1st LUDO");
 z[0]=getch(); x=(int)z[0]-48;// outtextxy(500,160,z);

   if(x==0)
   { cb++;
     moveblue(b2);
     bluechance(b1,b2,b3,b4);
   }
   else
    moveblue(b1,d);
 }

else
 moveblue(b1,d);

 break;


case 2:
 outtextxy(480,60,"  0 TO TAKE OUT 3rd LUDO");
 outtextxy(480,80,"  1 TO MOVE 1st LUDO");
 outtextxy(480,100,"  2 TO MOVE 2nd LUDO");
 z[0]=getch(); x=(int)z[0]-48;// outtextxy(500,160,z);

 if(x==0 && d==6)
   { cb++;
     moveblue(b3);
     bluechance(b1,b2,b3,b4);
   }

 else if(x==1)
   moveblue(b1,d);

 else
   moveblue(b2,d);

 break;


case 3:
 outtextxy(480,60,"  0 TO TAKE OUT 3rd LUDO");
 outtextxy(480,80,"  1 TO MOVE 1st LUDO");
 outtextxy(480,100,"  2 TO MOVE 2nd LUDO");
 outtextxy(480,120,"  3 TO MOVE 3rd LUDO");
 z[0]=getch(); x=(int)z[0]-48;// outtextxy(500,160,z);

 if(x==0 && d==6)
   { cb++;
     moveblue(b4);
     bluechance(b1,b2,b3,b4);
   }

 else if(x==1)
   moveblue(b1,d);

 else if(x==2)
   moveblue(b2,d);

 else
   moveblue(b3,d);

 break;


case 4:
 outtextxy(480,60,"  1 TO MOVE 1st LUDO");
 outtextxy(480,80,"  2 TO MOVE 2nd LUDO");
 outtextxy(480,100,"  3 TO MOVE 3rd LUDO");
 outtextxy(480,120,"  4 TO MOVE 4th LUDO");
 z[0]=getch(); x=(int)z[0]-48;// outtextxy(500,160,z);

 if(x==1)
   moveblue(b1,d);

 else if(x==2)
   moveblue(b2,d);

 else if(x==3)
   moveblue(b3,d);

 else
   moveblue(b4,d);

 break;

case 8:

 outtextxy(480,60,"BLUE WINS");
 delay(500);
 exit(0);

default:
 outtextxy(480,60,"GET 6 NEXT TIME");
}
delay(5000);

setcolor(BLACK);
int poly[]={639,479,639,10,479,10,479,479};
setfillstyle(SOLID_FILL,BLACK);
fillpoly(4,poly);
setcolor(BLACK);
}



void greenchance(int g1[], int g2[], int g3[], int g4[])
{setcolor(GREEN);
 settextstyle(DEFAULT_FONT,0,2);
 outtextxy(495,30,"GREEN");

 int d=dice();
 setcolor(WHITE);
 settextstyle(DEFAULT_FONT,0,1);
 switch(cg)
{int x; char z[2];

 case 0:
 if(d==6)
 { cg++;
   movegreen(g1);
   greenchance(g1,g2,g3,g4);
 }

 else
  {outtextxy(480,60,"TRY TO GET 6");

  }

 break;

case 1:
 if(d==6)
 {
 outtextxy(480,60,"  0 TO TAKE OUT 2nd LUDO");
 outtextxy(480,80,"  1 TO MOVE 1st LUDO");
 z[0]=getch(); x=(int)z[0]-48;// outtextxy(500,160,z);

   if(x==0)
   { cr++;
     movegreen(g2);
     greenchance(g1,g2,g3,g4);
   }
   else
    movegreen(g1,d);
 }

else
 movegreen(g1,d);

 break;


case 2:
 outtextxy(480,60,"  0 TO TAKE OUT 3rd LUDO");
 outtextxy(480,80,"  1 TO MOVE 1st LUDO");
 outtextxy(480,100,"  2 TO MOVE 2nd LUDO");
 z[0]=getch(); x=(int)z[0]-48;// outtextxy(500,160,z);

 if(x==0 && d==6)
   { cg++;
     movegreen(g3);
     greenchance(g1,g2,g3,g4);
   }

 else if(x==1)
   movegreen(g1,d);

 else
   movegreen(g2,d);

 break;


case 3:
 outtextxy(480,60,"  0 TO TAKE OUT 3rd LUDO");
 outtextxy(480,80,"  1 TO MOVE 1st LUDO");
 outtextxy(480,100,"  2 TO MOVE 2nd LUDO");
 outtextxy(480,120,"  3 TO MOVE 3rd LUDO");
 z[0]=getch(); x=(int)z[0]-48;// outtextxy(500,160,z);

 if(x==0 && d==6)
   { cg++;
     movegreen(g4);
     greenchance(g1,g2,g3,g4);
   }

 else if(x==1)
   movegreen(g1,d);

 else if(x==2)
   movegreen(g2,d);

 else
   movegreen(g3,d);

 break;


case 4:
 outtextxy(480,60,"  1 TO MOVE 1st LUDO");
 outtextxy(480,80,"  2 TO MOVE 2nd LUDO");
 outtextxy(480,100,"  3 TO MOVE 3rd LUDO");
 outtextxy(480,120,"  4 TO MOVE 4th LUDO");
 z[0]=getch(); x=(int)z[0]-48;// outtextxy(500,160,z);

 if(x==1)
   movegreen(g1,d);

 else if(x==2)
   movegreen(g2,d);

 else if(x==3)
   movegreen(g3,d);

 else
   movegreen(g4,d);

 break;

case 8:

 outtextxy(480,60,"GREEN WINS");
 delay(500);
 exit(0);

default:
 outtextxy(480,60,"GET 6 NEXT TIME");
 delay(5000);

}
delay(5000);

setcolor(BLACK);
int poly[]={639,479,639,10,479,10,479,479};
setfillstyle(SOLID_FILL,BLACK);
fillpoly(4,poly);
setcolor(BLACK);
}



void yellowchance(int y1[],int y2[], int y3[], int y4[])
{setcolor(YELLOW);
 settextstyle(DEFAULT_FONT,0,2);
 outtextxy(485,30,"YELLOW");

 int d=dice();
 setcolor(WHITE);
 settextstyle(DEFAULT_FONT,0,1);
 switch(cy)
{int x; char z[2];

 case 0:
 if(d==6)
 { cy++;
   moveyellow(y1);
   yellowchance(y1,y2,y3,y4);
 }

 else
  {outtextxy(480,60,"TRY TO GET 6");

  }

 break;

case 1:
 if(d==6)
 {
 outtextxy(480,60,"0 TO TAKE OUT 2nd LUDO");
 outtextxy(480,80,"1 TO MOVE 1st LUDO");
 z[0]=getch(); x=(int)z[0]-48;// outtextxy(500,160,z);

   if(x==0)
   { cy++;
     moveyellow(y2);
     yellowchance(y1,y2,y3,y4);
   }
   else
    moveyellow(y1,d);
 }

else
 moveyellow(y1,d);

 break;


case 2:
 outtextxy(480,60,"  0 TO TAKE OUT 3rd LUDO");
 outtextxy(480,80,"  1 TO MOVE 1st LUDO");
 outtextxy(480,100,"  2 TO MOVE 2nd LUDO");
 z[0]=getch(); x=(int)z[0]-48;// outtextxy(500,160,z);

 if(x==0 && d==6)
   { cy++;
     moveyellow(y3);
     yellowchance(y1,y2,y3,y4);
   }

 else if(x==1)
   moveyellow(y1,d);

 else
   moveyellow(y2,d);

 break;


case 3:
 outtextxy(480,60,"  0 TO TAKE OUT 3rd LUDO");
 outtextxy(480,80,"  1 TO MOVE 1st LUDO");
 outtextxy(480,100,"  2 TO MOVE 2nd LUDO");
 outtextxy(480,120,"  3 TO MOVE 3rd LUDO");
 z[0]=getch(); x=(int)z[0]-48;// outtextxy(500,160,z);

 if(x==0 && d==6)
   { cy++;
     moveyellow(y4);
     yellowchance(y1,y2,y3,y4);
   }

 else if(x==1)
   moveyellow(y1,d);

 else if(x==2)
   moveyellow(y2,d);

 else
   moveyellow(y3,d);

 break;


case 4:
 outtextxy(480,60,"  1 TO MOVE 1st LUDO");
 outtextxy(480,80,"  2 TO MOVE 2nd LUDO");
 outtextxy(480,100,"  3 TO MOVE 3rd LUDO");
 outtextxy(480,120,"  4 TO MOVE 4th LUDO");
 z[0]=getch(); x=(int)z[0]-48;// outtextxy(500,160,z);

 if(x==1)
   moveyellow(y1,d);

 else if(x==2)
   moveyellow(y2,d);

 else if(x==3)
   moveyellow(y3,d);

 else
   moveyellow(y4,d);

 break;

case 8:

 outtextxy(480,60,"YELLOW WINS");
 delay(500);
 exit(0);

default:
 outtextxy(480,60,"GET 6 NEXT TIME");
}
delay(5000);

setcolor(BLACK);
int poly[]={639,479,639,10,479,10,479,479};
setfillstyle(SOLID_FILL,BLACK);
fillpoly(4,poly);
setcolor(BLACK);
}



void chance()
{
 int r1[]= {190-60,190-60,0};
 int r2[]= {190-60,190-120,0};
 int r3[]= {190-120,190-60,0};
 int r4[]= {190-120,190-120,0};

 int b1[]= {460-60,190-60,0};
 int b2[]= {460-120,190-60,0};
 int b3[]= {460-60,190-120,0};
 int b4[]= {460-120,190-120,0};

 int g1[]= {190-60,460-60,0};
 int g2[]= {190-120,460-60,0};
 int g3[]= {190-60,460-120,0};
 int g4[]= {190-120,460-120,0};

 int y1[]= {460-60,460-60,0};
 int y2[]= {460-120,460-60,0};
 int y3[]= {460-60,460-120,0};
 int y4[]= {460-120,460-120,0};

 pieces(r1[0],r1[1],4);
 pieces(r2[0],r2[1],4);
 pieces(r3[0],r3[1],4);
 pieces(r4[0],r4[1],4);

 pieces(b1[0],b1[1],1);
 pieces(b2[0],b2[1],1);
 pieces(b3[0],b3[1],1);
 pieces(b4[0],b4[1],1);

 pieces(y1[0],y1[1],14);
 pieces(y2[0],y2[1],14);
 pieces(y3[0],y3[1],14);
 pieces(y4[0],y4[1],14);

 pieces(g1[0],g1[1],2);
 pieces(g2[0],g2[1],2);
 pieces(g3[0],g3[1],2);
 pieces(g4[0],g4[1],2);




 while(1)
{
  for(int i=1;i<=4;i++)
  {
    switch(i)
    {
     case 1: redchance(r1,r2,r3,r4);
	     break;

     case 2: bluechance(b1,b2,b3,b4);
	     break;

     case 3: yellowchance(y1,y2,y3,y4);
	     break;

     case 4: greenchance(g1,g2,g3,g4);
	     break;

    }
  }
}

}



void pieces(int x,int y,int col)
{  setcolor(BLACK);
   setfillstyle(SOLID_FILL,col);
   fillellipse(x,y,10,10);
   circle(x,y,5);
   circle(x,y,7);
}


void hexagon(int a,int b,int c,int d,int e,int f,int g,int h,int i,int j,int k,
	     int l,int col)
{
   int p[12];
     p[0]=a;
     p[1]=b ;
     p[2]=c;
     p[3]=d;
     p[4]=e;
     p[5]=f;
     p[6]=g;
     p[7]=h;
     p[8]=i;
     p[9]=j;
     p[10]=k;
     p[11]=l;
 setfillstyle(SOLID_FILL,col);
 fillpoly(6,p);
}

void board()//to create board
{ setcolor(WHITE);
  rectangle(5,5,465,465);

  int pol[8];

  pol[0] = 460;        /* 1st vertex */
  pol[1] = 460;

  pol[2] = 10;
  pol[3] = 460;

  pol[4] = 10;
  pol[5] = 10;

  pol[6] =460;
  pol[7] = 10;



    setfillstyle(SOLID_FILL,WHITE);
    fillpoly(4,pol);

    hexagon(190,250,190,220,70,220,70,190,40,190,40,250,4);
    hexagon(250,430,250,280,220,280,220,400,190,400,190,430,2);
    hexagon(280,40,220,40,220,190,250,190,250,70,280,70,1);
    hexagon(430,280,430,220,280,220,280,250,400,250,400,280,14);

    for(int i=10;i<=460;i+=30)
     {
      setcolor(BLACK);
      line(i,10,i,460);
      line(10,i,460,i);
     }

    setcolor(WHITE);
   box(190,190,4);
   box(460,190,1);
   box(190,460,2);
   box(460,460,14);

   home(280,280);

}

void box(int x,int y,int a)//to create boxes of each houses
{
  int p[8];
  p[0]=x;
  p[1]=y;

  p[2]=x-180;
  p[3]=y;

  p[4]=x-180;
  p[5]=y-180;

  p[6]=x;
  p[7]=y-180;

   setfillstyle(SOLID_FILL,BLACK);
   fillpoly(4,p);



    setfillstyle(SOLID_FILL,a);
     fillellipse(x-60,y-60,20,20);
     fillellipse(x-120,y-60,20,20);
     fillellipse(x-120,y-120,20,20);
     fillellipse(x-60,y-120,20,20);


}

void home(int x,int y)//to create home
{
  int p[8];
  p[0]=x;
  p[1]=y;

  p[2]=x-90;
  p[3]=y;

  p[4]=x-90;
  p[5]=y-90;

  p[6]=x;
  p[7]=y-90;

   setfillstyle(SOLID_FILL,BLACK);
   fillpoly(4,p);
   line(p[0],p[1],p[4],p[5]);
   line(p[2],p[2],p[6],p[7]);
   setfillstyle(SOLID_FILL,YELLOW);
     triangle(p[0],p[1],p[6],p[7]);

   setfillstyle(SOLID_FILL, BLUE);
     triangle(p[6],p[7],p[4],p[5]);

   setfillstyle(SOLID_FILL, RED);
     triangle(p[4],p[5],p[2],p[3]);

   setfillstyle(SOLID_FILL, GREEN);
     triangle(p[2],p[3],p[0],p[1]);

   setcolor(BLACK);
    settextstyle(DEFAULT_FONT,0,2);
    outtextxy(205,228,"HOME");
}

void triangle(int x1,int y1,int x2, int y2)//to create triangle of home
{
  int m[6];

   m[0]=x1;
   m[1]=y1;
   m[2]=x2;
   m[3]=y2;
   m[4]=235;//coordinates of centre of board
   m[5]=235;

  fillpoly(3,m);
}


void welcome()
{ delay(1400);
  settextstyle(7,0,1);
  setcolor(YELLOW);
    outtextxy(260,310,"MADE BY:");
    outtextxy(120,380,"RISHABH SINHA  and  PRANAY KATHURIA");
  for(int j=1;j<=20;j++)
   { if(j==16)
      { j++;
      }
     setcolor(j);
      settextstyle(7,0,8);
      outtextxy(50,55,"CLASSIC");

      outtextxy(88,131,"U");
      outtextxy(70,205,"D");
      outtextxy(66,275,"O");
       delay(140);

      setcolor(BLACK);
      outtextxy(100,80,"CLASSIC");

      outtextxy(138,156,"U");
      outtextxy(120,230,"D");
      outtextxy(116,300,"O");
      setcolor(WHITE);
   }

}



void main()
{
   clrscr();
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;



   /* initialize graphics, local variables */
   initgraph(&gdriver, &gmode, "c:\\tc\\bgi");

   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)
   /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
      /* terminate with an error code */
   }
       welcome();//first display screen
       getch();
       setcolor(BLACK);
       int r[]={639,479,639,0,0,0,0,479};//coordinates of board
       setfillstyle(SOLID_FILL,BLACK);
       fillpoly(4,r);

       board();

       chance();

       getch();
       /* clean up */
       closegraph();
}
