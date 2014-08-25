#include <iostream>
#include <vector>

#include "Robot.h"
#include "Railroad.h"

Railroad::Railroad(int len)
{
	this->length = len;
	for(int i = 0; i<len; i++)
		{
			Block block;
			block.location = i;
			block.flag = false;
			v.push_back(block)
		};
}

int Railroad::setLocation(Robot &rob)
{
	v[rob.location].flag = true;
}
