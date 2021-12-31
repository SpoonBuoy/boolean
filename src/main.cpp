#include <iostream>
#include <string>
#include <stack>
#include <set>
#include <map>
#include <vector>
#include <deque>
#include <queue>
#include <chrono>
#include "./headers/Bool.h"
#include "./headers/get_res.h"
#include "./headers/display_row.h"
#include "./headers/parse_evaluate.h"
using namespace std;
vector <int> min_terms;
void print_table(string inp, bool disp){
    set <char> var;
    for(char x : inp){
        if((x <= 'z' && x >= 'a') || (x <= 'Z' && x >= 'A')){
            var.insert(x);
        }
    }
    int var_size = var.size();
    if(disp){
         for(auto x : var) cout<<x<<" | ";
        cout<<"Q |";
        cout<<endl;
    }
    vector <Bool> B;
    for(int i=0;i<(1 << var_size);i++){
        B = evaluate(inp, i, var);
        if(B.back().getBit()) min_terms.push_back(i); 
        if(disp) display_row(B);
    }
  return;
}
void min_term(){
    cout<<"Min Terms : \n";
    for(auto x : min_terms) cout<<x<<" ";
    cout<<endl;
    return;
}
bool call(string cmd){
    map <string, int> hash = {
        {"off", 0},
        {"print_table", 1},
        {"min_term", 2},
    };
    string e;
    if(!hash[cmd]) return false;
    if(hash[cmd] == 1){
        cin>>e;
        print_table(e, true);
        cout<<endl;
        return true;
    }
    if(hash[cmd] == 2){
        cin>>e;
        print_table(e, false);
        min_term();
        //cout<<endl;
        return true;
    }
    return false;
}
int main(){
    cout<<"ON \n";
   // auto start = std::chrono::steady_clock::now();
   //MAIN
   //Prompter
   while(1){
       string cmd;
       cin>>cmd;
       if(!call(cmd)){
           cout<<"OFF"<<endl;
           break;
       }
   }
  
   
   //total run time
   /*
   auto end = std::chrono::steady_clock::now();
   auto elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
   auto elapsed_s = std::chrono::duration_cast<std::chrono::seconds>(end - start);
   cout<<"\nTime taken in ms: \n";
   cout<<elapsed_ms.count()<<endl;
   cout<<"\nTime taken in ss: \n";
   cout<<elapsed_s.count()<<endl;
   */
   return 0;
}