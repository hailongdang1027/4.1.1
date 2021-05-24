#ifndef BASE_H
#define BASE_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class base{   
private:
        string ob_name = "";       
        base* parent;        
        int index = 0;
public:        
        int iterator;        
        static base* root;        
        vector<base*> children;        
        base();        
        base(string, base* parent);        
        void setName(string);        
        void setParent(base* parent);        
        base* getParent();        
        string getName();        
        base* getObjectByName(string);       
        void printTree();        
        ~base();
};
#endif
