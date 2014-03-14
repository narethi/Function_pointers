#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

typedef int(*intCallback)(int, int);

void my_int_func(intCallback function, int arg_one, int arg_two) 
	{printf("result %d\n", function(arg_one, arg_two));}

int multiply(int argument_one, int argument_two) {return argument_one*argument_two;}
int divide(int argument_one, int argument_two) {
	if(argument_two != 0)
		return argument_one/argument_two;
	else return 0;
}
int subtract(int argument_one, int argument_two) {return argument_one-argument_two;}
int add(int argument_one, int argument_two) {return argument_one+argument_two;}

int main()
{
	string inputFunction;
	int arg1, arg2;
	while(true)
	{
		cout << "operation: ";
		cin  >> inputFunction;
		if(inputFunction == "exit") exit(0);
		cout << "argument1: ";
		cin  >> arg1;
		cout << "argument2: ";
		cin  >> arg2;
		if(inputFunction == "add")
			my_int_func(add, arg1, arg2);
		else if(inputFunction == "subtract")
			my_int_func(subtract, arg1, arg2);
		else if(inputFunction == "multiply")
			my_int_func(multiply, arg1, arg2);
		else if(inputFunction == "divide")
			my_int_func(divide ,arg1, arg2);
		else;
	}
    return 0;
}