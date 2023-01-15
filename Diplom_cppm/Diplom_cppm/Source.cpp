void Request::PrintHero_ground() {
	for (int i = 0; i < 4; i++) {
		std::cout << arrHero[i] << std::endl;
	}
}
void Request::PrintHero_air() {
	for (int i = 3; i < 8; i++) {
		std::cout << arrHero[i] << std::endl;
	}
}
void Request::PrintHero() {
	for (int i = 0; i < size(arrHero); i++) {
		std::cout << arrHero[i] << std::endl;
	}
}
void Request::PrintRace_ground(int distance) {
	std::cout << "Гонка для наземного транспорта. Расстояние: " << distance << std::endl;
}
void Request::PrintRace_air(int distance) {
	std::cout << "Гонка для воздушного транспорта. Расстояние: " << distance << std::endl;
}
void Request::PrintRace(int distance) {
	std::cout << "Гонка для наземного и воздушного транспорта. Расстояние: " << distance << std::endl;
}
std::string Request::FindHero() {
	std::string tempStr;
	for (int i = 0; i < size(tempArrHero); i++) {
		if (temp_Hero == tempArrHero[i]) {
			tempStr = tempArrHero[i];
			return tempStr;
		}
	}
}