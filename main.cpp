#include "bank_template.h"
#include "class_to_collect.h"
#include <vector>

using namespace std;
int main(){
	int options = 0;
	vector <create_account<string, long int> > rec_customer;
	vector <customer_details<string, string, long int, string> > det_customer; 
	vector <account_details<string, int, int, string, string> > det_account;
	gather_info I;
	while(1){
		cout<<"Enter your options\n";
		cin>>options;
		if(options == 1){
			cout<<"Enter customer name \n";
			create_account <string, long int> cust_rec (I.ret_str(1), I.ret_long(1));
			cust_rec.display();
			rec_customer.push_back(cust_rec);
			cout<<"Enter the customer details\n";
			customer_details <string, string, long int, string> cust_det (I.ret_str(1), I.ret_str(1), I.ret_long(2), I.ret_str(1));
			det_customer.push_back(cust_det);
			cust_det.display();
			cout<<"Enter the customer account details\n";
			account_details <string, int, int, string, string> acc_det (I.ret_str(1), I.ret_int(), I.ret_int(), I.ret_str(1), I.ret_str(2));
			det_account.push_back(acc_det);
			acc_det.display();
		}
			
	}
	return 0;
}
