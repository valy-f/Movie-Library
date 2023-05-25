#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include "MovieLibrary.hpp"
using namespace std;

MovieLibrary m;
map<string, double> movies;
void add_movie() {
	string title;
	double rating;
	cout << "Enter the title of the movie: ";
	cin.ignore();
	getline(cin, title);
	cout << "Enter the rating of the movie: ";
	cin >> rating;
	m.addMovie(title, rating);
}
void remove_movie() {
	string title;
	cout << "Enter the title of the movie you want to delete: ";
	cin >> title;
	m.removeMovie(title);
}
void get_rating() {
	string title;
	cout << "Enter the title of the movie to see its rating: ";
	cin >> title;
	m.getRating(title);
}
void get_average_rating() {
	m.getAverageRating();
}
void get_highest_rated_movie() {
	m.getHighestRatedMovie();
}
void view() {
	m.viewMovies();
}