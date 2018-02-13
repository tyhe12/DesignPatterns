// SingletonPattern.cpp : Defines the entry point for the console application.
//
// Singleton
// A component which is instantiated only once

#include "stdafx.h"
#include "SingletonDatabase.h"
#include <iostream>

using namespace std;
int main()
{
	auto name = SingletonDatabase::get().get_name();
	cout << name << endl;

	system("pause");
    return 0;
}

