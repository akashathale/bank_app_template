#include <iostream>
#include <stdlib.h>

class customer {
	string c_name;
	long int acc_num;
	protected:
	friend class
	customer(string c, long int a): c{c_name}, acc_num{a}{};
	virtual display();
};

class cust_details {
	string branch_name;
	long int telephone;
	string email;
	string address;
	protected:
	acc_details(string b_name, long int tel, string mail, string add): branch_name{b_name}, telephone{tel}, email{mail}, address{add}{};
	virtual display();
};

class fin_details {
	char* type;
	int init_balance;
	int cur_balance;
	string priviledges;
	protected:
	fin_details(char* t, int i, int c, string p): type{t}, init_balance{i}, cur_balance{c}, priviledges{p}{};
	virtual display();
};
