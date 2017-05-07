#include <iostream>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>
#include "class_to_collect.h"
using namespace std;
long int gather_info::ret_long(int j){
	int i = 1;
	long int c_long;
	while(i){
		if(j == 1){
			c_long = rand()%9 + 1;
			return c_long;
		}

		if(j == 2){
			cin>>c_long;
			return c_long;
		}
		i = i - 1;
	}
}

string gather_info::ret_str(int j){
	int i = 1;
	string c_detail;
	while(1){
		if(j == 1){
			getline(cin, c_detail);
			return c_detail;
		}
	
		if(j == 2){
			time_t now = time(0);
			c_detail = ctime(&now);
			return c_detail;
		}
		i = i - 1;
	}
}

int gather_info::ret_int(){
	int c_int;
	cin>>c_int;
	return c_int;
}
	
