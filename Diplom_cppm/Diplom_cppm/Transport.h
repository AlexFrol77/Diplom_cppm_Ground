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
	virtual int Get_Result();
	virtual int Get_ID();
	virtual std::string Get_Name();
	virtual bool operator<(Transport* r_op);
	virtual bool operator>(Transport* r_op);
private:
	int distance_,
		speed_ = 0,
		result_ = 0,
		id_ = 0;
	std::string name_ = "Транспорт";
};
