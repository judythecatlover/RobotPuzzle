#include <iostream>
#include <vector>
#include <cstdlib>

#include "Robot.h"
#include "Railroad.h"

Robot::Robot(char *name)
{
	this->name = name;
	this->location = rand() % 1000;
	this->flag = true;
}

void Robot::moveLeft()
{
	if(location<=0)
	{
		cout<<"reaches the left end"<<endl;
	}
	else
	{
		location --;	
	}
}

void Robot::moveRight()
{
	if(location>=1000)
	{
		cout<<"reaches the right end"<<endl;
	}
	else
	{
		location++;
	}
}

bool Robot::checkStatus(Railroad &rr)
{
	if(rr[this->location].flag == true)
	{
		return true;
	}
	if(rr[this->location].flag == false)
	{
		return false;
	}
}