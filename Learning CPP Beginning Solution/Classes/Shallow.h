#pragma once
class Shallow
{
private:
	int* data;
public:
	void set_data_value(int d) { 
		*data = d;
	}

	int get_data_value() {
		return *data;
	}

	Shallow(int d); // constructor
	Shallow(const Shallow& source); // copy constructor
	~Shallow(); // deconstructor
};

