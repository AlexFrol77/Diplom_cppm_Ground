#include"Camel_Fast.h"

Camel_Fast::Camel_Fast() {}
Camel_Fast::~Camel_Fast() {}

void Camel_Fast::Print_Transport_Race() {
	std::cout << name_ << " " << result_ << std::endl;
}
void Camel_Fast::Print_Transport_Name() {
	std::cout << name_;
}