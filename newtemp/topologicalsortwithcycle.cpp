// bool t_sort(int crr, vector<bool> &vis, vector <int> &stack, vector<vector<int>> &list, vector<bool> &path){
//         vis[crr]=true;
//         path[crr]=true;
//         for(int nei:list[crr]){
//             if(!vis[nei]){
//                 if(t_sort(nei,vis,stack,list,path)) return true;
//             }
//             else if(path[nei]) return true;
//         }
//         stack.push_back(crr);
//         path[crr]=false;
//         return false;
//     }