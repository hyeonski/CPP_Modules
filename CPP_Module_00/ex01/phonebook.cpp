#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string login;
	std::string postalAddress;
	std::string emailAddress;
	std::string phoneNumber;
	std::string birthday;
	std::string favoriteMeal;
	std::string underwearColor;
	std::string darkestSecret;
public:
	void setContact(void);
    std::string getContact();
	void printContact(int index);
	void putValue(std::string value);
};

void Contact::setContact(void)
{
	std::cout << "ADD: first name > ";
	std::getline(std::cin, firstName);
	std::cout << "ADD: last name > ";
	std::getline(std::cin, lastName);
	std::cout << "ADD: nickname > ";
	std::getline(std::cin, nickname);
	std::cout << "ADD: login > ";
	std::getline(std::cin, login);
	std::cout << "ADD: postal address > ";
	std::getline(std::cin, postalAddress);
	std::cout << "ADD: email address > ";
	std::getline(std::cin, emailAddress);
	std::cout << "ADD: phone number > ";
	std::getline(std::cin, phoneNumber);
	std::cout << "ADD: birthday date > ";
	std::getline(std::cin, birthday);
	std::cout << "ADD: favorite meal > ";
	std::getline(std::cin, favoriteMeal);
	std::cout << "ADD: underwear color > ";
	std::getline(std::cin, underwearColor);
	std::cout << "ADD: darkest secret > ";
	std::getline(std::cin, darkestSecret);
}

void Contact::putValue(std::string value)
{
	if (value.length() > 10)
		std::cout << '|' << value.substr(0, 9) << '.';
	else
		std::cout << '|' << std::setw(10) << value;
}

void Contact::printContact(int index)
{
	std::cout << '|' << std::setw(10) << index;
	putValue(firstName);
	putValue(lastName);
	putValue(nickname);
	std::cout << '|' << std::endl;
} 


int main(void)
{
	std::string input;
	Contact contacts[8];
	int	i = 0;

	while (1)
	{
		std::cout << "command> ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			break ;
		if (input == "ADD")
		{
			contacts[i++].setContact();
		}
		else if (input == "SEARCH")
		{
			if (i == 0)
			{
				std::cout << "SEARCH: nothing to search" << std::endl;
				continue ;
			}
			std::cout << "+----------+----------+----------+----------+" << std::endl;
			std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
			std::cout << "+----------+----------+----------+----------+" << std::endl;
			for (int j = 0; j < i; j++)
				contacts[j].printContact(j);
			std::cout << "+----------+----------+----------+----------+" << std::endl;
			std::cout << "SEARCH: index > ";
			std::getline(std::cin, input);
		}
		
	}
}
