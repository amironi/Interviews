// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


/******************************************************************************

Online C++ Compiler.
Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <list>
#include <sstream>
#include <windows.h>


using namespace std;


extern void log();


set<string> getAllVetrexs(map<string, set<string>> edeges) {
	set<string> ret;

	for (auto e : edeges) {
		ret.insert(e.first);
		for (auto d : e.second)
			ret.insert(d);
	}

	return ret;
}

list<string> topological_sorted;

void topological_sort(set<string> vetrex, map<string, set<string>> edeges) {

	static map<string, int> vetrexColor;

	for (auto v : vetrex) {
		
		if (vetrexColor[v]++ == 0) {

			topological_sort(edeges[v], edeges);

			topological_sorted.push_front(v);
		}
	}
}

int main(int argc, char * argv[])
{
	log();
	
	map<string, set<string>> edeges;

	/*
	edeges["amir"].insert("nava");
	edeges["ofer"].insert("gilad");
	edeges["dad"].insert("Eden");
	edeges["dad"].insert("ofer");
	edeges["gilad"].insert("yuval");
	edeges["nava"].insert("Noya");
	edeges["yuval"].insert("amir");
	edeges["Eden"].insert("Noya");
	

	Einstein
		Feynmann
		Gell - Mann
		Thorne
		Lorentz
		Planck
		Hilbert
		Poincare
		Noether
		*/
	edeges["Einstein"].insert("Feynmann");
	edeges["Feynmann"].insert("Gell - Mann");
	edeges["Gell - Mann"].insert("Thorne");
	edeges["Einstein"].insert("Lorentz");
	edeges["Lorentz"].insert("Planck");
	edeges["Hilbert"].insert("Noether");
	edeges["Poincare"].insert("Noether");
	edeges["Einstein"].insert("Poincare");



	topological_sort(getAllVetrexs(edeges), edeges);

	for (auto v : topological_sorted) {
		cout << v << " ";
		OutputDebugStringA((v + "\n" ).c_str());
	}
	
	cout << "asdasv" << " ";
	return 0;
}






