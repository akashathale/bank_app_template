#include <iostream>

using namespace std;
template <class name, class account_number>// class address, class email_id, class telephone_number, class nominee, class account_type, class init_balance, class curr_balance, class priviledges, class date>
class create_account{
	name a; account_number b;
	public:
	create_account(name a1, account_number b1) :a{a1}, b{b1}{};
	void display(){
		cout<<"Account details are:	"<<endl;
		cout<<a<<endl;
		cout<<b<<endl;
	}
};

template <class address, class email_id, class telephone_number, class nominee>
class customer_details{
	address a; email_id b; telephone_number c; nominee d;
	public:
	customer_details(address a1, email_id b1, telephone_number c1, nominee d1): a{a1}, b{b1}, c{c1}, d{d1}{};
        void display(){
                cout<<"Account details are:     "<<endl;
                cout<<a<<endl;
                cout<<b<<endl;
		cout<<c<<endl;
		cout<<d<<endl;
        }
};

template <class account_type, class init_balance, class curr_balance, class priviledges, class date>
class account_details{
	account_type a; init_balance b; curr_balance c; priviledges d; date e;
	public:
	account_details(account_type a1, init_balance b1, curr_balance c1, priviledges d1, date e1): a{a1}, b{b1}, c{c1}, d{d1}, e{e1}{};
        void display(){
                cout<<"Account details are:     "<<endl;
                cout<<a<<endl;
                cout<<b<<endl;
                cout<<c<<endl;
                cout<<d<<endl;
		cout<<e<<endl;
        }
};
