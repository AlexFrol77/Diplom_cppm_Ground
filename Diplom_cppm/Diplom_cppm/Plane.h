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
	int Get_ID() override;
	int Get_Result() override;
	void Go_Race(int dest) override;
private:
	std::string name_ = " Ковёр - самолёт";
	int speed_ = 10;
	int result_ = 0;
	int id_ = 5;
};
