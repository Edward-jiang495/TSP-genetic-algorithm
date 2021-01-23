//
// Created by 18502 on 10/16/2020.
//
#include <cmath>
#ifndef CODE_NODE_H
#define CODE_NODE_H


class node {
private:
    int id;
    double x;
    double y;
    double z;
    double dis;
public:
    node();
    node(int);
    node(int, double);
    node(int, double,double,double);
    const int getID()const;
    void setID(int);
    double getX();
    double getY();
    double getZ();
    double getDis();
    void setDis(double);
    void setXYZ(double,double,double);
    double calcDis(node&);
    node& operator =(const node);
    node(const node& n);
    bool operator <(const node)const;
    bool operator >(const node)const;
    bool operator ==(const node)const;
};


#endif //CODE_NODE_H
