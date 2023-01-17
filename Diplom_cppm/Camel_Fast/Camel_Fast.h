#pragma once
#include"Transport.h"


class Camel_Fast : public Transport {
public:
	 Camel_Fast();
	~Camel_Fast() override;

	void Print_Transport_Race() override;
	void Print_Transport_Name() override;
	std::string Get_Name() override;
	int Get_ID() override;
	int Get_Result() override;
	void Go_Race(int dest) override;
private:
	std::string name_ = " Верблюд - скороход";
	int speed_ = 40;
	int result_ = 0;
	int id_ = 2;
};


