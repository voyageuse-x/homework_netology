#pragma once
//#include <exception>
#include <stdexcept>

class FigureException : public std::domain_error {
public:
    explicit FigureException(const std::string& message);
};

