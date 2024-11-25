#ifndef BOOK
#define BOOK
#include <iostream>
#include <string>
#include "author.cpp"
#include "chapter.cpp"
using namespace std;
class Book{
    private:
    string title;
    Author author;
    int publication Year;
    vector<Chapter> chapters;
    public:
    Book(): title(""), author (Author()), publicationYear(0), chapters(){};
    Book(string bookTitle, Author bookAuthor, int year, vector<Chapter>&bookChapters)
    :title(bookTitle),author (bookAuthor), publicationYear(year), chapters(bookChapters){};
};
#endif