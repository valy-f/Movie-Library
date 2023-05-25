#include <iostream>
#include "MovieLibrary.hpp"
#include "Options.hpp"
using namespace std;


int main()
{
	cout << "Enter:\nadd     - to add movie\ndel     - to remove movie\nrating  - to see rating of certain movie\naverage - to see average rating of all movies\ntop     - to see highest rated movie\nview    - to see all movies\nexit    - to exit\n";
	string option;
	for (int i = 0; i < 20; i++) {
		cin >> option;
		if (option == "add") {
			add_movie();
		}
		else if (option == "del") {
			remove_movie();
		}
		else if (option == "rating") {
			get_rating();
		}
		else if (option == "average") {
			get_average_rating();
		}
		else if (option == "top") {
			get_highest_rated_movie();
		}
		else if (option == "view") {
			view();
		}
		else if (option == "exit") {
			break;
		}
	} return 0;
	
}
