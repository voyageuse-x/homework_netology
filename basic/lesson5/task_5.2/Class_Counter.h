#pragma once
#include <iostream>
class Counter
{
private:
	int initial_v;
public:
	Counter();
	Counter(int initial_v);
	void grow();
	void fall();
	void print();
};

