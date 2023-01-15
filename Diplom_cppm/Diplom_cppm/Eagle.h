#pragma once
#include"Transport.h"
#include"Request.h"

class Eagle : public Transport {
public:
	Eagle();
	~Eagle();

	void Print_Transport_Race() override;
	void Print_Transport_Name() override;

	std::string Get_Name() override;

	int Get_ID() override;
private:
	std::string name_ = " Îð¸ë";
	int speed_ = 100;
	int result_ = 50;
	int id_ = 6;
};