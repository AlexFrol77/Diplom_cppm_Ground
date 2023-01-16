#pragma once
#include"Transport.h"
#include"Request.h"

class Camel : public Transport {
public:
	Camel();
	~Camel();

	void Print_Transport_Race() override;
	void Print_Transport_Name() override;
	std::string Get_Name() override;
	int Get_ID() override;
	int Get_Result() override;
	bool operator<(Transport* r_op) override;
	bool operator>(Transport* r_op) override;
private:
	std::string name_ = " Верблюд";
	int speed_ = 10;
	int result_ = 0;
	int id_ = 1;
};
