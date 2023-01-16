#include<iostream>
#include"Transport.h"

Transport::Transport() {};

Transport::~Transport() {};

void Transport::Set_Distance(int distance) {
	this->distance_ = distance;
}
void Transport::Print_Transport_Race() {
	std::cout << name_ << " " << result_ << std::endl;
}
void Transport::Print_Transport_Name() {
	std::cout << name_ << " ";
}
int Transport::Get_Distance() {
	return distance_;
}
int Transport::Get_Speed() {
	return speed_;
}
int Transport::Get_Result() {
	return result_;
}
std::string Transport::Get_Name() {
	return name_;
}
int Transport::Get_ID() {
	return id_;
}
void Transport::Go_Race(int dest) {
	this->result_ = dest / speed_;
}