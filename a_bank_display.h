#include "a_bank_class.h"

class display_details: protected customer, protected cust_details, protected fin_details{
	public:
	void display(customer &c, cust_details &c1, cust_details &c2){
		display_details d;
		d = c;
		d.display();
		d = c1;
		d.display();
		d = c2;
		d.display();
	}
};
