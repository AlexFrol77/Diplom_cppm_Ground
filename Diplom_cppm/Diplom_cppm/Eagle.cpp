#include"Eagle.h"

Eagle::Eagle() {}

Eagle::~Eagle() {}

void Eagle::Print_Transport_Race() {
	std::cout << name_ << " " << result_ << std::endl;
}
void Eagle::Print_Transport_Name() {
	std::cout << name_;
}
std::string Eagle::Get_Name() {
	return name_;
}
int Eagle::Get_ID() {
	return id_;
}
int Eagle::Get_Result() {
	return result_;
}
bool Eagle::operator<(Transport* r_op) {
	if (this->result_ < r_op->Get_Result()) {
		return true;
	}
	else {
		return false;
	}
}
bool Eagle::operator>(Transport* r_op) {
	if (this->result_ > r_op->Get_Result()) {
		return true;
	}
	else {
		return false;
	}
}