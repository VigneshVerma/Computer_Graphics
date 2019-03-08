#include<graphics.h>
#include<stdio.h>
#include <math.h>

void menu()
{
	rectangle(10,10,625,470);
	outtextxy(10,15,"                         \t   Simulation of a Person   \t");
	line(10,25,625,25);
	outtextxy(10,30,"    Key - Action                   ");
	outtextxy(10,40,"    w - jumps        s - duck        a - move left        d - move right");
	outtextxy(10,50,"    z - Action_1     x - Action_2    c - Give him some rest!");
	line(50,435,585,435);
}

void standmanbyside(int x,int y,int r)
{
	//x is the position of man in x direction and y is in y  and r is the radius of head
	//Shows the man from side
	menu();
	circle(x,y,r);										//head
	circle(x+r/2,y-r/2,2);								//eye
	line(x,y+r,x,y+3*r/2);								//throat
	rectangle(x-r/2,y+3*r/2,x+r/2,y+3*r/2+2*r+20);		//stomach
	line(x,y+3*r/2+r/3,x,y+3*r/2+r*2);					//hand
	line(x,y+3*r/2+2*r+20,x,y+3*r/2+2*r+20+40);			//leg
}
void man_front(int x,int y,int r)
{
	//x is the position of man in x direction and y is in y  and r is the radius of head
	//Shows the front of Man
	menu();
	circle(x,y,r);										//head
	circle(x+r/2,y-r/2,2);								//eye
	circle(x-r/2,y-r/2,2);								//eye
	ellipse(x,y,200,330,r/2,r/2);						//mouth
	line(x,y+r,x,y+3*r/2);								//throat
	rectangle(x-r,y+3*r/2,x+r,y+3*r/2+2*r+20);			//stomach
	line(x-r-2,y+3*r/2+r/3,x-r-2,y+3*r/2+r*2);			//l_hand
	line(x+r+2,y+3*r/2+r/3,x+r+2,y+3*r/2+r*2);			//r_hand
	line(x+5,y+3*r/2+2*r+20,x+5,y+3*r/2+2*r+20+40);		//r_leg
	line(x-5,y+3*r/2+2*r+20,x-5,y+3*r/2+2*r+20+40);		//l_leg
}

void moveright(int *a,int *b,int r)
{
	//Moves to right
	int i=0,x=*a,y=*b,j;
	for(j=0;j<2;j++)
	{	for(i=0;i<10;i++)										// 1st 45 degree
		{
			menu();
			circle(x,y,r);										//head
			circle(x+r/2,y-r/2,2);								//eye
			line(x,y+r,x,y+3*r/2);								//throat
			rectangle(x-r/2,y+3*r/2,x+r/2,y+3*r/2+2*r+20);		//stomach
			line(x,y+3*r/2+r/3,x,y+3*r/2+r*2);					//hand
			line(x,y+3*r/2+2*r+20,x,y+3*r/2+2*r+20+40);			//leg
			line(x,y+3*r/2+2*r+20,x+i,y+3*r/2+2*r+20+40);		//leg
			delay(50);
			cleardevice();
		}
		for(i=0;i<10;i++)										// Both 45 degree
		{
			menu();
			x++;
			circle(x,y,r);
			circle(x+r/2,y-r/2,2);								//eye
			line(x,y+r,x,y+3*r/2);								//throat
			rectangle(x-r/2,y+3*r/2,x+r/2,y+3*r/2+2*r+20);		//stomach
			line(x,y+3*r/2+r/3,x,y+3*r/2+r*2);					//hand
			line(x,y+3*r/2+2*r+20,x-i,y+3*r/2+2*r+20+40);		//leg
			line(x,y+3*r/2+2*r+20,x+10-i,y+3*r/2+2*r+20+40);	//leg
			delay(50);
			cleardevice();
		}
		for(i=0;i<10;i++)										//  2nd 45 degree
		{
			menu();
			circle(x,y,r);										//head
			circle(x+r/2,y-r/2,2);								//eye
			line(x,y+r,x,y+3*r/2);								//throat
			rectangle(x-r/2,y+3*r/2,x+r/2,y+3*r/2+2*r+20);		//stomach
			line(x,y+3*r/2+r/3,x,y+3*r/2+r*2);					//hand
			line(x,y+3*r/2+2*r+20,x+i-10,y+3*r/2+2*r+20+40); 	//leg
			line(x,y+3*r/2+2*r+20,x,y+3*r/2+2*r+20+40);			//leg
			delay(50);
			cleardevice();
		}
	}
	*a=x;
	*b=y;
	menu();
	man_front(x,y,20);
}

