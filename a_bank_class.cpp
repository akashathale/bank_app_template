#include "a_bank_class.h"

void customer::display(){
	cout<<"Customer name:	"<<c_name<<endl;
	cout<<"Customer account number:		"<<acc_num<<endl;
}

void cust_details::display(){
	cout<<"Branch name is:	"<<branch_name<<endl;
	cout<<"Customer contact number:	"<<telephone<<endl;
	cout<<"Customer email is:	"<<email<<endl;
	cout<<"Customer address is:	"<<address<<endl;
}

void fin_details::display(){
	cout<<"Account type is:	"<<type<<endl;
	cout<<"Customer initial balance is:	"<<init_balance<<endl;
	cout<<"Customer current balance is:	"<<cur_balance<<endl;
	cout<<"account priviledges are:	"<<priviledges<<endl;
}
