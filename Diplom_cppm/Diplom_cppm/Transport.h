#pragma once
#include<iostream>

class Transport {
public:
	Transport();

	virtual ~Transport();

	void Set_Distance(int distance);
	virtual void Print_Transport_Race();
	virtual void Print_Transport_Name();

	int Get_Distance();
	int Get_Speed();
	int Get_Result();
	
	virtual std::string Get_Name();

private:
	int distance_,
		speed_ = 0,
		result_ = 10;
	std::string name_ = "Транспорт";
};
