#pragma once
#include"Transport.h"
#include"Request.h"

class Broomstick : public Transport {
public:
	Broomstick();
	~Broomstick();

	void Print_Transport_Race() override;
	void Print_Transport_Name() override;

	std::string Get_Name() override;

	int Get_ID() override;
private:
	std::string name_ = " Метла";
	int speed_ = 100;
	int result_ = 50;
	int id_ = 7;
};