void moveleft(int *a,int *b,int r)
{
	//Moves to left
	int i=0,x=*a,y=*b,j;
	for(j=0;j<2;j++)
	{
		for(i=0;i<10;i++)									// 1st 45 degree
		{
			menu();
			circle(x,y,r); 									//head
			circle(x-r/2,y-r/2,2);							//eye
			line(x,y+r,x,y+3*r/2); 							//throat
			rectangle(x-r/2,y+3*r/2,x+r/2,y+3*r/2+2*r+20); 	//stomach
			line(x,y+3*r/2+r/3,x,y+3*r/2+r*2); 				//hand
			line(x,y+3*r/2+2*r+20,x,y+3*r/2+2*r+20+40);  	//leg
			line(x,y+3*r/2+2*r+20,x-i,y+3*r/2+2*r+20+40); 	//leg
			delay(50);
			cleardevice();
		}
		for(i=0;i<10;i++) 									// both 45 degree
		{
			menu();
			x--;
			circle(x,y,r);									//eye
			circle(x-r/2,y-r/2,2);							//throat
			line(x,y+r,x,y+3*r/2);							//stomach
			rectangle(x-r/2,y+3*r/2,x+r/2,y+3*r/2+2*r+20);	//hand
			line(x,y+3*r/2+r/3,x,y+3*r/2+r*2);				//leg
			line(x,y+3*r/2+2*r+20,x+i,y+3*r/2+2*r+20+40);
			line(x,y+3*r/2+2*r+20,x-10+i,y+3*r/2+2*r+20+40);
			delay(50);
			cleardevice();
		}
		for(i=0;i<10;i++)											// 2nd 45 degree
		{
			menu();
			circle(x,y,r);											//head
			circle(x-r/2,y-r/2,2);									//eye
			line(x,y+r,x,y+3*r/2);									//throat
			rectangle(x-r/2,y+3*r/2,x+r/2,y+3*r/2+2*r+20); 			//stomach
			line(x,y+3*r/2+r/3,x,y+3*r/2+r*2);						//hand
			line(x,y+3*r/2+2*r+20,x-i+10,y+3*r/2+2*r+20+40);		//leg
			line(x,y+3*r/2+2*r+20,x,y+3*r/2+2*r+20+40);				//leg
			delay(50);
			cleardevice();
		}
	}
    *a=x;
    *b=y;
	menu();
	man_front(x,y,20);
}

void jump(int x,int y,int r)
{
	//x is the position of man in x direction and y is in y  and r is the radius of head
	//Jump
	int i;
	for(i=0;i<20;i++)												// jump up to some level	
	{
		menu();
		circle(x,y-i,r);											//head
		circle(x+r/2,y-r/2-i,2);									//eye
		circle(x-r/2,y-r/2-i,2);									//eye
		ellipse(x,y-i,200,330-i,r/2,r/2);							//mouth
		line(x,y+r-i,x,y+3*r/2-i);									//throat
		rectangle(x-r,y+3*r/2-i,x+r,y-i+3*r/2+2*r+20);				//stomach
		line(x-r-2,y-i+3*r/2+r/3,x-r-5+i*1.2,y-i+3*r/2+r*2);		//l_hand
		line(x+r+2,y-i+3*r/2+r/3,x+r+5+i*1.2,y-i+3*r/2+r*2);		//r_hand
		line(x+5,y-i+3*r/2+2*r+20,x+5-i*1.2,y-i+3*r/2+2*r+20+40);	//r_leg
		line(x-5,y-i+3*r/2+2*r+20,x-5+i*1.2,y-i+3*r/2+2*r+20+40);	//l_leg
		delay(50);
		cleardevice();
	}
	for(i=20;i>0;i--)												// Comes again to ground from some level of height
	{
		menu();
		circle(x,y-i,r);											//head
		circle(x+r/2,y-r/2-i,2);									//eye
		circle(x-r/2,y-r/2-i,2);									//eye
		ellipse(x,y-i,200,330-i,r/2,r/2);							//mouth
		line(x,y+r-i,x,y+3*r/2-i);									//throat
		rectangle(x-r,y+3*r/2-i,x+r,y-i+3*r/2+2*r+20);				//stomach
		line(x-r-2,y-i+3*r/2+r/3,x-r-5+i*1.2,y-i+3*r/2+r*2);		//l_hand
		line(x+r+2,y-i+3*r/2+r/3,x+r+5+i*1.2,y-i+3*r/2+r*2);		//r_hand
		line(x+5,y-i+3*r/2+2*r+20,x+5-i*1.2,y-i+3*r/2+2*r+20+40);	//l_leg
		line(x-5,y-i+3*r/2+2*r+20,x-5+i*1.2,y-i+3*r/2+2*r+20+40);	//r_leg
		delay(50);
		cleardevice();
	}
	menu();
	man_front(x,y,20);
}

