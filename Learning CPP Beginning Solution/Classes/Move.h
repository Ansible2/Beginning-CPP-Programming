// Move constructors are used to avoid unnecessary copying/creation of variables

#pragma once
class Move
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

	Move(int d);
	Move(const Move& source);
	Move(Move&& source) noexcept;

	~Move();
};

