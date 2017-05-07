#include "a_bank_class.h"

class accept_details:protected customer, protected cust_details, protected fin_details {
	protected:
	accept_details(string name, long int num): customer(name, num);
	accept_details(string b, long int tel, string mail, string address): cust_details(b, tel, mail, address);
	accept_details(char* t, int i, int c, string p):fin_details(t, i, c, p);
};

class store_details:protected customer, protected cust_details, protected fin_details {
	static vector <customer> customer_details;
	static vector <cust_details> cust;
	static vector <fin_details> fin;
	protected:
	static void edit(int i, customer &c, cust_details &c1, fin_details &c2){
        	if(i == 1){
                	customer_details.push_back(c);
                	cust.push_back(c1);
                	fin.push_back(c2);
        	}

        	if(i == 2){
                	customer_details.remove(c);
                	cust.remove(c1);
                	fin.remove(c2);
        	}
	}

};

