//============================================================================
// Name        : .cpp
// Author      : FAST CS Department
// Version     :
// Copyright   : (c) Reserved
// Description : Basic 2D game of Rush Hour...
//============================================================================

#ifndef RushHour_CPP_
#define RushHour_CPP_
#include "util.h"
#include <iostream>
#include<fstream>
#include<string>
#include<cmath> // for basic math functions such as cos, sin, sqrt
using namespace std;

// seed the random numbers generator by current time (see the documentation of srand for further help)...

/* Function sets canvas size (drawing area) in pixels...
 *  that is what dimensions (x and y) your game will have
 *  Note that the bottom-left coordinate has value (0,0) and top-right coordinate has value (width-1,height-1)
 * */
int pd=0;
int park=0;
int oo=0;
int aa=0;
int bb=0;
int co=0;	
int park2=0,park3=0;
int po=0;

int pd2=0,pd3=0;
int score=0;
void SetCanvasSize(int width, int height) {
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, width, 0, height, -1, 1); // set the screen size to given width and height.
	glMatrixMode (GL_MODELVIEW);
	glLoadIdentity();
}


int xI = 7, yI = 725;

void drawCar() 
{
	DrawSquare(xI, yI, 30, colors[RED]);
	DrawCircle((xI+2),yI,5,colors[BLACK]);
	DrawCircle((xI+23),yI,5,colors[BLACK]);
	glutPostRedisplay();
}
int ispc=0;
int ispc2=0;
int heh=0;
int hoh=0;
int hah=0;

void PrintableKeys(unsigned char key, int x, int y) {
	if (key == 27/* Escape key ASCII*/) {
		exit(1);}
//2 to start

	if (key == 50/* Escape key ASCII*/) {
		 // exit the program when escape key is pressed.
	co++;
	}

	if (key == 32 || key =='b') //Key for placing the bomb
			{
		//do something if b is pressed
		ispc++;
ispc2++;
	}
	glutPostRedisplay();
}
void drawparking(int xl,int yl,int xp,int yp)
{
DrawLine( xl , yl ,  xp , yl , 3 , colors[GREEN] );
DrawLine( xl , yl ,  xl , yp , 3 , colors[GREEN] );
DrawLine( (xl+20) , yl ,  (xl+20) , yp , 3 , colors[GREEN] );
DrawLine( xl , (yl+20) ,  xp , (yl+20) , 3 , colors[GREEN] );

}
	

void drawPassenger(int px,int py,int pz)
{
	DrawCircle(px,py,pz,colors[BLACK]);
	DrawLine((px+2),(py-5),(px+2),(py-20),5,colors[BLACK]);
	DrawLine((px+2),(py-5),(px+15),(py-15),5,colors[BLACK]);
	DrawLine((px+2),(py-5),(px-15),(py-15),5,colors[BLACK]);
		DrawLine((px+2),(py-15),(px+10),(py-30),5,colors[BLACK]);
	DrawLine((px+2),(py-15),(px-15),(py-30),5,colors[BLACK]);

}
void drawPassenger_2(int px,int py,int pz)
{
	DrawCircle(px,py,pz,colors[WHITE]);
	DrawLine((px+2),(py-5),(px+2),(py-20),5,colors[WHITE]);
	DrawLine((px+2),(py-5),(px+15),(py-15),5,colors[WHITE]);
	DrawLine((px+2),(py-5),(px-15),(py-15),5,colors[WHITE]);
		DrawLine((px+2),(py-15),(px+10),(py-30),5,colors[WHITE]);
	DrawLine((px+2),(py-15),(px-15),(py-30),5,colors[WHITE]);

}
int xj=60,yj=60;

void drawrand()
{
	DrawSquare(xj, yj, 20, colors[BLUE]);
	DrawCircle((xj+2),yj,5,colors[BLACK]);
	DrawCircle((xj+15),yj,5,colors[BLACK]);
	glutPostRedisplay();
}
	bool flag=true;
void moveCar() {
	

	if (xj > 0 && flag) {
		xj -= 10;
		cout << "going left";
		if(xj < 100)
			
			flag = false;

	}
	else if (xj < 1010 && !flag) {
		cout << "go right";
		xj += 10;
		if (xj > 800)
			flag = true;
	}
	if(xj==xI)
	{
		xj+=30;
	flag = true;
	}
	if(xj==xI)
{
	xj+=10;
flag = true;
}
}

