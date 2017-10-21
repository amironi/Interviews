#include <iostream>
#include <fstream>
#include <map>

using namespace std;

int main ()
{
    std::ifstream infile("forbidden_integers.txt");

    map<int,int> rangesMap;

    int a, b;
    while (infile >> a >> b) {
        rangesMap[a] = b;
    }

    map<int,int> new_map;

    map<int,int>::iterator itr = rangesMap.begin();
    new_map[itr->first] = itr->second ;
    
    map<int,int>::iterator itr2 = new_map.find( itr->first );
    itr++;

    for( ; itr != rangesMap.end() ; itr++ ) {
        if (itr2->second <= itr->first )
            itr2->second = itr->second;
        else {
            new_map[itr->first] = itr->second ;
            itr2 = new_map.find( itr->first );
          }
    }

    int count = 4294967295;

    for( auto i: new_map )
        count -= i.second - i.first;

    cout << "Count of  allowed Integers: " << count << endl;

    int min = 0 ;
    if (new_map.begin()->first == '0' )
        min = new_map.begin()->second + 1;

    cout << "Min allowed Integers: " << min;

    return 0;
}