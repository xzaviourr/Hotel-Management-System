#ifndef ROOM_H
#define ROOM_H

class Room
{
int room_no;
string room_type;
char block_no;
public:
	Room();
	virtual void get_details()=0;
	virtual void set_details()=0;
	virtual void edit_details()=0;
};
#endif