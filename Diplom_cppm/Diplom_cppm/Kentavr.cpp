#include"Kentavr.h"

Kentavr::Kentavr() {}
Kentavr::~Kentavr() {}

void Kentavr::Print_Transport_Race() {
	std::cout << name_ << " " << result_ << std::endl;
}
void Kentavr::Print_Transport_Name() {
	std::cout << name_;
}
std::string Kentavr::Get_Name() {
	return name_;
}
int Kentavr::Get_ID() {
	return id_;
}
int Kentavr::Get_Result() {
	return result_;
}
bool Kentavr::operator<(Transport* r_op) {
	if (this->result_ < r_op->Get_Result()) {
		return true;
	}
	else {
		return false;
	}
}
bool Kentavr::operator>(Transport* r_op) {
	if (this->result_ > r_op->Get_Result()) {
		return true;
	}
	else {
		return false;
	}
}