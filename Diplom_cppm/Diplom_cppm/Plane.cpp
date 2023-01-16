#include"Plane.h"


Plane::Plane() {}

Plane::~Plane() {}

void Plane::Print_Transport_Race() {
	std::cout << name_ << " " << result_ << std::endl;
}
void Plane::Print_Transport_Name() {
	std::cout << name_;
}
std::string Plane::Get_Name() {
	return name_;
}
int Plane::Get_ID() {
	return id_;
}
int Plane::Get_Result() {
	return result_;
}
bool Plane::operator<(Transport* r_op) {
	if (this->result_ < r_op->Get_Result()) {
		return true;
	}
	else {
		return false;
	}
}
bool Plane::operator>(Transport* r_op) {
	if (this->result_ > r_op->Get_Result()) {
		return true;
	}
	else {
		return false;
	}
}