//
// Created by LIU YI on 2024/11/2.
//

#include "supprt.h"
#include <iostream>
using namespace std;

int * p  = new int(5);
namespace XX{
    double warming = 0.3;
    void update(double dt){
        cout<<"before update global wariming to "<<warming<<endl;
        cout<<"update global wariming to "<<warming;
        cout<<"degrees.\n";
        cout<<"c in support:"<<&c<<endl;
        cout<<"p in support:"<<p;
    }
    void local(){
        double warming = 0.8;
        cout<<"local warming = "<<warming <<"degrees.\n";
        cout<<"But global warming="<<warming;
        cout<<"degrees.\n";
    }
}