void duck(int x,int y,int r)
{
	//x is the position of man in x direction and y is in y  and r is the radius of head
	int i;
	for(i=0;i>-15;i--)												// to duck
	{
		menu();
		circle(x,y-i,r);											//head
		circle(x+r/2,y-r/2-i,2);									//eye
		circle(x-r/2,y-r/2-i,2);									//eye
		ellipse(x,y-i,200,330-i,r/2,r/2);							//mouth
		line(x,y+r-i,x,y+3*r/2-i);									//throat
		rectangle(x-r,y+3*r/2-i,x+r,y-i+3*r/2+2*r+20);				//stomach
		line(x-r-2,y-i+3*r/2+r/3,x-r-5+i*1.2,y-i+3*r/2+r*2);		//l_hand
		line(x+r+2,y-i+3*r/2+r/3,x+r+5-i*1.2,y-i+3*r/2+r*2);		//r_hand
		line(x+5,y-i+3*r/2+2*r+20,x+5-i*1.2,y+3*r/2+2*r+20+40);		//l_leg
		line(x-5,y-i+3*r/2+2*r+20,x-5+i*1.2,y+3*r/2+2*r+20+40);		//r_leg
		delay(50);
		cleardevice();
	}
	for(i=-15;i<0;i++)												// rise to normal position
	{
		menu();
		circle(x,y-i,r);											//head
		circle(x+r/2,y-r/2-i,2);									//eye
		circle(x-r/2,y-r/2-i,2);									//eye
		ellipse(x,y-i,200,330-i,r/2,r/2);							//mouth
		line(x,y+r-i,x,y+3*r/2-i);									//throat
		rectangle(x-r,y+3*r/2-i,x+r,y-i+3*r/2+2*r+20);				//stomach
		line(x-r-2,y-i+3*r/2+r/3,x-r-5+i*1.2,y-i+3*r/2+r*2);		//l_hand
		line(x+r+2,y-i+3*r/2+r/3,x+r+5-i*1.2,y-i+3*r/2+r*2);		//r_hand
		line(x+5,y-i+3*r/2+2*r+20,x+5-i*1.2,y+3*r/2+2*r+20+40);		//r_leg
		line(x-5,y-i+3*r/2+2*r+20,x-5+i*1.2,y+3*r/2+2*r+20+40);		//l_leg
		delay(50);
		cleardevice();
	}
	menu();
	man_front(x,y,20);
}

