#include "Class_counter.h"

Counter::Counter() {
	initial_v = 1;
}
Counter::Counter(int initial_v) {
	this->initial_v = initial_v;
}
void Counter::grow()
{
	initial_v++;
}
void Counter::fall()
{
	initial_v--;
}
void Counter::print()
{
	std::cout << initial_v << std::endl;
}
