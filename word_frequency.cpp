#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;
int locate(string word, vector<string> v);
string toLower(string s);
int margin(string s);

int main()
{
    int location,maxSize;
    string temp;
    ifstream fin;
    vector<string> words;
    vector<int> count;
    fin.open("gandalf.txt");
    if(fin.fail())
    {
        cout<<"Error ! Please check code."<<endl;
    }
    while (fin >> temp)
    {
        location = locate(toLower(temp),words);
        if(location == -1)
        {
            words.push_back(toLower(temp));
            count.push_back(1);
        }
        else
        {
            count.at(location) += 1;
        }

    }

    cout<<"OUTPUT:"<<endl;
    maxSize = margin(words.at(0));
    for(unsigned int i=0 ; i<words.size();i++)
    {
        if(margin(words.at(i)) > maxSize)
        {
                maxSize=margin(words.at(i));
        }
    }
    for(unsigned int i=0 ; i < words.size(); i++)
    {
        cout<<words.at(i)<<setw((maxSize + 3)- (margin(words.at(i))))<<count.at(i)<<endl;
    }

    return 0;
}

int locate(string word, vector<string> v)
{
    for(unsigned int i=0; i<v.size(); i++)
    {
        if(v.at(i) == word)
        {
            return i;
        }

    }
    return -1;
}

string toLower(string s)
{
    string temp = "";
    for(int i = 0 ; i< s.size() ; i++)
    {

            temp += tolower(s.at(i));
    }
    return temp;
}

int margin (string s)
{
        return s.size();
}
