#include <iostream>
#include <string>
#include "head.hpp"

using namespace std;

int processing(queue &my_queue){
	int mode;
	do{
		cout << "[0] вставить в очередь\n"
			<< "[1]  удалить из очереди\n"
			<< "[2]  вывести очередь\n";
		getInt(mode, "enter mode -> ");
		if(mode == 0){
			double new_double;
			string new_string;
			getDouble(new_double, "enter double val -> ");
			cout << "enter string val -> ";
			cin >> new_string;
			if(my_queue.push(new_double, new_string)){
				cout << "ERROR queue is full!\n";
			}
		}
		else if(mode == 1){
			double double_val;
			string string_val;
			if(!my_queue.pop(double_val, string_val)){
				cout<<"{"<<string_val<<", "<<double_val<<"}\n";
			}
			else{
				cout << "ERROR: queue is empty\n";
			}
		}
		else if(mode == 2){
			my_queue.print();
		}
	}while(mode != -1);
	return 0;
}

void getDouble(double &val, const char *txt){
	int flag = 1;
	const char * err = "";
	do{
		cout << err;
		cout << txt;
		cin >> val;
		if(cin.good()){
			flag = 0;
		}
		else{
				cin.clear();
			        cin.ignore(1000, '\n');
		}
		err = "wronge data!\n";
	} while(flag);
}

void getInt(int &val, const char *txt){
	int flag = 1;
	const char * err = "";
	do{
		cout << err;
		cout << txt;
		cin >> val;
		if(cin.eof()){
			val =  -1;
			return;
		}
		if(cin.good()){
			flag = 0;
		}
		else{
				cin.clear();
			        cin.ignore(1000, '\n');
		}
		err = "wronge data!\n";
	} while(flag);
}


