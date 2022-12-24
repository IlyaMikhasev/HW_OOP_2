#include "TelephoneBook.h"
TelephoneBook::TelephoneBook(const std::string& name, const std::string& famaly, const std::string& patr, int numH, int numP, int numW) :
	_name(name), _famaly(famaly), _patronymic(patr), _HomeNumber(numH), _phoneNumber(numP), _workNumber(numW) {}
TelephoneBook::TelephoneBook(const std::string& name, int number):_name(name),_phoneNumber(number) {}
TelephoneBook::TelephoneBook() :_name("name"), _famaly("famaly"), _patronymic("patr"), _HomeNumber(0), _phoneNumber(111111), _workNumber(111111) {}

const std::string& TelephoneBook::getName() {
	return _name;
}
void TelephoneBook::setName(const std::string& name) {
	_name = name;
}
const std::string& TelephoneBook::getFamaly() {
	return _famaly;
}
void TelephoneBook::setFamaly(const std::string& famaly) {
	_famaly = famaly;
}
const std::string& TelephoneBook::getPatr() {
	return _patronymic;
}
void TelephoneBook::setPatr(const std::string& patr) {
	_patronymic = patr;
}
void TelephoneBook::setPnumber(int num){
	_phoneNumber = num;
}
int TelephoneBook::getPnum() {
	return _phoneNumber;
}
void TelephoneBook::setWnumber(int num) {
	_workNumber = num;
}
int TelephoneBook::getWnum() {
	return _workNumber;
}
void TelephoneBook::setHnumber(int num) {
	_HomeNumber = num;
}
int TelephoneBook::getHnum() {
	return _HomeNumber;
}


void add_abonent(TelephoneBook arr[], const int length)
{
	std::string name;
	int number, index;
	for (int i = 0; i < length; ) {
		if (arr[i].getName() != "name") {
			i++;
		}
		else 
		{
			index = i;
			std::cout << "Введите имя -> ";
			std::cin >> name;
			std::cout << "Введите номер телефона -> ";
			std::cin >> number;
			arr[index].setName(name);
			arr[index].setPnumber(number);
			break;
		}
	}
	std::cout << "Книга заполнена!\n";
}

void Show_mass_abonent(TelephoneBook arr[], const int length){
	for (size_t i = 0; i < length; i++)	{
		std::cout <<i+1 << ". Имя\t" << arr[i].getName() << "\tНомер: " << arr[i].getPnum() << '\n';
	}
	system("pause");
}

int retNumAbonent(std::string& name, TelephoneBook arr[], const int length){
	for (int i = 0; i < length; i++)
		if(name==arr[i].getName())
			return arr[i].getPnum();
}

void del_abonent(TelephoneBook arr[], const int length){
	int index;
	Show_mass_abonent(arr, length);
	std::cout << "Выберите абонента которого хотите удалить ->";
	std::cin >> index;
	for (int i = index-1; i < length-1; i++){
		arr[i] = arr[i + 1];
	}
}

int actionNumber(){
	int n=0;
	std::cout << "Выберите действие :\n";
	std::cout << "1. Просмотр телефонной книги\n";
	std::cout << "2. Добавление нового контакта\n";
	std::cout << "3. Удаление контакта\n";
	std::cout << "0. Завершить работу\n";
	std::cin >> n;
	return n;
}
