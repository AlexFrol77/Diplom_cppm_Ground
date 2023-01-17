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
void Kentavr::Go_Race(int dest) {
	this->result_ = dest / speed_;
}