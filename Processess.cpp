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

void findMaxRange(list<pair<int, int>>& timesList)
{

	map<map<int, int>::iterator, int> RoomMap;

	map<int, int> startMap;
	map<int, int> endMap;

	for (auto i : timesList) {
		
		startMap[i.first]++;
		startMap[i.second];

		endMap[i.first];
		endMap[i.second]++;
	}

	int counter = 0;
	int max_counter = 0;
	pair<int, int> max_range;

	auto s = startMap.begin(); 
	auto e = endMap.begin();
	
	list<int> room;
	
	while (s != startMap.end()) {

		for (auto i = 0; i < s->second; i++) {
			if ( counter++ == max_counter  ) {
				max_range.first = s->first;
				max_counter = counter;
			}

//			cout << r++;
		}

		for (auto i = 0; i < e->second; i++) {
			if (counter-- == max_counter) {
				max_range.second = e->first;
			}

		}

		s++; e++;
	}

	cout << "Max counter: " << max_counter << endl;
	cout << "Range Start: " << max_range.first << endl;
	cout << "Range end: " << max_range.second << endl;
}

class Room;

map<int, list<Room*> > endTimeRoom;

list<Room*> roomsAssign;

void assignRoom(
	list<pair<int, int>>::iterator start, 
	list<pair<int, int>>::iterator end, 
	list<Room*>::iterator roomsStart,
	list<Room*>::iterator roomsEnd)
{
	if (start == end) return;

	if (roomsStart != roomsEnd) {
	
		endTimeRoom[start->second].push_back(*roomsStart);

		roomsAssign.push_back(*roomsStart);

		assignRoom(++start, end, ++roomsStart, roomsEnd);

		return;
	}

	if (endTimeRoom.size() == 0) return;

	if (start->first < endTimeRoom.begin()->first)
		return;


	list<Room*> temp = endTimeRoom.begin()->second;

	endTimeRoom.erase(endTimeRoom.begin());

	assignRoom(
		start, 
		end, 
		temp.begin(),
		temp.end());

}


extern void log();

int main(int argc, char * argv[])
{
	log();
	
	list<pair<int, int>> timesList;
	//9:00----10:00
	//  9:30---------------------------- 14:00
	//              11:00------13:00
	//              11:00--------------------15:00

	//1100 = 11:00

	timesList.push_back(pair<int, int>(900, 1000));
	timesList.push_back(pair<int, int>(930, 1400));
	timesList.push_back(pair<int, int>(1100, 1300));
	timesList.push_back(pair<int, int>(1100, 1500));
	timesList.push_back(pair<int, int>(1200, 1500));
	timesList.push_back(pair<int, int>(1330, 1500));

	findMaxRange(timesList);

	return 0;


	map<int, set<int>> times;

	times[900].insert(1000);
	times[930].insert(1400);

	times[1100].insert(1300);
	times[1100].insert(1500);


	int globalMaxTime = 0;
	int globalMaxStart = 0;
	int globaMinEnd = INT_MAX;

	int localMaxTime = 0;
	int localMaxStart = 0;
	int localMinEnd = INT_MAX;

	for (auto i = times.begin();  i != times.end(); i++) {

		localMaxStart = max(i->first, localMaxStart);
		localMinEnd = min(*i->second.begin(), localMinEnd);

		if (localMaxStart <= localMinEnd){
			localMaxTime++;
		}
		else if(globalMaxTime < localMaxTime )
		{
			globalMaxTime = localMaxTime;
			globalMaxStart = localMaxStart;
			globaMinEnd = localMinEnd;
		}
	}
	cout << "globalMaxTime: " << globalMaxTime << endl;
	cout << "globalMaxStart: " << globalMaxStart << endl;
	cout << "globaMinEnd: " << globaMinEnd << endl;

	return 0;
}






