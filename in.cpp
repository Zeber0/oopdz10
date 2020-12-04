#include "in.h"

listovyi::listovyi()
{
}

listovyi::listovyi(const listovyi& obj)
{
}

base* listovyi::copy()
{
	return new listovyi(*this);
}

void listovyi::set(std::wstring *str)
{
	l.push_back(str);
}

void listovyi::get()
{
	for (std::list<std::wstring*>::iterator i = l.begin(); i != l.end(); i++) {
		std::cout << *i << std::endl;
	}
}



listovyi::~listovyi()
{
}

vectornyi::vectornyi()
{
}

vectornyi::vectornyi(const vectornyi& obj)
{
}

base* vectornyi::copy()
{
	return new vectornyi(*this);
}

void vectornyi::set(std::wstring *str)
{
	v.push_back(str);
}

void vectornyi::get()
{
	for (std::vector<std::wstring*>::iterator i = v.begin(); i != v.end(); i++) {
		std::cout << *i << std::endl;
	}
}



vectornyi::~vectornyi()
{
}

dequchnii::dequchnii()
{
}

dequchnii::dequchnii(const dequchnii& obj)
{
}

base* dequchnii::copy()
{
	return new dequchnii(*this);
}

void dequchnii::set(std::wstring *str)
{
	d.push_back(str);
}

void dequchnii::get()
{
	for (std::deque<std::wstring*>::iterator i = d.begin(); i != d.end(); i++) {
		std::cout << *i << std::endl;
	}
}



dequchnii::~dequchnii()
{
}


