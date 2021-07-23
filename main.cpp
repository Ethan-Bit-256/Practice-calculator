#include <iostream>
#include <string>

int main()
{
	double Fig_1;
	double Fig_2;
	std::cout << "First figure goes here=> ";
	std::cin >> Fig_1;
	std::cout << "Second figure goes here=> ";
	std::cin >> Fig_2;
	std::cout << "If you add " << Fig_1 << " by " << Fig_2 << " your result will be " << Fig_1 + Fig_2 << "\n";
	std::cout << "If you subtract " << Fig_1 << " by " << Fig_2 << " your result will be " << Fig_1 - Fig_2 << "\n";
	std::cout << "If you multiply " << Fig_1 << " by " << Fig_2 << " your result will be " << Fig_1 * Fig_2 << "\n";
	std::cout << "If you divide " << Fig_1 << " by " << Fig_2 << " your result will be " << Fig_1 / Fig_2 << "\n";
	return 0;
}