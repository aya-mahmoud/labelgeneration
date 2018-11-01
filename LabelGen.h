#ifndef LABELGEN_H
#define LABELGEN_H
#include <iostream>
#include<string>
using namespace std;

class LabelGen
{
    public:

          LabelGen(string prefix , int initial);
        string nextLabel();
        virtual ~LabelGen();


    private:
    string prefix;
    int initial;
};

#endif // LABELGEN_H
