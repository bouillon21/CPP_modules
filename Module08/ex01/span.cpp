//
// Created by Cherlyn Shelli on 9/4/21.
//

#include "span.h"

Span::Span() {}

Span::~Span() {}

Span::Span(unsigned int n) : _size(n) {}

Span::Span(const Span &copy) : _container(copy._container), _size(copy._size) {
    *this = copy;
}

Span & Span::operator=(const Span &copy) {
    if (this != &copy) {
        this->_container.assign(copy._container.begin(), copy._container.end());
        this->_size = copy._size;
    }
    return *this;
}

Span::SpanException::SpanException(std::string error_message) : std::exception(), error_message(error_message) {}

Span::SpanException::~SpanException() throw() {}

const char *Span::SpanException::what() const throw() {
    return error_message.c_str();
}

void Span::addNumber(int number) {
    if (_size - _container.size() > 0) {
        _container.push_back(number);
        std::sort(_container.begin(), _container.end());
    }
    else
        throw Span::SpanException("Container is overflow. You cannot add more elements");
}

void Span::addNumber(int l_range, int r_range) {
    if (static_cast<unsigned long>(r_range - l_range + 1 )> _size - _container.size()) {
        throw Span::SpanException("Container is overflow. You cannot add more elements");
    }
    for (int i = l_range; i <= r_range; ++i) {
        _container.push_back(i);
    }
    std::sort(_container.begin(), _container.end());
}

void Span::addNumber(std::vector<int>::iterator l_range, std::vector<int>::iterator r_range) {
    if (static_cast<unsigned long>(r_range - l_range) > _size - _container.size()) {
        throw Span::SpanException("Container is overflow. You cannot add more elements");
    }
    _container.insert(_container.end(), l_range, r_range);
    std::sort(_container.begin(), _container.end());
}

int Span::shortestSpan() {
    if (_container.size() == 0 && _container.size() == 1) {
        throw Span::SpanException("Impossible to find a span ");
    }
    int min = INT_MAX;
    for (std::vector<int>::iterator i = _container.begin() + 1; i < _container.end(); ++i) {
        if (*i - *(i - 1) < min) {
            min = *i - *(i - 1);
        }
    }
    return min;
}

int Span::longestSpan() {
    if (_container.size() == 0 && _container.size() == 1) {
        throw Span::SpanException("Impossible to find a span ");
    }
    return *(_container.end() - 1) - *_container.begin();
}