#ifndef ROOM1_H
#define ROOM1_H
#include Room.h

DoubleBedroom():public Room.h
{
public:
	DoubleBedroom();
	get_details();
	set_details();
	edit_details();
};

SingleBedroom():public Room.h
{
public:
	SingleBedroom();
	get_details();
	set_details();
	edit_details();
};

Suite():public Room.h
{
public:
	Suite();
	get_details();
	set_details();
	edit_details();
};
#endif