/*
 * Main Canvas drawing function.
 * */

int start=0;


void GameDisplay()/**/{
if(co==0)
{
		glClearColor(0/*Red Component*/, 0,	//148.0/255/*Green Component*/,
			0.0/*Blue Component*/, 1 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear (GL_COLOR_BUFFER_BIT); //Update the colors
	//DrawSquare( 250 , 250 ,20,colors[GREEN]);
	DrawString( 340, 700, " RUSH HOUR BY RAI TABISH \n ", colors[RED]);
DrawString(350,600,"instruction: pick all the passengers",colors[GREEN]);
		DrawString( 340, 500, " press 2 to start the game  \n ", colors[RED]);
	glutSwapBuffers();
}	

	if(co>0)
	{
	// set the background color using function glClearColor.
	// to change the background play with the red, green and blue values below.
	// Note that r, g and b values must be in the range [0,1] where 0 means dim rid and 1 means pure red and so on.


	glClearColor(1/*Red Component*/, 1,	//148.0/255/*Green Component*/,
			1/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear (GL_COLOR_BUFFER_BIT); //Update the colors
	//Red Square
	//DrawSquare(400, 20, 40, colors[RED]);
	
	//Green Square
	//DrawSquare( 250 , 250 ,20,colors[GREEN]); 
	
	//Display Score
	//DrawString( 10, 800, "Score= ", colors[BLACK]);
	
	// Trianlge Vertices v1(300,50) , v2(500,50) , v3(400,250)
	//DrawTriangle( 300, 450 , 340, 450 , 320 , 490, colors[MISTY_ROSE] ); 
	


	//DrawLine(int x1, int y1, int x2, int y2, int lwidth, float *color)
/*DrawLine( 550 , 50 ,  550 , 480 , 10 , colors[MISTY_ROSE] );	
	
	DrawCircle(50,670,10,colors[RED]);
	DrawCircle(70,670,10,colors[RED]);
	DrawCircle(90,670,10,colors[RED]);
	DrawRoundRect(500,200,50,100,colors[DARK_SEA_GREEN],70);
	DrawRoundRect(100,200,100,50,colors[DARK_OLIVE_GREEN],20);	
	DrawRoundRect(100,100,50,100,colors[DARK_OLIVE_GREEN],30);
	DrawRoundRect(200,100,100,50,colors[LIME_GREEN],40);
	DrawRoundRect(350,100,100,50,colors[LIME_GREEN],20);
	

*/
if(xI<470 && xI>370 && yI>450 && yI<550 && ispc>0)
{
heh++;
park++;
}
if(xI<770 && xI>670 && yI>550 && yI<650 && ispc>4)
{
	hoh++;
park++;
park3++;

}
if(xI<670 && xI>570 && yI>450 && yI<550 && ispc>2)
{
	hah++;
park2++;
park++;
}
//if(heh>0

//{
//DrawSquare(420, 400, 70, colors[RED]);	
//	drawPassenger_2(390,500,5);

//}

//lines on console
DrawLine( 0 , 760 ,  900 , 760 , 2 , colors[BLACK] );
        DrawLine( 0 , 0 ,  0 , 760 , 2 , colors[BLACK] );
	DrawLine( 100 , 0 ,  100 , 760 , 2 , colors[BLACK] );
	DrawLine( 50 , 0 ,  50 , 760 , 2 , colors[BLACK] );
	DrawLine( 200 , 0 ,  200 , 760 , 2 , colors[BLACK] );
	DrawLine( 150 , 0 ,  150 , 760 , 2 , colors[BLACK] );
	DrawLine( 300 , 0 ,  300 , 760 , 2 , colors[BLACK] );
	DrawLine( 250 , 0 ,  250 , 760 , 2 , colors[BLACK] );
	DrawLine( 200 , 0 ,  200 , 760 , 2 , colors[BLACK] );
	DrawLine( 300 , 0 ,  300 , 760 , 2 , colors[BLACK] );
	DrawLine( 350 , 0 ,  350 , 760 , 2 , colors[BLACK] );
	DrawLine( 400 , 0 ,  400 , 760 , 2 , colors[BLACK] );
	DrawLine( 450 , 0 ,  450 , 760 , 2 , colors[BLACK] );
	DrawLine( 500 , 0 ,  500 , 760 , 2 , colors[BLACK] );
	DrawLine( 550 , 0 ,  550 , 760 , 2 , colors[BLACK] );
	DrawLine( 600 , 0 ,  600 , 760 , 2 , colors[BLACK] );
	DrawLine( 650 , 0 ,  650 , 760 , 2 , colors[BLACK] );
	DrawLine( 700 , 0 ,  700 , 760 , 2 , colors[BLACK] );
	DrawLine( 750 , 0 ,  750 , 760 , 2 , colors[BLACK] );
	DrawLine( 800 , 0 ,  800 , 760 , 2 , colors[BLACK] );
	DrawLine( 850 , 0 ,  850 , 760 , 2 , colors[BLACK] );
	DrawLine( 900 , 0 ,  900 , 760 , 2 , colors[BLACK] );

//drawing obstacles

//DrawCircle(130,100,15,colors[RED]);	
DrawSquare(500, 150, 50, colors[BLACK]);//d
DrawLine( 600 , 100 ,  800 , 100 , 10 , colors[BLACK] );//
DrawLine( 500 , 660 ,  800 , 660 , 10, colors[BLACK] );
DrawSquare(100, 600, 50, colors[DARK_TURQUOISE]); //d
//DrawTriangle( 300, 450 , 340, 450 , 320 , 490, colors[GREEN] ); 
DrawTriangle( 550, 660 , 600, 660 , 575 , 700, colors[GREEN] ); 
DrawSquare(10, 10, 40, colors[BLACK]);//d
DrawSquare(60, 200, 40, colors[RED]);//d
DrawSquare(200, 600, 70, colors[DARK_BLUE]);//d
DrawSquare(300, 300, 50, colors[BLACK]);//d
DrawSquare(600, 300, 40, colors[DEEP_PINK]);//d
DrawSquare(450, 300, 30, colors[MEDIUM_VIOLET_RED]);//d
DrawSquare(800, 400, 60, colors[RED]);//d

drawrand();



drawCar();


//if(xI != 420 && yI != 500)
if(hoh==0)
{
drawPassenger(720,600,5);
}
if(hah==0)
{
drawPassenger(620,500,5);
}
if(heh==0)
{
	drawPassenger(420,500,5);
}

if(ispc>1 && xI>50 && xI<110 && yI>50 && yI<110)
{

pd++;
}
if(pd>0)
{
drawPassenger(69,89,5);
glutPostRedisplay();
	oo++;
	po+=10;
	}
	if(park>1 && oo == 0 )
{
	drawparking(69,69,89,89);
}

////

if(ispc>3 && xI>190 && xI<249 && yI>190 && yI<249)
{

pd2++;
}
if(pd2>0)
{
drawPassenger(209,229,5);
glutPostRedisplay();
	aa++;
	po+=10;
	}
	if(park2>0 && aa == 0 )
{
	drawparking(209,209,229,229);
}
//////
if(ispc>5 && xI>490 && xI<549 && yI>490 && yI<549)
{

pd3++;
}
if(pd3>0)
{
drawPassenger(509,529,5);
glutPostRedisplay();
	bb++;
	po+=10;

	}
	if(park3>0 && bb == 0 )
{
	drawparking(509,509,529,529);
}
	


		glutSwapBuffers(); // do not modify this line..
	}
}



/*This function is called (automatically) whenever any non-printable key (such as up-arrow, down-arraw)
 * is pressed from the keyboard
 *
 * You will have to add the necessary code here when the arrow keys are pressed or any other key is pressed...
 *
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 *
 * */

void NonPrintableKeys(int key, int x, int y) {
	if (key== GLUT_KEY_LEFT /*GLUT_KEY_LEFT is constant and contains ASCII for left arrow key*/) {
		// what to do when left key is pressed...
		xI -= 50;
		//border
		if(xI<5 || xI==xj)
		xI+=50;
		//obstacle
		/*
		int xI_obs[100]={270};
		int xI_obs2[100]={200};
		int yI_obsc[100]={570};
		int obsc_yI[100]={670};
		for(int i=0;i<100;i++)
		{
			for(int j=0;j<100;j++)
			{
				for(int k=0;k<100;k++)
				{
					for(int l=0;l<100;l++)
					{
						if(xI<xI_obs[i] && xI>xI_obs2[j] && yI>yI_obsc[k] && yI<obsc_yI[l])
xI+=50;
					}
				}
			}
		}
		*/
//obstacle
if(xI<270 && xI>200 && yI>570 && yI<670)
xI+=50;
po-=2;


if(xI<150 && xI>100 && yI>570 && yI<650)
xI+=50;
po-=2;

if(xI<550 && xI>500 && yI>120 && yI<200)
xI+=50;
po-=2;

if(xI<640 && xI>600 && yI>270 && yI<340)
xI+=50;
po-=2;

if(xI<50 && xI>0 && yI>0 && yI<55)
xI+=50;
po-=2;

if(xI<100 && xI>50 && yI>165 && yI<240)
xI+=50;
po-=2;

if(xI<350 && xI>290 && yI>265 && yI<350)
xI+=50;
po-=2;

if(xI<860 && xI>790 && yI>365 && yI<460)
xI+=50;
po-=2;

if(xI<480 && xI>440 && yI>265 && yI<330)
xI+=50;
po-=2;

if(xI<800 && xI>590 && yI>65 && yI<100)
xI+=50;
po-=2;

if(xI<800 && xI>490 && yI<660 && yI>600)
xI+=50;
po-=2;
	} 

else if (key== GLUT_KEY_RIGHT /*GLUT_KEY_RIGHT is constant and contains ASCII for right arrow key*/) {
		xI += 50;
		if(xI>900 || xI==xj)
		xI-=50;
//osctacle
if(xI<150 && xI>100 && yI>570 && yI<650)
xI-=50;
po-=2;


if(xI<270 && xI>200 && yI>570 && yI<670)
xI-=50;
po-=2;

if(xI<550 && xI>500 && yI>120 && yI<200)
xI-=50;
po-=2;

if(xI<640 && xI>600 && yI>270 && yI<340)
xI-=50;
po-=2;

if(xI<100 && xI>50 && yI>165 && yI<240)
xI-=50;
po-=2;

if(xI<350 && xI>290 && yI>265 && yI<350)
xI-=50;
po-=2;


if(xI<860 && xI>790 && yI>365 && yI<460)
xI-=50;
po-=2;

if(xI<480 && xI>440 && yI>265 && yI<330)
xI-=50;
po-=2;

if(xI<800 && xI>590 && yI>65 && yI<100)
xI-=50;
po-=2;

if(xI<800 && xI>490 &&  yI<660 && yI>600)
xI-=50;
po-=2;
	}
	 else if (key
			== GLUT_KEY_UP/*GLUT_KEY_UP is constant and contains ASCII for up arrow key*/) {
		yI += 10;
		if(yI>725)
		yI-=20;
//obstacle
//if(xI<30 && xI>20 && yI>20 && yI<30)
if(xI<150 && xI>100 && yI>570 && yI<650)
yI-=20;
po-=2;

if(xI<270 && xI>200 && yI>570 && yI<670)
yI-=20;
po-=2;

if(xI<550 && xI>470 && yI>120 && yI<200)
yI-=20;
po-=2;

if(xI<640 && xI>600 && yI>270 && yI<340)
yI-=20;
po-=2;

if(xI<100 && xI>50 && yI>165 && yI<240)
yI-=20;
po-=2;

if(xI<350 && xI>290 && yI>265 && yI<350)
yI-=20;
po-=2;

if(xI<860 && xI>790 && yI>365 && yI<460)
yI-=20;
po-=2;

if(xI<480 && xI>440 && yI>265 && yI<330)
yI-=20;
po-=2;


if(xI<800 && xI>590 && yI>65 && yI<100)
yI-=20;
po-=2;

	if(xI<800 && xI>490 &&  yI<660 && yI>600)
yI-=20;
po-=2;
	}

	else if (key
			== GLUT_KEY_DOWN/*GLUT_KEY_DOWN is constant and contains ASCII for down arrow key*/) {
		yI -= 10;
		if(yI<5)
		yI+=15;
		//obs
	//	if(xI<30 && xI>20 && yI>20 && yI<30)
	if(xI<150 && xI>100 && yI>570 && yI<650)
		yI+=15;
po-=2;

if(xI<270 && xI>200 && yI>570 && yI<670)
yI+=15;
po-=2;

if(xI<550 && xI>470 && yI>120 && yI<200)
yI+=15;
po-=2;

if(xI<640 && xI>600 && yI>270 && yI<340)
yI+=15;
po-=2;

if(xI<50 && xI>0 && yI>0 && yI<55)
yI+=15;
po-=2;

	if(xI<100 && xI>50 && yI>165 && yI<240)
yI+=15;
po-=2;

if(xI<350 && xI>290 && yI>265 && yI<350)
yI+=15;
po-=2;

if(xI<860 && xI>790 && yI>365 && yI<460)
yI+=15;
po-=2;

if(xI<480 && xI>440 && yI>265 && yI<330)
yI+=15;
po-=2;

if(xI<800 && xI>590 && yI>65 && yI<100)
yI+=15;
po-=2;

	if(xI<800 && xI>490 &&  yI<660 && yI>600)
yI+=15;
po-=2;
	}

	/* This function calls the Display function to redo the drawing. Whenever you need to redraw just call
	 * this function*/

	glutPostRedisplay();

}


/*This function is called (automatically) whenever any printable key (such as x,b, enter, etc.)
 * is pressed from the keyboard
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 * */




/*
 * This function is called after every 1000.0/FPS milliseconds
 * (FPS is defined on in the beginning).
 * You can use this function to animate objects and control the
 * speed of different moving objects by varying the constant FPS.
 *
 * */
void Timer(int m) {

	// implement your functionality here
	moveCar();

	// once again we tell the library to call our Timer function after next 1000/FPS
	glutTimerFunc(100, Timer, 0);
}

/*This function is called (automatically) whenever your mouse moves witin inside the game window
 *
 * You will have to add the necessary code here for finding the direction of shooting
 *
 * This function has two arguments: x & y that tells the coordinate of current position of move mouse
 *
 * */
void MousePressedAndMoved(int x, int y) {
	cout << x << " " << y << endl;
	glutPostRedisplay();
}
void MouseMoved(int x, int y) {
	cout << x << " " << y << endl;
	glutPostRedisplay();
}
void menu()
{
	string color;
	string name;
	cout<<"rush hour by rai muhamad tabish "<<endl;
	cout<<"pick all the the passengers and drop them on desired location"<<endl;
	cout<<"enter your name"<<endl;
cin>>name;
cout<<name<<" welcome select the colour of your taxi"<<endl;
cin>>color;

}

/*This function is called (automatically) whenever your mouse button is clicked witin inside the game window
 *
 * You will have to add the necessary code here for shooting, etc.
 *
 * This function has four arguments: button (Left, Middle or Right), state (button is pressed or released),
 * x & y that tells the coordinate of current position of move mouse
 *
 * */
void MouseClicked(int button, int state, int x, int y) {

	if (button == GLUT_LEFT_BUTTON) // dealing only with left button
			{
		cout << GLUT_DOWN << " " << GLUT_UP << endl;

	} else if (button == GLUT_RIGHT_BUTTON) // dealing with right button
			{
			cout<<"Right Button Pressed"<<endl;

	}
	glutPostRedisplay();
}
/*
 * our gateway main function
 * */
int main(int argc, char*argv[]) {

menu();
	int width = 1020, height = 840; // i have set my window size to be 800 x 600

	InitRandomizer(); // seed the random number generator...
	glutInit(&argc, argv); // initialize the graphics library...
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); // we will be using color display mode
	glutInitWindowPosition(50, 50); // set the initial position of our window
	glutInitWindowSize(width, height); // set the size of our window
	glutCreateWindow("Rush Hour  RMTABISH "); // set the title of our game window
	SetCanvasSize(width, height); // set the number of pixels...

	// Register your functions to the library,
	// you are telling the library names of function to call for different tasks.
	//glutDisplayFunc(display); // tell library which function to call for drawing Canvas.

	glutDisplayFunc(GameDisplay); // tell library which function to call for drawing Canvas.
	glutSpecialFunc(NonPrintableKeys); // tell library which function to call for non-printable ASCII characters
	glutKeyboardFunc(PrintableKeys); // tell library which function to call for printable ASCII characters
	// This function tells the library to call our Timer function after 1000.0/FPS milliseconds...
	glutTimerFunc(1000.0, Timer, 0);

	glutMouseFunc(MouseClicked);
	glutPassiveMotionFunc(MouseMoved); // Mouse
	glutMotionFunc(MousePressedAndMoved); // Mouse


ofstream leader_board;
int *p= new int[1];
for(int i=0;i<1;i++)
{
p[i]=po;
}
leader_board.open("scores.txt");
leader_board<<p[0]<<endl;

leader_board.close();

	// now handle the control to library and it will call our registered functions when
	// it deems necessary...
	glutMainLoop();
	return 1;

}
#endif /* RushHour_CPP_ */
