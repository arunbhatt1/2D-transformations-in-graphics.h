#include <graphics.h>
#include <conio.h>
#include<iostream>
using namespace std;
int main() {
    int gd = DETECT, gm;
    int x1,y1,x2,y2,tx,ty,i,j,k;
    int l[3][2],t[3][3],r[3][2];
    initgraph(&gd, &gm, ""); 
	cout<<"Enter values:";
	cin>>x1>>y1>>x2>>y2>>tx>>ty;
	l[0][0]=x1;l[1][0]=y1;l[2][0]=1;
	l[0][1]=x2;l[1][1]=y2;l[2][1]=1;
    t[0][0]=1;t[0][1]=0;t[0][2]=tx;
    t[1][0]=0;t[1][1]=1;t[1][2]=ty;
    t[2][0]=0;t[2][1]=0;t[2][2]=1;
    for(i=0;i<3;i++){
    	for(j=0;j<2;j++){
    		r[i][j]=0;
    		for(k=0;k<3;k++){
    			r[i][j]+=t[i][k]*l[k][j];
			}
		}
	}
	setbkcolor(WHITE);
	setcolor(BLUE);
	line(x1,y1,x2,y2);
	setcolor(RED);
	line(r[0][0],r[1][0],r[0][1],r[1][1]);
    getch();
    closegraph();
    return 0;
}
