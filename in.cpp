#include "in.h"

listovyi::listovyi()
{
}

listovyi::listovyi(const listovyi& obj)
{
	for (std::list<std::wstring*>::const_iterator it = obj.db.begin(); it != obj.db.end(); it++)
	{
		set(**it);
	}
}

base* listovyi::copy()
{
	return new listovyi(*this);
}



void listovyi::set(std::wstring str)
{
	db.push_back(new std::wstring(str));
}

std::wstring listovyi::get()
{
	static int sdvig = 0;
	std::list<std::wstring*>::iterator i = db.begin();
	std::advance(i, sdvig);
	sdvig++;
	return **i;
}

void listovyi::clone(base& dbt)
{
	set(dbt.get());
}

void listovyi::write()
{
	for (std::list<std::wstring*>::iterator i = db.begin(); i != db.end(); i++) {
		std::wcout <<**i<<std::endl;
	}
}

std::list<std::wstring*>::iterator listovyi::geti()
{
	std::list<std::wstring*>::iterator i = db.begin();
	return i;
}




listovyi::~listovyi()
{
	for (std::list<std::wstring*>::iterator i = db.begin(); i != db.end(); i++) delete *i;
}

vectornyi::vectornyi()
{
}

vectornyi::vectornyi(const vectornyi& obj)
{
	for (std::vector<std::wstring*>::const_iterator it = obj.db.begin(); it != obj.db.end(); it++)
	{

		set(**it);
	}
}

base* vectornyi::copy()
{
	return new vectornyi(*this);
}



void vectornyi::set(std::wstring str)
{
	db.push_back(new std::wstring(str));
}

std::wstring vectornyi::get()
{
	static int sdvig=0;
	std::vector<std::wstring*>::iterator i = db.begin();
	std::advance(i, sdvig);
	sdvig++;
	return **i;
}

void vectornyi::clone(base& dbt)
{
		set(dbt.get());
}

void vectornyi::write()
{
	for (std::vector<std::wstring*>::iterator i = db.begin(); i != db.end(); i++) {
		std::wcout << **i<<std::endl;
	}
}


std::vector<std::wstring*>::iterator vectornyi::geti()
{
	std::vector<std::wstring*>::iterator i = db.begin();
	return i;
}




vectornyi::~vectornyi()
{
	for (std::vector<std::wstring*>::iterator i = db.begin(); i != db.end(); i++) delete* i;
}

dequchnii::dequchnii()
{
}

dequchnii::dequchnii(const dequchnii& obj)
{
	for (std::deque<std::wstring*>::const_iterator it = obj.db.begin(); it != obj.db.end(); it++)
	{
		set(**it);
	}
}

base* dequchnii::copy()
{
	return new dequchnii(*this);
}

void dequchnii::set(std::wstring str)
{
	db.push_back(new std::wstring(str));
}

std::wstring dequchnii::get()
{
	static int sdvig = 0;
	std::deque<std::wstring*>::iterator i = db.begin();
	std::advance(i, sdvig);
	sdvig++;
	return **i;
}

void dequchnii::clone( base& dbt)
{
	set(dbt.get());
}

void dequchnii::write()
{
	for(std::deque<std::wstring*>::iterator i = db.begin(); i != db.end(); i++) {
		std::wcout << **i<<std::endl;
}
}



std::deque<std::wstring*>::iterator dequchnii::geti()
{
	std::deque<std::wstring*>::iterator i = db.begin();
	return i;
}





dequchnii::~dequchnii()
{
	for (std::deque<std::wstring*>::iterator i = db.begin(); i != db.end(); i++) delete* i;
}

base::base()
{
}

base::~base()
{
}
