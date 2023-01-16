#include"Broomstick.h"

Broomstick::Broomstick() {}

Broomstick::~Broomstick() {}

void Broomstick::Print_Transport_Race() {
	std::cout << name_ << " " << result_ << std::endl;
}
void Broomstick::Print_Transport_Name() {
	std::cout << name_;
}
std::string Broomstick::Get_Name() {
	return name_;
}
int Broomstick::Get_ID() {
	return id_;
}
int Broomstick::Get_Result() {
	return result_;
}
void Broomstick::Go_Race(int dest) {
	this->result_ = dest / speed_;
}