#pragma once
#include"Transport.h"
#include"Request.h"

class Plane : public Transport {
public:
	Plane();
	~Plane();

	void Print_Transport_Race() override;
	void Print_Transport_Name() override;

	std::string Get_Name() override;
private:
	std::string name_ = " ���� - ������";
	int speed_ = 100;
	int result_ = 50;
};
