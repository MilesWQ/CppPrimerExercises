#pragma once
#ifndef PERSON_H
#define PERSON_H
#include <string>

struct Person {
	std::string name;
	std::string address;
	std::string getName()const;
	std::string getAddress()const;
};

std::string Person::getName()const {
	return name;
}

std::string Person::getAddress()const {
	return address;
}
#endif