void thanks(int x,int y,int r)
{
	//x is the position of man in x direction and y is in y  and r is the radius of head
	//Thanks  Action
	int i,j,k;	
	for(i=0;i<63;i++)												//hat falls on head
	{	
		menu();
		circle(x,y,r);												//head
		circle(x+r/2,y-r/2,2);										//eye
		circle(x-r/2,y-r/2,2);										//eye
		ellipse(x,y,200,330,r/2,r/2);								//mouth
		line(x,y+r,x,y+3*r/2);										//throat
		rectangle(x-r,y+3*r/2,x+r,y+3*r/2+2*r+20);					//stomach
		line(x-r-2,y+3*r/2+r/3,x-r-2,y+3*r/2+r*2);					//hand
		line(x+r+2,y+3*r/2+r/3,x+r+2,y+3*r/2+r*2);					//hand
		line(x+5,y+3*r/2+2*r+20,x+5,y+3*r/2+2*r+20+40);				//leg
		line(x-5,y+3*r/2+2*r+20,x-5,y+3*r/2+2*r+20+40);				//leg
		rectangle(x-r/2-10,y-100+i,x+r/2+10,y+r/2-100+i);			//hat_t
		rectangle(x-r/2-25,y-85+i,x+r/2+25,y-90+i);					//hat_b
		delay(50);
		cleardevice();
	}
	for(j=0;j<42;j++)												// right hands touches to hat
	{
		menu();
		circle(x,y,r);												//head
		circle(x+r/2,y-r/2,2);										//eye
		circle(x-r/2,y-r/2,2);										//eye
		ellipse(x,y,200,330,r/2,r/2);								//mouth
		line(x,y+r,x,y+3*r/2);										//throat
		rectangle(x-r,y+3*r/2,x+r,y+3*r/2+2*r+20);					//stomach
		line(x-r-2,y+3*r/2+r/3,x-r-2,y+3*r/2+r*2);					//hand
		line(x+r+2,y+3*r/2+r/3,x+r+2,y+3*r/2+r*2-2*j);				//hand
		line(x+5,y+3*r/2+2*r+20,x+5,y+3*r/2+2*r+20+40);				//leg
		line(x-5,y+3*r/2+2*r+20,x-5,y+3*r/2+2*r+20+40);				//leg
		rectangle(x-r/2-10,y-100+i,x+r/2+10,y+r/2-100+i);			//hat_t
		rectangle(x-r/2-25,y-85+i,x+r/2+25,y-90+i);					//hat_b
		delay(50);
		cleardevice();
	}
	for(k=0;k<20;k++)												// remove hat for salutation
	{
		menu();
		circle(x,y,r);												//head
		circle(x+r/2,y-r/2,2);										//eye
		circle(x-r/2,y-r/2,2);										//eye
		ellipse(x,y,200,330,r/2,r/2);								//mouth
		line(x,y+r,x,y+3*r/2);										//throat
		rectangle(x-r,y+3*r/2,x+r,y+3*r/2+2*r+20);					//stomach
		line(x-r-2,y+3*r/2+r/3,x-r-2,y+3*r/2+r*2);					//hand
		line(x+r+2,y+3*r/2+r/3,x+r+2,y+3*r/2+r*2-2*j);				//hand
		line(x+5,y+3*r/2+2*r+20,x+5,y+3*r/2+2*r+20+40);				//leg
		line(x-5,y+3*r/2+2*r+20,x-5,y+3*r/2+2*r+20+40);				//leg
		
        line(x-r/2-10+0.8*k,y-100+i-0.8*k,x+r/2+10+0.2*k,y-100+i-0.2*k);  				  	//hat_t_1
		line(x-r/2-10+0.8*k,y+r/2-100+i-0.8*k,x+r/2+10+0.2*k,y+r/2-100+i-0.2*k); 			//hat_t_2
		line(x-r/2-10+0.8*k,y-100+i-0.8*k,x-r/2-10+0.8*k,y+r/2-100+i-0.8*k);				//hat_t_sl
        line(x+r/2+10+0.2*k,y-100+i-0.2*k,x+r/2+10+0.2*k,y+r/2-100+i-0.2*k);				//hat_t_sr
		
        line(x-r/2-25+k,y-85+i-k,x+r/2+25,y-85+i); 											//hat_b_1
		line(x-r/2-25+k,y-90+i-k,x+r/2+25,y-90+i); 											//hat_b_2
		line(x-r/2-25+k,y-85+i-k,x-r/2-25+k,y-90+i-k);										//hat_t_sl
        line(x+r/2+25,y-85+i,x+r/2+25,y-90+i);												//hat_t_sr
        if(k>=8)
        {
            ellipse(x+r/2-50,y-r/2-10,0,360,r/3,r/6);										//thought1
        }
        if(k>=12)
        {
            ellipse(x+r/2-70,y-r/2-30,0,360,r/2,r/4);										//thought2
        }
        if(k>=16)
        {
            ellipse(x+r/2-150,y-r/2-40,0,360,3*r,r);										//thought3
            outtextxy(x+r/2-185,y-r/2-53,"Thanks for");
            outtextxy(x+r/2-185,y-r/2-43,"bearing me!");
        }
        delay(70);
		cleardevice();
    }
    for(k=20;k>0;k--)												// place hat again after salutation
	{
		menu();		
		circle(x,y,r);												//head
		circle(x+r/2,y-r/2,2);										//eye
		circle(x-r/2,y-r/2,2);										//eye
		ellipse(x,y,200,330,r/2,r/2);								//mouth
		line(x,y+r,x,y+3*r/2);										//throat
		rectangle(x-r,y+3*r/2,x+r,y+3*r/2+2*r+20);					//stomach
		line(x-r-2,y+3*r/2+r/3,x-r-2,y+3*r/2+r*2);					//hand
		line(x+r+2,y+3*r/2+r/3,x+r+2,y+3*r/2+r*2-2*j);				//hand
		line(x+5,y+3*r/2+2*r+20,x+5,y+3*r/2+2*r+20+40);				//leg
		line(x-5,y+3*r/2+2*r+20,x-5,y+3*r/2+2*r+20+40);				//leg
		
        line(x-r/2-10+0.8*k,y-100+i-0.8*k,x+r/2+10+0.2*k,y-100+i-0.2*k);    					//hat_t_1
		line(x-r/2-10+0.8*k,y+r/2-100+i-0.8*k,x+r/2+10+0.2*k,y+r/2-100+i-0.2*k); 				//hat_t_2
		line(x-r/2-10+0.8*k,y-100+i-0.8*k,x-r/2-10+0.8*k,y+r/2-100+i-0.8*k);					//hat_t_sl
        line(x+r/2+10+0.2*k,y-100+i-0.2*k,x+r/2+10+0.2*k,y+r/2-100+i-0.2*k);					//hat_t_sr
		
        line(x-r/2-25+k,y-85+i-k,x+r/2+25,y-85+i); 												//hat_b_1
		line(x-r/2-25+k,y-90+i-k,x+r/2+25,y-90+i); 												//hat_b_2
		line(x-r/2-25+k,y-85+i-k,x-r/2-25+k,y-90+i-k);											//hat_t_sl
        line(x+r/2+25,y-85+i,x+r/2+25,y-90+i);													//hat_t_sl

		ellipse(x+r/2-50,y-r/2-10,0,360,r/3,r/6);												//thought1
		ellipse(x+r/2-70,y-r/2-30,0,360,r/2,r/4);												//thought2			
		ellipse(x+r/2-150,y-r/2-40,0,360,3*r,r);												//thought3
		outtextxy(x+r/2-185,y-r/2-53,"Thanks for");
		outtextxy(x+r/2-185,y-r/2-43,"bearing me!");

        delay(70);
		cleardevice();
    }
	menu();
	man_front(x,y,20);

}

