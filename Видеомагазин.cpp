#include <iostream>
#include <string>
#include <vector>
#include <limits>

using namespace std;

struct VideoShop {
	string title;
	string director;
	string genre;
	double rating;
	int price;
};

// Создает структуры с данными
vector<VideoShop> createVideoShop() {
	vector<VideoShop> movies = {
		{ "Interstellar", "Christopher Nolan", "Adventures", 8.7, 2230 },
		{ "Downhill", "Anthony Russo and Joe Russo", "Drama", 6.6, 500 },
		{ "The Hobbit", "Peter Jackson", "Epic Fantasy", 8.1, 2826 }
	};
	return movies;
}

// Выводит данные
void printVideoShop(const vector<VideoShop>& movies) {
	for (int i = 0; i < movies.size(); i++) {
		cout << "Film " << (i + 1) << ":" << endl;
		cout << " Title: " << movies[i].title << endl;
		cout << " Director: " << movies[i].director << endl;
		cout << " Genre: " << movies[i].genre << endl;
		cout << " Popularity rating: " << movies[i].rating << endl;
		cout << " Price: " << movies[i].price << endl;
	}
}

void addMovie(vector<VideoShop>& movies) {
	VideoShop newMovie;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << "Enter the name of the movie to add: ";
	getline(cin, newMovie.title);

	cout << "Enter the director to add: ";
	getline(cin, newMovie.director);

	cout << "Enter the genre to add: ";
	getline(cin, newMovie.genre);

	cout << "Enter the rating of the movie to add: ";
	cin >> newMovie.rating;

	cout << "Enter the movie price to add: ";
	cin >> newMovie.price;

	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	movies.push_back(newMovie);

	cout << endl;
	cout << "Film " << newMovie.title << " added";
	cout << endl;
}

// Ищет фильм по названию
void searchForTitle(vector<VideoShop>& movies) {
	
	cout << "Enter the movie name: ";
	
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	string search;
	getline(cin, search);

	for (auto& movie : movies) {
		if (movie.title == search) {
			cout << "A movie has been found" << endl;
			cout << " Title: " << movie.title << endl;
			cout << " Director: " << movie.director << endl;
			cout << " Genre: " << movie.genre << endl;
			cout << " Popularity rating: " << movie.rating << endl;
			cout << " Price: " << movie.price << endl;
			return;
		}
	}
	cout << "Film " << search << " not found" << endl;
}

// Поиск фильма по жанру
void searchByGenre(vector<VideoShop>& movies) {
	cout << "Enter the genre: ";

	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	string genre;
	getline(cin, genre);

	bool found = false;
	for (auto& movie : movies) {
		if (movie.genre == genre) {
			found = true;
			cout << endl;
			cout << "A movie has been found" << endl;
			cout << " Title: " << movie.title << endl;
			cout << " Director: " << movie.director << endl;
			cout << " Genre: " << movie.genre << endl;
			cout << " Popularity rating: " << movie.rating << endl;
			cout << " Price: " << movie.price << endl;
		}
		else if (found = false) {
			cout << "Film " << genre << " not found" << endl;
		}
	}
}

// Поиск фильма по режиссеру
void searchByDirector(vector<VideoShop>& movies) {
	cout << "Enter the director: ";

	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	string director;
	getline(cin, director);

	for (auto& movie : movies) {
		if (movie.director == director) {
			cout << "A movie has been found" << endl;
			cout << " Title: " << movie.title << endl;
			cout << " Director: " << movie.director << endl;
			cout << " Genre: " << movie.genre << endl;
			cout << " Popularity rating: " << movie.rating << endl;
			cout << " Price: " << movie.price << endl;
			return;
		}
	}
	cout << "Film " << director << " not found" << endl;
}

// Самый популярный фильм в жанре
void theMostPopular(vector<VideoShop>& movies) {
	cout << "Enter the genre: ";

	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	string genre;
	getline(cin, genre);

	bool founded = false;
	double MaxRating = 0.0;
	const VideoShop* best = nullptr;

	for (auto& movie : movies) {
		if (movie.genre == genre) {
			founded = true;
			if (movie.rating > MaxRating) {
				MaxRating = movie.rating;
				best = &movie;
			}
		}
	}
	
	if (founded) {
		cout << "The most popular film in Genre " << genre << " found" << endl;
		cout << " Title: " << best->title << endl;
		cout << " Director: " << best->director << endl;
		cout << " Genre: " << best->genre << endl;
		cout << " Popularity rating: " << best->rating << endl;
		cout << " Price: " << best->price << endl;
	}
	else {
		cout << "Film in Genre " << genre << " not found" << endl;
	}
}

// Выбор пользователя
void choice(vector<VideoShop>& movies) {
	int ch;
	do {
		cout << endl;
		cout << "You are in a video store, choose a service:\n";
		cout << "1. Movie Title Search\n";
		cout << "2. Search by genre\n";
		cout << "3. Search by director\n";
		cout << "4. The most popular movie in the genre\n";
		cout << "5. Showing all entries\n";
		cout << "6. Adding new movie\n";
		cout << "0. To close\n";
		cout << "Your choice: ";
		cin >> ch;
		switch (ch) {
		case 1:
			cout << endl;
			searchForTitle(movies);
			break;
		case 2:
			cout << endl;
			searchByGenre(movies);
			break;
		case 3:
			cout << endl;
			searchByDirector(movies);
			break;
		case 4:
			cout << endl;
			theMostPopular(movies);
			break;
		case 5:
			cout << endl;
			printVideoShop(movies);
			break;
		case 6:
			cout << endl;
			addMovie(movies);
			break;
		case 0:
			cout << endl;
			cout << "Thank you, goodbye!" << endl;
			break;
		default:
			cout << endl;
			cout << "Unknown operation" << endl;
			break;
		}
	} 
	while (ch != 0);
}


int main() {
	setlocale(LC_ALL, "ru");

	vector<VideoShop> movies = createVideoShop();

	choice(movies);
	return 0;
}