#include"Camel_Fast.h"

Camel_Fast::Camel_Fast() {}
Camel_Fast::~Camel_Fast() {}

void Camel_Fast::Print_Transport_Race() {
	std::cout << name_ << " " << result_ << std::endl;
}
void Camel_Fast::Print_Transport_Name() {
	std::cout << name_;
}
int Camel_Fast::Get_ID() {
	return id_;
}
int Camel_Fast::Get_Result() {
	return result_;
}
bool Camel_Fast::operator<(Transport* r_op) {
	if (this->result_ < r_op->Get_Result()) {
		return true;
	}
	else {
		return false;
	}
}
bool Camel_Fast::operator>(Transport* r_op) {
	if (this->result_ > r_op->Get_Result()) {
		return true;
	}
	else {
		return false;
	}
}