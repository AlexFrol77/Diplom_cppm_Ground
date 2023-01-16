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
	int Get_Result() override;
	void Go_Race(int dest) override;
private:
	std::string name_ = " ������� - ��������� ";
	int speed_ = 6;
	int result_ = 0;
	int id_ = 4;
};