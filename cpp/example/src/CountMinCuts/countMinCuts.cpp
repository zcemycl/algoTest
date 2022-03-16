#include "countMinCuts.h"

tuple<int,vector<int>> countMinCuts::str2vec(string numstr){
    cout<<numstr<<endl;
    istringstream ss(numstr);
    string word; vector<int> result;
    int i=0; int key;
    while (ss >> word){
        if (i!=0)
            result.push_back(stoi(word));
        else key = stoi(word);
        i+=1;
    }
    return make_tuple(key,result);
};

void countMinCuts::printVec(vector<int>& nums){
    for (int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}

tuple<map<int,vector<int>>,int> countMinCuts::loadGraph(){
    map<int,vector<int>> graph;
    // string curPath = fs::current_path();
    // cout<<fs::current_path()<<endl;
    string curPath = std::filesystem::current_path();
    // string curPath = boost::filesystem::path full_path( boost::filesystem::current_path() );
    cout<<curPath<<endl;
    curPath = curPath.substr(0,curPath.find("build"));
    ifstream myfile (curPath+"src/CountMinCuts/kargerMinCut.txt");
    vector<int> result;string line;int key;int total = 0;
    if (myfile.is_open()){
        while ( getline(myfile,line) ){
            tie(key,result) = countMinCuts::str2vec(line);
            graph[key] = result;
            total+=result.size();
        }
        myfile.close();
    } else cout << "Unable to open file";
    return make_tuple(graph,total);
};

tuple<int,int> countMinCuts::drawEdge(map<int,vector<int>>& graph,int total){
    int n = rand()%total+1; int count = 0;
    map<int,vector<int>>::iterator it;
    for (it=graph.begin();it!=graph.end();it++){
        int key = it->first;
        vector<int> val = it->second;
        int L = val.size();
        if (n-1-count<L)
            return make_tuple(key,val[n-1-count]);
        count+=L;
    }
    return make_tuple(0,0);
};

int countMinCuts::naive(map<int,vector<int>>& graph,int total){
    int fro,to,c_cut; vector<int>::iterator it;
    map<int,vector<int>>::iterator itm;
    while (graph.size()!=2){
        tie(fro,to)=countMinCuts::drawEdge(graph,total);
        // replace node (to) with node (from)
        for (itm=graph.begin();itm!=graph.end();itm++){
            vector<int> tmpv;
            vector<int> vbefore = itm->second;
            for (int i=0;i<vbefore.size();i++){
                if (vbefore[i]==to)
                    tmpv.push_back(fro);
                else tmpv.push_back(vbefore[i]);
            }
            graph[itm->first] = tmpv;
        }
        vector<int> v_fro = graph[fro];
        vector<int> v_to = graph[to];
        int origSize = v_fro.size()+v_to.size();
        // remove 1 node "to" from node "from"
        it = remove(v_fro.begin(),v_fro.end(),fro);
        // remove 1 node "from" from node "to"
        it = remove(v_to.begin(),v_to.end(),fro);
        int newSize = v_fro.size()+v_to.size();
        // rearrange from node
        vector<int> tmp = v_fro;
        tmp.insert(tmp.end(),v_to.begin(),v_to.end());
        graph[fro] = tmp;
        // delete to node
        itm = graph.find(to);
        graph.erase(itm);
        // reduce edges, increase probability
        total -= (origSize-newSize);
    }
    
    for (itm=graph.begin();itm!=graph.end();itm++){
        int key = itm->first;
        c_cut = (itm->second).size();
        break;
    }
    return c_cut;
};