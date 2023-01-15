#pragma once
#include"Request.h"
#include"Transport.h"


class Boots : public Transport {
public:
	Boots();
	~Boots();

	void Print_Transport_Race() override;
	void Print_Transport_Name() override;

	std::string Get_Name() override;

	int Get_ID() override;
private:
	std::string name_ = " Ботинки - скороходы ";
	int speed_ = 100;
	int result_ = 50;
	int id_ = 4;
};