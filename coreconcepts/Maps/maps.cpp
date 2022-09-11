
#include <iostream>
#include <map>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{

    // Map is an associative array
    //! map[key]=value ,also by map.insert({key,value})_this inside value is pair and also be written as make_pair(key,value)
    unordered_map<string, int> uomarksMap;
    uomarksMap["1Atul"] = 58;
    uomarksMap["2Rohit"] = 57;
    uomarksMap["3Kishlay"] = 78;
    uomarksMap["4Aditya"] = 65;
    uomarksMap["5Sachin"] = 53;
    map<string, int> omarksMap;
    omarksMap["1Atul"] = 58;
    omarksMap["2Rohit"] = 57;
    omarksMap["3Kishlay"] = 78;
    omarksMap["4Aditya"] = 65;
    omarksMap["5Sachin"] = 53;

    cout << "\n *** : " << omarksMap["5Sachin"];
    cout << "\n  : ";
    // cout << "\n they both are same (*iter).first and iter->first\n";
    cout << "now the unordered map fills like stack and ordered map like queue (only filling!)\n";
    cout << "\n unordered :\n";
    unordered_map<string, int>::iterator iter;
    for (iter = uomarksMap.begin(); iter != uomarksMap.end(); iter++)
    {
        cout << iter->first << " " << (*iter).second << "\n";
    }
    cout << "\n orderd : \n";
    map<string, int>::iterator iter2;

    for (iter2 = omarksMap.begin(); iter2 != omarksMap.end(); iter2++)
    {
        cout << iter2->first << " " << (*iter2).second << "\n";
    }

    map<int, int> freq;
    cout << "\nnew map: "<<"\n";
    freq[45];
    freq[4];
    freq[4]++;
    freq[4]++;
    freq[4]++;
    freq[4]++;
    cout << freq.size() << " "<<freq[4]<< "\n";
    cout << freq[55];
    //it is very optimized for freq related things.

    map<char, int> exp;
    char M;
    exp['M'] = 3;
    cout << "your ans is : " << exp[M];
}
/* 
    you can think of these as special array in which the indices(keys) of elements
    can be negative ,very big or even strings in any order. these are like python
    dictionaries or java treemap.
    map<key_datatype,Value_datatype>
    we can use freq["second"] instead of freq[1] 
    ! very similar to sets keys here are ordered lexicographically
    /*it here always returns a <key,value> pair therefore
    (*it).second can be replaced by it-> second
 */
//map[i] is nothing you always needs something pointer in case of map
// and use extensively in case of containers to make it a habit .
// to use them .often.
//!we cant do it+1 in maps because they use non contiguous memory but it++ somehow works ,also they use red black trees for internal implementation

