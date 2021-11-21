#include "karatsubaMultiply.h"

vector<int> karatsubaMultiply::str2vec(string a){
    vector<int> result;
    for (int i=0;i<a.size();i++)
        result.push_back(a[i]-'0');
    return result;
}

string karatsubaMultiply::vec2str(vector<int>& a){
    string result = "";
    for (int i=0;i<a.size();i++)
        result += to_string(a[i]);
    return result;
}

vector<int> karatsubaMultiply::pad0(vector<int>& a,int n,string mode="back"){
    vector<int>::iterator it=a.begin();
    for (int i=0;i<n;i++){
        if (mode=="back")
            a.push_back(0);
        else if (mode=="front")
            a.insert(it,0);
            it = a.begin();
    }
    return a;
}

void karatsubaMultiply::printVec(vector<int>& a){
    for (int i=0;i<a.size();i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

vector<int> karatsubaMultiply::add2vec(
    vector<int>& a,vector<int>& b){
    int sizeA = a.size();int sizeB = b.size();
    int i=sizeA-1;int j=sizeB-1; vector<int> c;
    int remain = 0;vector<int>::iterator it = c.begin();
    while (i>=0 && j>=0){
        int total = a[i]+b[j]+remain;
        c.insert(it,total%10);
        remain = total/10;
        it = c.begin();
        i--;j--;
    }
    while (i>=0){
        int total = a[i]+remain;
        c.insert(it,total%10);
        remain = total/10;
        it = c.begin();
        i--;
    }
    while (j>=0){
        int total = b[j]+remain;
        c.insert(it,total%10);
        remain = total/10;
        it = c.begin();
        j--;
    }
    while (remain!=0){
        c.insert(it,remain%10);
        it = c.begin();
        remain = remain/10;
    }
    return c;
}

vector<int> karatsubaMultiply::sub2vec(
    vector<int>& a,vector<int>& b){
    // Assume a>b
    int sizeA = a.size();int sizeB = b.size();
    int i=sizeA-1;int j=sizeB-1; 
    while (j>=0){
        if (a[i]<b[j]){
            a[i]=10+a[i]-b[j];
            a[i-1] -= 1;
        } else a[i] -= b[j];
        i--;j--;
    }
    return a;
}

vector<int> karatsubaMultiply::naive(vector<int>& a,vector<int>& b){
    vector<int> c = {0}; if (a.size()==0) return c; if (b.size()==0) return c;
    if (a.size()==1 && b.size()==1) return karatsubaMultiply::str2vec(to_string(a[0]*b[0]));
    a = karatsubaMultiply::pad0(a,a.size()%2==1?1:0,"front");
    b = karatsubaMultiply::pad0(b,b.size()%2==1?1:0,"front");
    a = karatsubaMultiply::pad0(a,a.size()<b.size()?b.size()-a.size():0,"front");
    b = karatsubaMultiply::pad0(b,b.size()<a.size()?a.size()-b.size():0,"front");
    int n = a.size();
    vector<int> tmpa(a.begin(),a.begin()+n/2);
    vector<int> tmpb(a.begin()+n/2,a.end());
    vector<int> tmpc(b.begin(),b.begin()+n/2);
    vector<int> tmpd(b.begin()+n/2,b.end());
    vector<int> ac = karatsubaMultiply::naive(tmpa,tmpc);
    vector<int> bd = karatsubaMultiply::naive(tmpb,tmpd);
    vector<int> apb = karatsubaMultiply::add2vec(tmpa,tmpb);
    vector<int> cpd = karatsubaMultiply::add2vec(tmpc,tmpd);
    vector<int> abcd = karatsubaMultiply::naive(apb,cpd);
    abcd = karatsubaMultiply::sub2vec(abcd,ac);
    abcd = karatsubaMultiply::sub2vec(abcd,bd);
    ac = karatsubaMultiply::pad0(ac,n,"back");
    abcd = karatsubaMultiply::pad0(abcd,n/2,"back");
    c = karatsubaMultiply::add2vec(ac,abcd);
    c = karatsubaMultiply::add2vec(c,bd);
    return c;
}
