#include<iostream>
#include<map>
#include<iterator>
#include<sstream>
using namespace std;

int strtoint(string str){
    int v=0;
    for(int i=0;i<str.length();i++){
        switch(str[i]){
            case '1':v=(v*10)+1;
            break;
            case '2':v=(v*10)+2;
            break;
            case '3':v=(v*10)+3;
            break;
            case '4':v=(v*10)+4;
            break;
            case '5':v=(v*10)+5;
            break;
            case '6':v=(v*10)+6;
            break;
            case '7':v=(v*10)+7;
            break;
            case '8':v=(v*10)+8;
            break;
            case '9':v=(v*10)+9;
            break;
            default:v=(v*10)+0;
    }
    }
    return v;
}

string obfuscate(string input, int charOffset, map<string, string> wordMap)
    {
    map<string,string>::iterator itre;
    for(itre=wordMap.begin();itre!=wordMap.end();itre++)
        {
        if(itre->first==input){
            return itre->second;
        }
    }
    int i=0,count=0;
    while(i!=input.length()&&input[i]>47&&input[i]<58)
        {
            i++;
            count++;
    }
    if(count==input.length())
    {
        int v=strtoint(input)*charOffset;
        stringstream s;
        s<<v;
        return s.str();
    }
    for(int i=0;i<input.length();i++)
            input[i]=input[i]+charOffset;
    return input;
}


int main(){
    map<string, string> map1;
    string input;
    map1.insert(pair<string,string>("chennaibeach","enjoyment"));
    map1.insert(pair<string,string>("aroma","bakery"));
    map1.insert(pair<string,string>("psgsolutions","college"));
    map1.insert(pair<string,string>("codeblocks","usedforprogram"));
    cin>>input;
    input=obfuscate(input,2,map1);
    input=obfuscate(input,2,map1);
        cout<<input;
}
