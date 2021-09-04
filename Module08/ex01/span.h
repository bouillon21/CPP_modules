//
// Created by Cherlyn Shelli on 9/4/21.
//

#ifndef PR____SPAN_H
#define PR____SPAN_H

#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>

class Span {

private:
    std::vector<int> _container;
    unsigned int _size; // capacity
    Span();

public:
    Span(unsigned int n);
    Span(const Span &copy);
    Span &operator=(const Span &copy);
    ~Span();

    void addNumber(int number);
    void addNumber(int l_range, int r_range);
    void addNumber(std::vector<int>::iterator l_range, std::vector<int>::iterator r_range);
    int shortestSpan();
    int longestSpan();

    class	SpanException : public std::exception {
    private:
        std::string error_message;
    public:
        SpanException(std::string error_message);
        virtual ~SpanException() throw ();
        virtual const char* what() const throw();
    };

};


#endif //PR____SPAN_H
