// Komposisi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
using namespace std;

#include "Jantung.h"
#include "Manusia.h"

int main() {
	manusia* varManusia = new manusia("Nanda");
	delete varManusia;
	return 0;
}