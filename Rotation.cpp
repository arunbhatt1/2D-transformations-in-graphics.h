#include <graphics.h>
#include <conio.h>
#include<iostream>
#include<cmath>
#define M_PI 3.1415
using namespace std;
int main() {
    int gd = DETECT, gm;
    int x1,y1,x2,y2,i,j,k;
    float angle,radian;
    float ro[2][2],l[2][2],r[2][2];
    initgraph(&gd, &gm, "");
    setbkcolor(WHITE); 
    cleardevice();
    cout<<"Enter x1,y1:";
    cin>>x1>>y1;
    cout<<"Enter x2,y2:";
    cin>>x2>>y2;
    cout<<"Enter angle of rotation (in degrees, anticlockwise):";
    cin>>angle;
    radian= angle*(M_PI/180);
    ro[0][0]=cos(radian);
    ro[0][1]=sin(radian);
    ro[1][0]=-sin(radian);
    ro[1][1]=cos(radian);
    l[0][0]=x1;
    l[1][0]=y1;
    l[0][1]=x2;
    l[1][1]=y2;
    for(i=0;i<2;i++){
    	for(j=0;j<2;j++){
    		r[i][j]=0;
    		for(k=0;k<2;k++){
    			r[i][j]+=ro[i][k]*l[k][j];
			}
		}
	}
	setcolor(BLUE);
	line(x1,y1,x2,y2);
	setcolor(RED);
	line(r[0][0],r[1][0],r[0][1],r[1][1]);
	getch();
    closegraph();
    return 0;
}
