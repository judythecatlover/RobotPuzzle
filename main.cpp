#include <iostream>
#include <vector>

#include "Robot.h"
#include "Railroad.h"

bool meetRobot(Robot &rb1, Robot &rb2)
{
	if(rb1.location == rb2.location) 
	{
		cout<<"I found you!"<<endl;
		return true;
	}
	else return false;
}

void moveLeftTogether(Robot &rb1, Robot &rb2)
{
	rb1.moveLeft();
	rb2.moveLeft();
}

void moveRightTogether(Robot &rb1,Robot &rb2)
{
	rb1.moveRight();
	rb2.moveRight();
}

void moveToLeft(Robot &rob, Railroad &rr)
{
	if(rob.checkStatus(rr)==true) rob.moveLeft();
	else rob.moveRight();
}

void moveToRight(Robot &rob, Railroad &rr)
{
	if(rob.checkStatus(rr)==true) rob.moveRight();
	else rob.moveLeft();
}

int main()
{
	char *rb1 = "Jack";
	char *rb2 = "Rose";
	Robot Jack(rb1);
	Robot Rose(rb2);

	Railroad rail(1000);

	rail.setLocation(rb1);
	rail.setLocation(rb2);

	int count = 10;

	while(meetRobot(rb1,rb2)==false)
	{
		int i = 0;
		while(rb1.location<1000 && rb2.location<1000 && count > 0 && meetRobot(rb1,rb2)!= true)
		{
			moveToRight(rb1,rail);
			moveToRight(rb2,rail);
			meetRobot(rb1,rb2);
			count --;
			i ++;
		}
		count = i+10;
		while(rb1.location>0 && rb2.location>0 && count > 0 && meetRobot(rb1,rb2)!= true)
		{
			moveToLeft(rb1,rail);
			moveToLeft(rb2.rail);
			meetRobot(rb1,rb2);
			count --;
			i ++;
		}

	}
	return 0;



}