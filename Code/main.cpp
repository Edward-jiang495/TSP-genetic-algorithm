#include <iostream>
#include<fstream>
#include<chrono>
#include "GA.h"
using namespace std::chrono;
//i am able to finish this code thanks to the help from Aurora Zhong
//i use part of his code from https://blog.csdn.net/weixin_43965705/article/details/109900418?utm_medium=distribute.pc_relevant_download.none-task-blog-baidujs-2.nonecase&depth_1-utm_source=distribute.pc_relevant_download.none-task-blog-baidujs-2.nonecase
int main() {
    GA test;
    test.load();
    auto finish = system_clock::now() + 5min;
    //determine the running time here
    ofstream out("..\\..\\Data\\answer.csv");
    if(out){
        while(system_clock::now() < finish){
            test.GASelection();
            test.GACrossover();
            test.GAMutation();
            double c=test.getCost();
            out<<c<<endl;
        }
    }


    return 0;
}
