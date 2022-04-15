#include <iostream>
#include <string>

struct Data {
	std::string name;
	std::string nickname;
	std::string campus;
	int age;
};

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}

std::ostream& operator<<(std::ostream& out, Data& data) {
	out << "Имя: " << data.name << std::endl;
	out << "Никнейм: " << data.nickname << std::endl;
	out << "Кампус: " << data.campus << std::endl;
	out << "Возраст: " << data.age << std::endl; 
	return out;
}

int main() {
	Data data;
	Data* ptrData;
	std::cout << "Введите ваше имя\n";
	std::cin >> data.name;
	std::cout << "Введите ваш никнейм\n";
	std::cin >> data.nickname;
	std::cout << "Введите кампус Echole 42\n";
	std::cin >> data.campus;
	std::cout << "Введите ваш возраст\n";
	std::cin >> data.age;
	
	std::cout << std::endl << "Data before serialize\n";
	std::cout << data;
	uintptr_t serializeData = serialize(&data);
	ptrData = deserialize(serializeData);
	std::cout << std::endl << "Data after deserialize\n";
	std::cout << *ptrData;
}