void dab(int x,int y,int r)
{
	//x is the position of man in x direction and y is in y  and r is the radius of head
	int i,j;
	for(j=0;j<2;j++)												// performs 2 times DAB
	{	
		for(i=0;i<40;i++)											//dab 1st part
		{	
			menu();
			outtextxy(300,250,"D A B");
			circle(x+r/2,y-r/2+0.19*i,2);							//eye
			circle(x-r/2,y-r/2+0.19*i,2);							//eye
			ellipse(x,y+i*0.1,200,330,r/2,r/2);						//mouth
			line(x,y+r,x,y+3*r/2);									//throat
			rectangle(x-r,y+3*r/2,x+r,y+3*r/2+2*r+20);				//stomach
			if(i<1)													// initial hand position
			{
				line(x-r-2,y+3*r/2+r/3,x-r-2,y+3*r/2+r*2);			//hand
				line(x+r+2,y+3*r/2+r/3,x+r+2,y+3*r/2+r*2);			//hand
				delay(50);
			}
			line(x+5,y+3*r/2+2*r+20,x+5,y+3*r/2+2*r+20+40);			//leg
			line(x-5,y+3*r/2+2*r+20,x-5,y+3*r/2+2*r+20+40);			//leg	
			ellipse(x, y+i*0.2, 0,360,r,r-i*0.2);	
			line(x-r-2,y+3*r/2+r/3+10,x-r-2+5+0.5*i,y+3*r/2+r*2-1.2*i);			//l_hand
			line(x+r+2,y+3*r/2+r/3,x+r+2+5+i,y+3*r/2+r*2-1.5*i);				//r_hand
			delay(50);
			cleardevice();
		}
		for(i=39;i>=0;i--)											// dab 2nd part
		{	
			menu();
			outtextxy(300,250,"D A B");
			circle(x+r/2,y-r/2+0.19*i,2);							//eye
			circle(x-r/2,y-r/2+0.19*i,2);							//eye
			ellipse(x,y+i*0.1,200,330,r/2,r/2);						//mouth
			line(x,y+r,x,y+3*r/2);									//throat
			rectangle(x-r,y+3*r/2,x+r,y+3*r/2+2*r+20);				//stomach
			line(x+5,y+3*r/2+2*r+20,x+5,y+3*r/2+2*r+20+40);			//leg
			line(x-5,y+3*r/2+2*r+20,x-5,y+3*r/2+2*r+20+40);			//leg	
			ellipse(x, y+i*0.2, 0,360,r,r-i*0.2);					//head
			line(x-r-2,y+3*r/2+r/3+10,x-r-2+5+0.5*i,y+3*r/2+r*2-1.2*i);		//l_hand
			line(x+r+2,y+3*r/2+r/3,x+r+2+5+i,y+3*r/2+r*2-1.5*i);			//r_hand
			if(i<1)													//normal position of head
			{
				line(x-r-2,y+3*r/2+r/3,x-r-2,y+3*r/2+r*2);			//hand
				line(x+r+2,y+3*r/2+r/3,x+r+2,y+3*r/2+r*2);			//hand
				delay(50);
			}
			delay(50);
			cleardevice();
		}
	}	
	cleardevice();
	menu();
	man_front(x,y,20);
}

