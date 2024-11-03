#include <iostream>
#include "supprt.h"

using namespace std;
//external variable
//compiling with supoort.cpp
namespace XIAO{
    double fetch;
}
namespace YI{
    double fetch;
}
//double x;
//double fetch = 0.5;//char fetch; //也是定义
//int main() {
//    cout << "global warming:" << XX::warming << "degrees\n";  //全局的
////    using YI::fetch;
//
//    using namespace YI;
////    double fetch = 0.5;
//    std::cout<<"Xiao:"<<&(XIAO::fetch)<<endl;
//    std::cout<<"YI:"<<fetch<<endl;
//    double warming = 0.1231412412;
//    cout << "global warming:" << warming << "degrees\n";  //全局的
////    update(0.1);
//    cout << "inner warming:" << warming << "degrees\n";
////    local();
//    cout << "global warming:" << warming << "degrees\n";
////    cout<<"c in main:"<<&c<<endl;
////    cout<<"p in main:"<<p;
//    return 0;
//}
int a = 1;
namespace Jack{
    void bucket(double n){};
    double fetch;
    int pal;
    struct Hill {};
}
//double fetch = 123123;
double fetch;
void A(){
    fetch = 0.3;

}

int main(){
    int p = 10;
    int f = 20;
    int &c = p;
    using namespace Jack;
//    double fetch = 0.2;
    cout<<::fetch;
    c = f;
    cout<<"p"<<p;
//    ::fetch = 0.3;

    return 0;
}

