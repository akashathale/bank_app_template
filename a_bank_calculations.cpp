#include "a_bank_calculations.h"

void credit_debit::add_sub(int j, fin_details &fin){
	if(j == 1){
		fin.balace() = fin.balance + amount;
	}

	if(j == 2){
		fin.balance() = fin.balance() - amount;
	}
}

void credit_debit::predict(fin_details &fin){
	char* type = fin.type();
	int m, y;
	int p = 0;
	cout<<"Enter the months and year\n";
	cin>>m;
	cin>>y;
	m = 12*y + m;
	if(type == "saving"){
		float ROI = 8/12;
		p = fin.balance();
		int interest = p*ROI*m;
		p = p + interest;
	}
	if(type == "current"){
		float ROI = 4/12;
		p = fin.balance();
		int interest = p*ROI*m;
		p = p + interest;
	}

	if(type == "fixed"){
		float ROI = 10/12;
		p = fin.balance();
		int interest = p*ROI*m;
		p = p + interest;
	}

	cout<<"Your returns will be:	"<<p<<endl;
}
	
