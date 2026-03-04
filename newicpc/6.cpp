#include<bits/stdc++.h>
using namespace std;
const unordered_map<char,string>eventTypes={{'A',"Competitions"},{'B',"Entertainment"},{'C',"Social Gatherings"},{'D',"Dinners"},{'E',"Processions"},{'F',"Training Workshops"},{'G',"Exams"}};
const unordered_set<string>validSubcategories={"01","02","03","04"};
bool isValidEvent(const string&code){
    if(code.length()!=3)return false;
    char category=code[0];
    string subcategory=code.substr(1,2);
    if(category<'A'||category>'G')return false;
    if(validSubcategories.find(subcategory)==validSubcategories.end())return false;
    return true;
}
void processTestCase(const string&s){
    vector<string>events;
    for(int i=0;i<s.length();i+=3){
        if(i+3>s.length()){
            string invalidCode=s.substr(i);
            while(invalidCode.length()<3&&i>0){
                invalidCode=s.substr(i-1,3);
            }
            cout<<"-1 "<<invalidCode<<endl;
            return;
        }
        string event=s.substr(i,3);
        if(!isValidEvent(event)){
            cout<<"-1 "<<event<<endl;
            return;
        }
        events.push_back(event);
    }
    int n=events.size();
    int maxLen=0;
    int bestStart=0;
    for(int i=0;i<n;i++){
        unordered_set<string>seen;
        int j=i;
        while(j<n&&seen.find(events[j])==seen.end()){
            seen.insert(events[j]);
            j++;
        }
        int currentLen=j-i;
        if(currentLen>maxLen||(currentLen==maxLen&&events[i]<events[bestStart])){
            maxLen=currentLen;
            bestStart=i;
        }
    }
    vector<string>bestSequence;
    unordered_set<string>tempSeen;
    for(int i=bestStart;i<n&&tempSeen.find(events[i])==tempSeen.end();i++){
        bestSequence.push_back(events[i]);
        tempSeen.insert(events[i]);
    }
    unordered_map<char,int>typeCount;
    for(const string&event:bestSequence){
        typeCount[event[0]]++;
    }
    cout<<maxLen<<" ";
    for(int i=0;i<bestSequence.size();i++){
        cout<<bestSequence[i];
        if(i<bestSequence.size()-1)cout<<" ";
    }
    vector<char>sortedCategories;
    for(const auto&pair:typeCount){
        sortedCategories.push_back(pair.first);
    }
    sort(sortedCategories.begin(),sortedCategories.end());
    for(char category:sortedCategories){
        cout<<" "<<typeCount[category]<<" "<<eventTypes.at(category);
    }
    cout<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        processTestCase(s);
    }
    return 0;
}
