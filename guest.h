#ifndef GUEST_H
#define GUEST_H

class Guest
{
	int guest_id;
	string guest_name;
	long long int verification_id;
	string address;
	int No_of_companion;
	string contact;
	Datetime check_in;
	Datetime check_out;
	Guest();
	void set_details();
	void get_details();
	void get_amount();
}
#endif