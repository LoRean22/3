#pragma once

class Counter {
private:
	int number_;

public:
	Counter();
	

	void increment();

	void decrement();

	int presentValue();
};