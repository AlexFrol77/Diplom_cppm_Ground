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
	int Get_ID() override;
	int Get_Result() override;
	bool operator<(Transport* r_op) override;
	bool operator>(Transport* r_op) override;
private:
	std::string name_ = " Кентавр ";
	int speed_ = 15;
	int result_ = 0;
	int id_ = 3;
};