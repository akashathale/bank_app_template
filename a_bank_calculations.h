#include "a_bank_class_accept.h"

class credit_debit{
	int amount;
	protected:
	credit_debit(int a): amount{a}{};
	void add_sub(int j, fin_details &);
	void predict(fin_details &);
};
