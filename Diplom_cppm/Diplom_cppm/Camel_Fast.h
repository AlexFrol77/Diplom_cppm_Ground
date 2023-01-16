#pragma once
#include"Request.h"
#include"Transport.h"
#include"Camel.h"


class Camel_Fast : public Transport {
public:
	Camel_Fast();
	~Camel_Fast();

	void Print_Transport_Race() override;
	void Print_Transport_Name() override;
	int Get_ID() override;
	int Get_Result() override;
	bool operator<(Transport* r_op) override;
	bool operator>(Transport* r_op) override;
private:
	std::string name_ = " Верблюд - скороход";
	int speed_ = 1000;
	int result_ = 500;
	int id_ = 2;
};
