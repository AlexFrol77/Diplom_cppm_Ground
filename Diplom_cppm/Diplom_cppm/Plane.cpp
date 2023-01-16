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
void Plane::Go_Race(int dest) {
	this->result_ = dest / speed_;
}