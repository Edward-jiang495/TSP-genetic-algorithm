//
// Created by 18502 on 10/16/2020.
//

#include "node.h"
node::node(){
    id=0;
    x=0;
    y=0;
    z=0;
    dis=0;
}
node::node(int d){
    id=d;
    x=0;
    y=0;
    z=0;
    dis=0;
}
node::node(int d ,double xd,double yd,double zd){
    id=d;
    x=xd;
    y=yd;
    z=zd;
    dis=0;
}
const int node::getID()const{
    return id;
}

void node::setID(int d){
    id=d;
}
void node::setXYZ(double x1,double y1,double z1){
    x=x1;
    y=y1;
    z=z1;
}
double node::calcDis(node& n){
    double d=sqrt(pow((x-n.x),2)+pow((y-n.y),2)+pow((z-n.z),2));
    return d;
}
node& node::operator =(const node n){
    id =n.id;
    x =n.x;
    y=n.y;
    z=n.z;
    dis=n.dis;
    return *this;
}
node::node(const node& n){
    id =n.id;
    x =n.x;
    y=n.y;
    z=n.z;
    dis=n.dis;
}
double node:: getX(){
    return x;
}
double node::getY(){
    return y;
}
double node::getZ(){
    return z;
}
double node::getDis(){
    return dis;
}
void node::setDis(double d){
    dis=d;
}
bool node::operator <(const node n)const{
    return id < n.id;
}
bool node::operator >(const node n)const{
    return id > n.id;
}
bool node::operator ==(const node n)const{
    return id==n.id;
}