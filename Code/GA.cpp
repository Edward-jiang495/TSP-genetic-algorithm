//
// Created by 18502 on 1/2/2021.
//


#include "GA.h"
GA::GA(){
    cost=999999;
    std::ifstream graph("..\\..\\Data\\100graph.txt");
    int cnt=0;
    string line;
    if(graph){
        while(!graph.eof()){
            getline(graph,line);
            cnt++;
        }
    }
    matrix.resize(cnt,vector<node>(cnt));

    //the above algorithm gets the number of node inside a graph
    //and resize the adjacency matrix
    popsize=cnt;
    //set the population size to the size of matrix

}
void GA::load(){
    ifstream in;
    in.open("..\\..\\Data\\100graph.txt");
    string line;
    if(in){
        //open graph.txt
        //cout<<"Open graph"<<endl;
        while(!in.eof()){
            //this while loop read every line
            getline(in,line);
            size_t foundStart=line.find(",");
            int start=0;
            if(foundStart!=string::npos){
                string temp=line.substr(0,foundStart);
                start=stoi(temp);
                //src node
                stringstream tempstream(line);
                while(tempstream.good()){
                    string tempst;
                    int tempdest;
                    //connecting node
                    getline(tempstream,tempst,',');
                    tempdest=stoi(tempst);
                    //this while loop read every comma in a line
                    node n(tempdest);
                    matrix.at(start-1).at(tempdest-1)=n;
                    //adding element to matrix
                }
            }

        }
    }
    in.close();
    in.clear();
    line.clear();
//    for(int i=0;i<matrix.size();i++){
//        for(int j=0;j<matrix.at(i).size();j++){
//            cout<<matrix.at(i).at(j).getID()<<" ";
//        }
//        cout<<endl;
//    }

    in.open("..\\..\\Data\\16positions.txt");
    if(in){
        //open position.txt
//        cout<<"open position"<<endl;
        while(!in.eof()){
            getline(in, line);
            int ind=0;
            double x,y,z=0;
            if(!line.empty()){
                size_t foundI=line.find(",");
                if(foundI!=string::npos){
                    ind=stoi(line.substr(0,foundI));
                    //src node
                }

                line=line.substr(foundI+1);
                size_t foundx=line.find(",");
                if(foundx!=string::npos){
                    x=stod(line.substr(0,foundx));
                    //xpos
                }

                line=line.substr(foundx+1);
                size_t foundy=line.find(",");
                if(foundy!=string::npos){
                    y=stod(line.substr(0,foundy));
                    //ypos
                }

                line=line.substr(foundy+1);
                z=stod(line);
                //zpos
                if(foundx!=string::npos && foundy!=string::npos){
                    matrix[ind-1][ind-1].setXYZ(x,y,z);
                }
            }
        }
    }

//    for(int h=0;h<matrix.size();h++){
//        cout<<matrix[h][h].getX()<<" ";
//        cout<<matrix[h][h].getY()<<" ";
//        cout<<matrix[h][h].getZ()<<" ";
//        cout<<endl;
//    }

    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix.at(i).size();j++){
            if(matrix.at(i).at(j).getID()!=0 && i!=j){
                double d=matrix.at(j).at(j).calcDis(matrix.at(i).at(i));
                matrix.at(i).at(j).setDis(d);
                //this for loop
                //calculate and store
                //the distance from each node to others
            }
        }
    }

//    for(int i=0;i<matrix.size();i++){
//        for(int j=0;j<matrix.at(i).size();j++){
//            cout<<matrix.at(i).at(j).getDis()<<" ";
//        }
//        cout<<endl;
//    }


//start generating random population
    srand((unsigned)time(NULL));
    int n=matrix.size();
    vector<node> p;

    p.push_back(matrix.at(0).at(0));
    //adding beginning

    for(int i=0;i<n-1;i++){
        p.push_back(matrix.at(i).at(i+1));
    }
    p.push_back(matrix.at(n-1).at(0));
    //add the end
    //generating a path
    for(int k=0;k<popsize;k++){
        vector<node> temp=p;
        for(int j=1;j<n-1;j++){
            //prevent swapping
            //first and last element
            //by starting at 1 and ending at n-1
            int ran=rand()%(n-1)+1;
            //adding 1 also to prevent swapping the first element

            swap(temp[j],temp[ran]);
            //generating population
            //by random swapping elements
        }
        pop.push_back(temp);
        //add to population
    }

