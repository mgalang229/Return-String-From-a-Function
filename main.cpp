#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;

class Sample{
    public:
        void setText(string text);
        string getText();
    private:
        string text2;
};
int main(){
    
    Sample sp;
    string sample;
    
    cout << "Enter text: ";
    getline(cin,sample);
    sp.setText(sample);
    cout << "Text: " << sp.getText();
    
    return 0;
}
void Sample::setText(string text){
    text2 = text;
}
string Sample::getText(){
    return text2;
}
