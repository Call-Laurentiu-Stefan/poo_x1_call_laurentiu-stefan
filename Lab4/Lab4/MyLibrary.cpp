#include "MyLibrary.h"
#include <cstdio>
#include <cstdlib>     /* srand, rand */
#include <ctime>       /* time */
#include <fstream>
#include <cstdarg>

MyLibrary::MyLibrary(ostream& output_stream) :output_stream(output_stream)
{
    this->books_number = -1;
    this->books = nullptr;
}

MyLibrary::MyLibrary(ostream& output_stream, int books_number, int* books) :output_stream(output_stream),books_number(books_number)
{
    this->books = new int[books_number];
    for (int i = 0; i < books_number; i++) {
        this->books[i] = books[i];
    }
}

MyLibrary::MyLibrary(ostream& output_stream, int books_number, int min, int max) :output_stream(output_stream), books_number(books_number)
{
    this->books = new int[books_number];
    for (int i = 0; i < books_number; i++) {
        this->books[i] = rand() % max + min;
    }
}

MyLibrary::MyLibrary(ostream& output_stream, const char* books_values) :output_stream(output_stream)
{

}

MyLibrary::MyLibrary(ostream& output_stream, int books_count, ...) :output_stream(output_stream), books_number(books_count)
{
    this->books = new int[books_number];
    va_list varg;
    va_start(varg, books_count);
    for (int i = 0; i < books_count; i++) {
        books[i] = va_arg(varg, int);
    }
    va_end(varg);

}

void MyLibrary::print_books()
{
    output_stream << "Found " << books_number << " books" << endl;
    for (int i = 0; i < books_number; i++)
        output_stream << "Book: " << i << " " << books[i] << endl;
}

MyLibrary::~MyLibrary()
{
    delete[] books;
}

void MyLibrary::update_books_id_by_index(int book_index, int book_id)
{
    if (book_index < books_number)
        this->books[book_index] = book_id;
}