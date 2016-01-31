#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>
#include <sstream>
using namespace std;

class compression {

    private:
    string text;
    string afterCompression;
    public:

    compression()   {
        text = "";
        }

    compression(string word)    {
            text = word;
    }

    string get_string()   {
        return text;
    }

    void set_string(string word)   {
        text = word;
    }

    void get_input()    {
        char temp;
     cout<<"Please enter your string"<<endl;
     cin>>text;
     cout<<"The string you entered is : "<<text<<" is that correct?(y/n)"<<endl;
        cin>>temp;
        if(temp== 'n' || temp== 'N'){
            get_input();
        }
        else{
            get_output();
        }
    }


    int repeating(string word,int place)  {
        int i = place,count=0;
        do{

            if(((i+1) != word.size()) && (word.at(i) == word.at(i+1))){
                count += 1;
                i=i+1;
            }

        }while( ((i+1) < word.size() ) && ( word.at(i) == word.at(i+1) ) );
        return (count + 1);
    }

    string startCompression(string word) {

        string temp = "";
        for(int i=0 ; i < word.size() ; i= (i+ repeating(word,i))){

            temp += word.at(i);

            int value = repeating(word,i);
            stringstream stm;
            stm << value;
            temp += stm.str();

        }
        return temp;
    }



    void get_output()   {

        afterCompression = startCompression(text);
        cout<<"The string you entered after compression is "<<afterCompression;
    }
};
int main()
{
    compression myWord("aaabbacdasja");
    cout<<"your string is : "<<myWord.get_string()<<endl;
    myWord.get_output();

    return 0;
}
