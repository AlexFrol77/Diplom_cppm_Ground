#pragma once
#include"Transport.h"


class Broomstick : public Transport {
public:
	Broomstick();
	~Broomstick() override;

	void Print_Transport_Race() override;
	void Print_Transport_Name() override;
	std::string Get_Name() override;
	int Get_ID() override;
	int Get_Result() override;
	void Go_Race(int dest) override;
private:
	std::string name_ = " Метла";
	int speed_ = 20;
	int result_ = 0;
	int id_ = 7;
};

