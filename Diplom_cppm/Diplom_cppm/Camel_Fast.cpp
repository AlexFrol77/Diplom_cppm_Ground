#include"Camel_Fast.h"

Camel_Fast::Camel_Fast() {}
Camel_Fast::~Camel_Fast() {}

void Camel_Fast::Print_Transport_Race() {
	std::cout << name_ << " " << result_ << std::endl;
}
void Camel_Fast::Print_Transport_Name() {
	std::cout << name_;
}
std::string Camel_Fast::Get_Name() {
	return name_;
}
int Camel_Fast::Get_ID() {
	return id_;
}
int Camel_Fast::Get_Result() {
	return result_;
}
void Camel_Fast::Go_Race(int dest) {
	this->result_ = dest / speed_;
}