//    for(int i=0;i<pop.size();i++){
//        for(int j=0;j<pop.at(i).size();j++){
//            cout<<pop.at(i).at(j).getID()<<" ";
//        }
//        cout<<endl;
//    }


}
double GA::summation(vector<node>& p){
    double curSum=0;
    //the id is greater than the index by 1 so i subtract 1 in here
    for(int m=0;m<matrix.size()-1;m++){
        curSum=curSum+ matrix.at(p.at(m).getID()-1).at(p.at(m+1).getID()-1).getDis();
    }
    curSum=curSum+ matrix.at(p.at(matrix.size()-1).getID()-1).at(0).getDis();
    return curSum;
}

void GA::GASelection(){
    //i use elitism for selection

    vector<vector<node>> temp;
    map<double,int> orderMap;
    //map for sorting purposes

    for(int i=0;i<pop.size();i++){
        vector<node>p=pop.at(i);
        double curSum=summation(p);
        orderMap[curSum]=i;
    }

    for(auto & it : orderMap){
        int ind=it.second;
        if(ind<pop.size()){
            temp.push_back(pop.at(ind));
        }

        //this sorts cost in ascending order
        //we know the lowest cost path is at the first place
    }
    pop=temp;
    vector<node> bestpath=pop[0];
    cost=summation(bestpath);
//    cout<<"path "<<endl;
//    for(int k=0;k<bestpath.size();k++){
//        cout<<bestpath.at(k).getID()<<" ";
//    }


}
void GA::GACrossover(){
    vector<node> temp1,temp2;
    //parent 1 and 2
    vector<node> child1,child2;
    //child 1 and 2
    srand((unsigned)time(NULL));
    for(int i=3;i<pop.size();i=i+2) {
        //start at 3 to prevent crossing over 2 best chromosomes
        //because sometimes crossover produces worse results
        int rate =rand() %10+1;
        //crossover rate is 0.9

        if(rate<=9){
            temp1=pop.at(i-1);
            //parent 1
            temp2=pop.at(i);
            //parent 2

            child1.clear();
            child2.clear();

            int randPos= rand()% (temp1.size()-2)+1;
            //generate a random number between 1 to size-2
            //to perform Davis order crossover
            //i add 1 to prevent swapping the source node
            //mod size-2 to prevent swapping last node
            child1.push_back(temp1.at(0));
            child2.push_back(temp2.at(0));
            //add the source node
            for(int j=1;j<randPos;j++){
                child1.push_back(temp1.at(j));
                child2.push_back(temp2.at(j));
                //adding random amount of DNA from parent temp1 to child1
                //also for parent temp2 to child2
            }
            for(int k=0;k<temp2.size();k++){
                auto it=find(child1.begin(),child1.end(),temp2[k]);
                if(it==child1.end()){
                    //if the node in parent temp2 is not found in child1
                    //add to child1
                    child1.push_back(temp2.at(k));
                }
            }

            for(int h=0;h<temp1.size();h++){
                auto it=find(child2.begin(),child2.end(),temp1[h]);
                if(it==child2.end()){
                    child2.push_back(temp1.at(h));
                }
            }

            child1.push_back(temp2.at(temp2.size()-1));
            child2.push_back(temp1.at(temp1.size()-1));
            //add the dest city back

            pop.at(i-1)=temp1;
            pop.at(i)=temp2;
        }

    }
}
void GA::GAMutation(){
    srand((unsigned)time(NULL));
    for(int i=2;i<pop.size();i++){
        //prevent mutating the 2 best gene
        int rate= rand()%10+1;
        //cout<<"rate "<<rate<<endl;
        if(rate<2){
            //mutation rate is 0.1
            //if less than 2 mutate
            //this is random swapping mutation
            vector<node>p=pop.at(i);
            for(int a=1;a<p.size();a++){
                int pos1=rand() %(p.size()-2)+1;
                int pos2=rand() %(p.size()-2)+1;
                //the -2 and +1 are there to prevent
                //swapping the first and last element
                swap(p.at(pos1),p.at(pos2));
            }

            pop.at(i)=p;
        }
    }
}