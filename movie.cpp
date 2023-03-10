#include "movie.h"

using namespace std;

Movie::Movie()
{
}

Movie::Movie(char type, int stock, string director, string title, int year, char mediaType)
{
    this->type = type;
    this->stock = stock;
    this->director = director;
    this->title = title;
    this->year = year;
    this->mediaType = mediaType;
}

// Movie::Movie()
// {
// }

// Movie::Movie(char type, int stock, string directorFirstName, string directorLastName, string title, int year)
// {
//     this->type = type;
//     this->stock = stock;
//     this->director.fname = directorFirstName;
//     this->director.lname = directorLastName;
//     this->title = title;
//     this->year = year;
// }

void Movie::display(int spaces)
{
    cout << "wrong method";
}

void Movie::setStock(int stock)
{
    this->stock = stock;
}

int Movie::getStock()
{
    return this->stock;
}

void Movie::incStockBy(int s)
{
    this->stock += s;
}

char Movie::getType()
{
    return this->type;
}

void Movie::setTitle(string title)
{
    this->title = title;
}

string Movie::getTitle()
{
    return this->title;
}

void Movie::setYear(int year)
{
    this->year = year;
}

int Movie::getYear()
{
    return this->year;
}

string Movie::getDirectorName()
{
    return this->director;
}

bool Movie::operator==(const Movie &movie) const
{
    return (this->title == movie.title &&
            this->director == movie.director &&
            this->mediaType == movie.mediaType &&
            this->year == movie.year);
}

bool Movie::operator<=(const Movie &movie) const
{
    return (this->title < movie.title || (this->operator==(movie)));
}

bool Movie::operator>=(const Movie &movie) const
{
    return (this->title > movie.title || (this->operator==(movie)));
}

bool Movie::operator<(const Movie &movie) const
{
    return this->title < movie.title;
}

bool Movie::operator>(const Movie &movie) const
{
    return this->title > movie.title;
}