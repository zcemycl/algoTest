#include "countMinCuts.h"

tuple<int,vector<int>> countMinCuts::str2vec(string numstr){
    istringstream ss(numstr);
    string word;
    vector<int> result;
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
    string curPath = fs::current_path();
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
    int n = rand()%total+1;
    map<int,vector<int>>::iterator it;
    int count = 0;
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
    int fro,to; vector<int>::iterator it;
    map<int,vector<int>>::iterator itm;
    int c_cut;
    while (graph.size()!=2){
        tie(fro,to)=countMinCuts::drawEdge(graph,total);
        vector<int> v_fro = graph[fro];
        vector<int> v_to = graph[to];
        // remove 1 node "to" from node "from"
        it = find(v_fro.begin(),v_fro.end(),to);
        iter_swap(it,v_fro.end()-1);
        v_fro.erase(v_fro.end()-1);
        // remove 1 node "from" from node "to"
        it = find(v_to.begin(),v_to.end(),fro);
        iter_swap(it,v_to.end()-1);
        v_to.erase(v_to.end()-1);
        int cfro_to = count(v_fro.begin(),v_fro.end(),to);
        int cto_fro = count(v_to.begin(),v_to.end(),fro);
        int common = min(cfro_to,cto_fro);
        // rearrange from node
        vector<int> tmp_fro;
        for (int i=0;i<v_fro.size();i++)
            if (v_fro[i]!=to) tmp_fro.push_back(v_fro[i]);
        for (int i=0;i<v_to.size();i++)
            if (v_to[i]!=fro) tmp_fro.push_back(v_to[i]);
        for (int i=0;i<cfro_to+cto_fro-2*common;i++)
            tmp_fro.push_back(fro);
        graph[fro] = tmp_fro;
        // delete to node
        itm = graph.find(to);
        graph.erase(itm);
        // reduce edges, increase probability
        total -= (2+2*common);
        // replace node (to) with node (from)
        for (itm=graph.begin();itm!=graph.end();itm++){
            if (itm->first!=to && itm->first!=fro){
                vector<int> tmpv;
                vector<int> vbefore = itm->second;
                for (int i=0;i<vbefore.size();i++){
                    if (vbefore[i]==to)
                        tmpv.push_back(fro);
                    else tmpv.push_back(vbefore[i]);
                }
                graph[itm->first] = tmpv;
            }
        }
    }
    
    for (itm=graph.begin();itm!=graph.end();itm++){
        int key = itm->first;
        c_cut = count_if((itm->second).begin(),(itm->second).end(),
                       [key](int i) { return i!=key; });
        break;
    }
    return c_cut;
};