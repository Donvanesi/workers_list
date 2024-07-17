#include <iostream>
#include <string>
#include <map>
using namespace std;

struct employee
{
	char etype;
	struct salary;
	struct date;
};
struct date
{
	int day;
	int month;
	int year;
};
struct salary
{
	int number;
	int salary;
};

enum etype { laborer = 1 , secretary, manager, accountant, executive, researcher };

int main()
{
	int x = 1;
	string delimiter = "/";
	string ch;
	char symbol;
	int pos = 0;
	int count = 0;
	string token;
	setlocale(LC_ALL, "Russian");
	salary salary1;
	
	
	cout << "Введите номер сотрудника : ";
	cin >> salary1.number;
	cout << "Введите зарплату сотрудника";
	cin >> salary1.salary;
	cout << "Введите дату приема сотруднкиа на работу в формате XX/XX/XX : ";
	date date1;
	cin >> ch;
	while ((pos = ch.find(delimiter)))

	{
		if (pos != string::npos)
		{
			token = ch.substr(0, pos);
			if (count == 0)
				date1.day = atoi(token.c_str());
			else
				date1.month = atoi(token.c_str());
				
			count++;
			ch.erase(0, pos + delimiter.length());
		}

		else
		{
			date1.year = atoi(ch.c_str());
			break;
		}
	}

	
	etype person1;
	map <int, string> job_title;
	cout << "Введите первую букву должности сотрудника : ";
	cin >> symbol;
	switch (symbol)
	{
	case 'L':
		person1 = laborer;
		job_title.insert(pair<int, string>(person1, "laborer"));
		break;
	case 'S':
		person1 = secretary;
		job_title.insert(pair<int, string>(person1, "secretary"));
		break;
	case 'M':
		person1 = manager;
		job_title.insert(pair<int, string>(person1, "manager"));
		break;
	case 'A':
		person1 = accountant;
		job_title.insert(pair<int, string>(person1, "accountant"));
		break;
	case 'E':
		person1 = executive;
		job_title.insert(pair<int, string>(person1, "executive"));
		break;
	case 'R':
		person1 = researcher;
		job_title.insert(pair<int, string>(person1, "researcher"));
		break;
	}
	for (auto& line : job_title)
	{
		cout << line.second << endl;
	}
	
}








