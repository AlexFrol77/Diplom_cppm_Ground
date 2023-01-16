#include"Boots.h"


Boots::Boots() {}
Boots::~Boots() {}

void Boots::Print_Transport_Race() {
	std::cout << name_ << " " << result_ << std::endl;
}
void Boots::Print_Transport_Name() {
	std::cout << name_;
}
std::string Boots::Get_Name() {
	return name_;
}
int Boots::Get_ID() {
	return id_;
}
int Boots::Get_Result() {
	return result_;
}
void Boots::Go_Race(int dest) {
	this->result_ = dest / speed_;
}