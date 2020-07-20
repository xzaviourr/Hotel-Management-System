#include<bits/stdc++.h>
#include Room1.h
#include Room.h
using namespace std;

class DoubleBedroom : public Room
{
	DoubleBedroom();
	void set_details()
	{
		cout<<"Enter Room no. : ";
		cin>>room_no;
		cout<<"Enter type of room: ";
		cin>>room_type;
		cout<<"Enter block number: ";
		cin>>block_no;
	}
    void get_details()
    {
    	cout<<"Room number is "<<room_no<<endl;
    	cout<<"Room type is "<<room_type<<endl;
    	cout<<"Block number is"
    }
};