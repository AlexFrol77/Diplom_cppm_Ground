#pragma once
#include"Transport.h"



class Eagle : public Transport {
public:
	Eagle();
	~Eagle() override;

	void Print_Transport_Race() override;
	void Print_Transport_Name() override;
	std::string Get_Name() override;
	int Get_ID() override;
	int Get_Result() override;
	void Go_Race(int dest) override;
private:
	std::string name_ = " Îð¸ë";
	int speed_ = 8;
	int result_ = 0;
	int id_ = 6;
};
