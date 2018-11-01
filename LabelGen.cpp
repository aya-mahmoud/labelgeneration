#include "LabelGen.h"

LabelGen::LabelGen(string prefix, int initial)
{
    this->prefix=prefix;
    this->initial=initial;
}
string LabelGen::nextLabel(){
string newlabel;
newlabel=prefix+to_string(initial);
initial++;
return newlabel;
}

LabelGen::~LabelGen()
{
    //dtor
}
