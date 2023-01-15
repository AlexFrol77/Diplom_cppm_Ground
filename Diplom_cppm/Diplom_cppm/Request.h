#pragma once
#include<iostream>
#include<Windows.h>
#include<string>
#include<vector>
#include<algorithm>
#include"Transport.h"
#include"Camel.h"
#include"Camel_Fast.h"
#include"Kentavr.h"
#include"Boots.h"

class Request {
public:
	Request();
	~Request();

	bool Print_Check_Welcom();
	int Get_Race();

	void Print_Distance();
	bool Set_Distance();
	int Get_Distance();
	
	bool Alert();

	void Print_All_Hero();
	void Set_Hero();
	void Print_Select_Hero_Name(Transport* ref);
	void Print_Replay_Hero_Name(Transport* ref);
	void Print_Registr_Hero_Name(std::vector <Transport*> ref);
	int Get_Hero();

private:
	
	int	select_Race_,
		select_Distance_,
		select_Action_,
		select_Hero_;

	bool flag;

	std::vector <int> vecCheckTemp;
	std::vector <Transport> vecHeroReg;
	std::vector <std::string> vecHeroAll {
							  "1. ������� ",
							  "2. ������� - ��������� ",
							  "3. ������� ",
							  "4. ������� - ��������� ",
							  "5. ���� - ������ ",
							  "6. ��� ",
							  "7. ����� ",
							  "0. ��������� ����������� ",
							  "�������� ��������� ��� 0 ��� ��������� �������� �����������: " };
	
	std::vector <std::string> vecHeroGround{
							  "1. ������� ",
							  "2. ������� - ��������� ",
							  "3. ������� ",
							  "4. ������� - ��������� ",
							  "0. ��������� ����������� ",
							  "�������� ��������� ��� 0 ��� ��������� �������� �����������: " };

	std::vector <std::string> vecHeroAir{
							  "5. ���� - ������ ",
							  "6. ��� ",
							  "7. ����� ",
							  "0. ��������� ����������� ",
							  "�������� ��������� ��� 0 ��� ��������� �������� �����������: " };
							  
	std::vector <Transport> arrHeroRace;
};
