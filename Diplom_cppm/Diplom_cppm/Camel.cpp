#include"Camel.h"

Camel::Camel() {}

Camel::~Camel() {}

void Camel::Print_Transport_Race() {
	std::cout << name_ << " " << result_ << std::endl;
}
void Camel::Print_Transport_Name() {
	std::cout << name_;
}
std::string Camel::Get_Name() {
	return name_;
}
int Camel::Get_ID() {
	return id_;
}
int Camel::Get_Result() {
	return result_;
}
void Camel::Go_Race(int dest) {
	this->result_ = dest / speed_;
}