#pragma once
#include <iostream>
class Counter
{
public:
	int initial_v;
	Counter();
	Counter(int initial_v);
	void grow();
	void fall();
	void print();
};

