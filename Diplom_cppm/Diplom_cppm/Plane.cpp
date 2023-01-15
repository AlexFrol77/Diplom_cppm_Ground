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