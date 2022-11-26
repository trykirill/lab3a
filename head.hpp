#ifndef HEAD_HPP
#define HEAD_HPP

#include <string>

using namespace std;

void getDouble(double &val, const char *txt);
void getInt(int &val, const char *txt);

struct item{
	double double_val;
	string string_val;
	item();
	item(double double_in, string string_in);
};

class queue{
private:
	int size;
	int number;
	int head;
	int tail ;
	item arr[4] ;
public:
	queue();
	int check();
	int push(double new_double_val, string new_string_val);
	int pop(double &del_double_val, string &del_string_val);
	void print();
};

int processing(queue &my_queue);

#endif
