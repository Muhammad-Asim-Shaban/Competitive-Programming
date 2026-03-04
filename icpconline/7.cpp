#include <bits/stdc++.h>
using namespace std;

const int a1[4]={-1,0,1,0};
const int b2[4]={0,1,0,-1};

struct Zeta { int p,q; };

int Xr,Yt;
vector<string> Qw;
Zeta Mn,Op;
vector<Zeta> Rt;
vector<Zeta> Ui;

void Lm(vector<string>& Vy, vector<vector<bool>>& Kz) {
    for(int i=0;i<Xr;i++) fill(Kz[i].begin(),Kz[i].end(),false);
    for(auto& x:Ui) {
        for(int d=0;d<4;d++) {
            int r=x.p, c=x.q, dir=d;
            vector<vector<bitset<4>>> Hn(Xr, vector<bitset<4>>(Yt,0));
            while(true) {
                if(Hn[r][c][dir]) break;
                Hn[r][c][dir]=true;
                Kz[r][c]=true;
                char ch=Vy[r][c];
                if(ch=='/') dir=dir^1;
                else if(ch=='\\') dir=3-dir;
                int nr=r+a1[dir], nc=c+b2[dir];
                if(nr<0||nr>=Xr||nc<0||nc>=Yt||Vy[nr][nc]=='#') break;
                r=nr; c=nc;
            }
        }
    }
}

bool Pb(vector<string>& Vy) {
    vector<vector<bool>> Kz(Xr,vector<bool>(Yt,false));
    Lm(Vy,Kz);
    if(Kz[Mn.p][Mn.q]||Kz[Op.p][Op.q]) return false;
    vector<vector<bool>> Tr(Xr,vector<bool>(Yt,false));
    queue<Zeta> Wq;
    Wq.push(Mn); Tr[Mn.p][Mn.q]=true;
    while(!Wq.empty()) {
        Zeta C=Wq.front(); Wq.pop();
        if(C.p==Op.p && C.q==Op.q) return true;
        for(int d=0;d<4;d++) {
            int nr=C.p+a1[d], nc=C.q+b2[d];
            if(nr>=0&&nr<Xr&&nc>=0&&nc<Yt&&!Tr[nr][nc]&&!Kz[nr][nc]&&Vy[nr][nc]!='#') {
                Tr[nr][nc]=true;
                Wq.push({nr,nc});
            }
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin>>Xr>>Yt;
    Qw.resize(Xr);
    for(int i=0;i<Xr;i++) cin>>Qw[i];
    for(int i=0;i<Xr;i++) {
        for(int j=0;j<Yt;j++) {
            if(Qw[i][j]=='S') Mn={i,j};
            else if(Qw[i][j]=='T') Op={i,j};
            else if(Qw[i][j]=='L') Ui.push_back({i,j});
            else if(Qw[i][j]=='/'||Qw[i][j]=='\\') Rt.push_back({i,j});
        }
    }
    int As=Rt.size();
    int Bw=1<<As;
    int Cd=0, Ef=INT_MAX;
    vector<char> Gh;
    for(auto& m:Rt) Gh.push_back(Qw[m.p][m.q]);
    for(int mask=0;mask<Bw;mask++) {
        vector<string> Vy=Qw; int   cost=0;
        for(int i=0;i<As;i++) {
            Zeta m=Rt[i];
            char t=(mask>>i)&1?'/':'\\';
            if(Gh[i]!=t) cost++;
            Vy[m.p][m.q]=t;
        }
        if(Pb(Vy)) { Cd++; Ef=min(Ef,cost); }
    }
    if(Cd==0) cout<<"0 -1\n";
    else cout<<Cd<<" "<<Ef<<"\n";
    return 0;
}