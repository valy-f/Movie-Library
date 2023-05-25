#pragma once
#include <iostream>
#include <vector>
#include <map>
#include <numeric>
using namespace std;

class MovieLibrary {
public:
	string title;
	double rating;
	map<string, double> movies;
	
	void addMovie(const string& title, double rating) {
		this->title = title;
		this->rating = rating;
		movies.insert({ title, rating });
		cout << "Movie is added.\n";
	}
	void removeMovie(const string& title) {
		this->title = title;
		if (title == title) {
			movies.erase(title);
			//save?
			cout << "Movie is deleted.\n";
		}
		else {
			cout << "Movie is not found\n";
		}
		
	}
	void getRating(const string& title) {
		this->title = title;
		if (title == title) {
			cout << movies.at(title) << endl;
			//save?
		}
	}
	void getAverageRating() {
		double total_sum = accumulate(movies.begin(), movies.end(), 0,
			[](const int prev_sum, const pair<string, int>& entry) {
				return prev_sum + entry.second;
			});
		double amount_of_movies = movies.size();
		cout << "Average rating of all movies is: " << total_sum / amount_of_movies << endl;
	}
	void getHighestRatedMovie() {
		pair<string, double> maxValuePair;
		double maxValue = INT_MIN;
		for (const auto& entry : movies)
		{
			if (maxValue < entry.second)
			{
				maxValue = entry.second;
				maxValuePair = entry;
			}
		}
		cout << "Movie '" << maxValuePair.first << "' has highest rating: " << movies[maxValuePair.first] << endl;
	}
	void viewMovies() {
		cout << ":: MOVIES ::\n";
		cout << "TITLE\t        RATING\n";
		for (auto itr = movies.begin(); itr != movies.end(); ++itr) {
			cout << itr->first << '\t' << itr->second << '\n'<< endl;
		}
	}
};