void rest(int x,int y,int r)
{
	//x is the position of man in x direction and y is in y  and r is the radius of head
	//Give some rest to man
	int i,j;
	for(j=0;j<4;j++)
	{
		for(i=0;i<4;i++)
		{
			menu();
			outtextxy(280,150,"DO NOT DISTURB !!!!");
			circle(x,y,r);										//head
			circle(x+r/2,y-r/2,2-0.1*j);								//eye
			circle(x-r/2,y-r/2,2-0.1*j);								//eye
			ellipse(x,y,200,330,r/2,r/2);						//mouth
			line(x,y+r,x,y+3*r/2);								//throat
			rectangle(x-r,y+3*r/2,x+r,y+3*r/2+2*r+20);			//stomach
			line(x-r-2,y+3*r/2+r/3,x-r-2,y+3*r/2+r*2);			//l_hand
			line(x+r+2,y+3*r/2+r/3,x+r+2,y+3*r/2+r*2);			//r_hand
			line(x+5,y+3*r/2+2*r+20,x+5,y+3*r/2+2*r+20+40);		//r_leg
			line(x-5,y+3*r/2+2*r+20,x-5,y+3*r/2+2*r+20+40);		//l_leg
			switch (i)
			{
				case 0:
					outtextxy(x+30,y-5," z");
					break;
				case 1:
					outtextxy(x+40,y-15," zz");
					break;
				case 2:
					outtextxy(x+50,y-25," zzz");
					break;
				case 3:
					outtextxy(x+60,y-35," zzz");
					break;
			}
			delay(300);
		}
		cleardevice();
	}
	menu();
	man_front(x,y,20);
}

int main()
{
	int x=300,y=300;
	char a='p';
	int gd=DETECT,gm;
	clrscr();
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	menu();
	man_front(x,y,20);
	do 
	{
		a = getch();
		switch (a)
		{
			case 'p':
				while(!kbhit())
				{
					menu();
					man_front(x,y,20);
				}
				a=getch();
				if(!(a=='a'||a=='d'||a=='w'||a=='s'||a=='z'||a=='x'||a=='c'))
				{
					a='p';
				}
				else
				{
					menu();
					man_front(x,y,20);
					delay(50);
				}
				break;
			case 'a':
				menu();
				moveleft(&x,&y,20);
				break;
			case 'd':
				menu();
				moveright(&x,&y,20);
				break;
			case 's':
				menu();
				duck(x,y,20);
				delay(50);
				break;
			case 'w':
				menu();
				jump(x,y,20);
				delay(50);
				break;
			case 'z':
				menu();
				dab(x,y,20);
				delay(50);
				break;
			case 'x':
				menu();
				thanks(x,y,20);
				delay(50);
				break;
			case 'c':
				menu();
				rest(x,y,20);
				delay(50);
				break;
		}
	}while(a!='0');
	getch();
	closegraph();
	return 0;
}