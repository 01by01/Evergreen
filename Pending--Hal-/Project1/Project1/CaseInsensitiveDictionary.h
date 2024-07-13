//#pragma once
#ifndef CASE_INSENSITIVE_DICTIONARY_H
#define CASE_INSENSITIVE_DICTIONARY_H
#include <unordered_map>
#include <string>


class CaseInsensitiveDictionary

{
public:
	void addGreeting(const std::string greeting, const std::string& response);
	std::string getResponse(const std::string& greeting)const;

private:

	std::unordered_map <std::string, std::string> greetings;

};
#endif