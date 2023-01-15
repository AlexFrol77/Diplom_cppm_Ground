#include<iostream>
#include<Windows.h>
#include<vector>
#include<algorithm>
#include"Request.h"
#include"Transport.h"
#include"Camel.h"
#include"Camel_Fast.h"
#include"Kentavr.h"
#include"Boots.h"
#include"Plane.h"
#include"Eagle.h"
#include"Broomstick.h"

int main(int argc, char** argv) {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	bool flag = true;

	std::string tempStr;
	int tempInt;
	int count = 0;

	Request request;
	Transport transport;
	Camel camel;
	Camel_Fast camel_fast;
	Kentavr kentavr;
	Boots boots;

	Plane plane;
	Eagle eagle;
	Broomstick broomstick;

	std::vector <Transport*> vecHeroRace;
	std::vector <int> vecTempSelectHero;

	do {
		system("cls");
		flag = request.Print_Check_Welcom();
	} while (flag);
	
	do {
		system("cls");
		flag = request.Set_Distance();
	} while (flag);

	do {
		system("cls");
		flag = request.Alert();
	} while (flag);
	system("cls");

	request.Print_Distance();
	request.Print_All_Hero();
	request.Set_Hero();
	system("cls");
	do {
		do {
			do {
				system("cls");
				flag = std::find(vecTempSelectHero.begin(), vecTempSelectHero.end(), request.Get_Hero()) != vecTempSelectHero.end();
				if (!flag) {
					if (request.Get_Race() == 1 || request.Get_Race() == 3) {
						switch (request.Get_Hero()) {
						case 1:
							vecHeroRace.push_back(&camel);
							request.Print_Select_Hero_Name(&camel);
							vecTempSelectHero.push_back(request.Get_Hero());
							break;
						case 2:
							vecHeroRace.push_back(&camel_fast);
							request.Print_Select_Hero_Name(&camel_fast);
							vecTempSelectHero.push_back(request.Get_Hero());
							break;
						case 3:
							vecHeroRace.push_back(&kentavr);
							request.Print_Select_Hero_Name(&kentavr);
							vecTempSelectHero.push_back(request.Get_Hero());
							break;
						case 4:
							vecHeroRace.push_back(&boots);
							request.Print_Select_Hero_Name(&boots);
							vecTempSelectHero.push_back(request.Get_Hero());
							break;
							if (request.Get_Race() == 1) {
								default:
									std::cout << "В этой гонке нет такого участника" << std::endl;
									break;
							}
						}
					}
					if (request.Get_Race() == 2 || request.Get_Race() == 3) {
						switch (request.Get_Hero()) {
						case 5:
							vecHeroRace.push_back(&plane);
							request.Print_Select_Hero_Name(&plane);
							vecTempSelectHero.push_back(request.Get_Hero());
							break;
						case 6:
							vecHeroRace.push_back(&eagle);
							request.Print_Select_Hero_Name(&eagle);
							vecTempSelectHero.push_back(request.Get_Hero());
							break;
						case 7:
							vecHeroRace.push_back(&broomstick);
							request.Print_Select_Hero_Name(&broomstick);
							vecTempSelectHero.push_back(request.Get_Hero());
							break;
						default:
							std::cout << "В этой гонке нет такого участника" << std::endl;
							break;
						}
					}
				}
				else {
					request.Print_Replay_Hero_Name(vecHeroRace);   // ??????
				}
				request.Print_Distance();
				request.Print_Registr_Hero_Name(vecHeroRace);
				request.Print_All_Hero();
				request.Set_Hero();
			} while (request.Get_Hero() != 0);
			if (vecHeroRace.size() < 2) {
				do {
					system("cls");
					flag = request.Alert();
				} while (flag);
				system("cls");
				flag = true;
			}
			else {
				flag = false;
			}
		} while (flag);
			system("cls");
			flag = request.Check_Go_Race_Or_Registr();
	} while (!flag);

	request.Print_Registr_Hero_Name(vecHeroRace);

	return 0;
};
