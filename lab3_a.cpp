#include <iostream>
#include <string>
#include "head.hpp"

using namespace std;

item::item(double double_in, string string_in){
	double_val = double_in;
	string_val = string_in;
}

item::item(){
	double_val = 0;
	string_val;
}

queue::queue(){
	number = 0;
	size = 4;
	head = 0;
	tail = 0;
}

int queue::pop(double &del_double_val , string &del_string_val){
	if(!number){
		return 1;
	}
	del_double_val = arr[head].double_val;
	del_string_val = arr[head].string_val;
	head = (head + 1) %size;
	--number;
	return 0;
}

int queue::push(double new_double_val, string new_string_data){
	if(number == size) return 1;
	arr[tail].string_val = new_string_data;
	arr[tail].double_val = new_double_val;
	tail = (tail + 1) % size;
	++number;
	return 0;
}

void queue::print(){
	int tmp_head = head;
	for(int num = 0; num < number; num++){
		cout << "{"<< arr[tmp_head].string_val <<" , "<< arr[tmp_head].double_val<<"}\n";
		tmp_head = (tmp_head + 1) % size;
	}
}
