#pragma once
#include"Request.h"
#include"Transport.h"
//#include"Camel.h"

class Kentavr : public Transport {
public:
	Kentavr();
	~Kentavr();

	void Print_Transport_Race() override;
	void Print_Transport_Name() override;

	std::string Get_Name() override;
private:
	std::string name_ = " Кентавр ";
	int speed_ = 100;
	int result_ = 50;
};