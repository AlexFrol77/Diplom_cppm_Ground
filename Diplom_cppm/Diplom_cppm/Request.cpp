#include"Request.h"

Request::Request() {}
Request::~Request() {}

bool Request::Print_Check_Welcom() {
	std::cout << "Добро пожаловать в гоночный симулятор!" << std::endl;
	std::cout << "1. Гонка для наземного транспорта" << std::endl;
	std::cout << "2. Гонка для воздушного транспорта" << std::endl;
	std::cout << "3. Гонка для наземного и воздушного транспорта" << std::endl;
	std::cout << "Выберите тип гонки: ";
	std::cin >> select_Race_;
	if (select_Race_ < 1 || select_Race_ > 3) {
		system("cls");
		std::cout << "Такой гонки пока нет!";
		Sleep(1000);
		return true;
	}
	else {
		return false;
	}
}

int Request::Get_Race() {
	return select_Race_;
}

bool Request::Set_Distance() {
	std::cout << "Укажите длину дистанции (должна быть положительная): ";
	std::cin >> select_Distance_;
	if (select_Distance_ > 0) {
		return false;
	}
	else {
		system("cls");
		std::cout << "Неверное значение!";
		Sleep(1000);
		return true;
	}
}

int Request::Get_Distance() {
	return select_Distance_;
}

bool Request::Alert() {
	std::cout << "Должно быть зарегистрировано хотя бы 2 транспортных средства" << std::endl;
	std::cout << "1. Зарегистрировать транспорт" << std::endl;
	std::cout << "Выбирите действие: ";
	std::cin >> select_Action_;
	if (select_Action_ == 1) {
		return false;
	}
	else {
		system("cls");
		std::cout << "Неверное значение!";
		Sleep(1000);
		return true;
	}
}

void Request::Print_Distance() {
	if (select_Race_ == 1) {
		std::cout << "Гонка для наземного транспорта. Расстояние: " << select_Distance_ << std::endl;
	}
	if (select_Race_ == 2) {
		std::cout << "Гонка для воздушного транспорта. Расстояние: " << select_Distance_ << std::endl;
	}
	if (select_Race_ == 3) {
		std::cout << "Гонка для воздушноого и наземного транспорта. Расстояние: " << select_Distance_ << std::endl;
	}
}

void Request::Print_All_Hero() {
	switch (select_Race_) {
	case 1:
		for (auto i : vecHeroGround) {
			std::cout << i << std::endl;
		}
		break;
	case 2:
		for (auto i : vecHeroAir) {
			std::cout << i << std::endl;
		}
		break;
	case 3:
		for (auto i : vecHeroAll) {
			std::cout << i << std::endl;
		}
		break;
	default:
		std::cout << " Пока нет такой гонки!" << std::endl;
		break;
	}
}

void Request::Set_Hero() {
	std::cin >> select_Hero_;
}

void Request::Print_Select_Hero_Name(Transport* ref) {
	ref->Print_Transport_Name();
	std::cout << " успешно зарегистрирован!" << std::endl;
}

void Request::Print_Replay_Hero_Name(std::vector <Transport*> ref) {
	for (auto i: ref)
		if (i->Get_ID() == select_Hero_) {
			i->Print_Transport_Name();
			std::cout << " уже зарегистрирован!" << std::endl;
			break;
		}
}

void Request::Print_Registr_Hero_Name(std::vector <Transport*> ref) {
	std::cout << "Зарегистрированные транспортные средства:";
	for (int i = 0; i != ref.size(); i++) {
		ref[i]->Print_Transport_Name();
	}
	std::cout << std::endl;
}

int Request::Get_Hero() {
	return select_Hero_;
}

bool Request::Check_Go_Race_Or_Registr() {
	std::cout << "1. Регистрация транспортного средства." << std::endl;
	std::cout << "2. Начать гонку." << std::endl;
	std::cout << "Выбирете действие:";
	std::cin >> select_Registr_Or_Race_;
	while (select_Registr_Or_Race_ < 1 || select_Registr_Or_Race_ > 2) {
		system("cls");
		std::cout << "Не верное значение!";
		Sleep(1000);
		system("cls");
		std::cout << "1. Регистрация транспортного средства." << std::endl;
		std::cout << "2. Начать гонку." << std::endl;
		std::cout << "Выбирете действие:";
		std::cin >> select_Registr_Or_Race_;
	}
	if (select_Registr_Or_Race_ == 1) {
		return false;
	}
	else {
		return true;
	}
}