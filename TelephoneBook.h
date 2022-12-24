#pragma once
#include <string>
#include <iostream>
class TelephoneBook
{
public:
	TelephoneBook(const std::string& name, const std::string& famaly, const std::string& patr, int numH, int numP, int numW);
	TelephoneBook(const std::string& name, int number);
	TelephoneBook();

	const std::string& getName();
	void setName(const std::string& name);
	const std::string& getFamaly();
	void setFamaly(const std::string& famaly);
	const std::string& getPatr();
	void setPatr(const std::string& patr);
	int getPnum();
	void setPnumber(int num);
	int getWnum();
	void setWnumber(int num);
	int getHnum();
	void setHnumber(int num);	

private:
	std::string _name;
	std::string _famaly;
	std::string _patronymic;
	int _HomeNumber;
	int _phoneNumber;
	int _workNumber;
};

void add_abonent(TelephoneBook arr[], const int length);
void Show_mass_abonent(TelephoneBook arr[], const int length);
int retNumAbonent(std::string& name, TelephoneBook arr[], const int length);
void del_abonent(TelephoneBook arr[], const int length);
int actionNumber();