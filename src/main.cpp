#include <iostream>
#include <string>
#include <stack>
#include <set>
#include <map>
#include <vector>
#include <deque>
#include <queue>
#include "./headers/Bool.h"
#include "./headers/get_res.h"
#include "./headers/display_row.h"
#include "./headers/parse_evaluate.h"
using namespace std;
void print_table(string inp){
    set <char> var;
    for(char x : inp){
        if((x <= 'z' && x >= 'a') || (x <= 'Z' && x >= 'A')){
            var.insert(x);
        }
    }
    int var_size = var.size();
    for(auto x : var) cout<<x<<" | ";
    cout<<"Q |";
    cout<<endl;
    vector <Bool> B;
    for(int i=0;i<(1 << var_size);i++){
        B = evaluate(inp, i, var);
         //display_row(B);
    }
    display_row(B);
}
int main(){
   string s;
   cin>>s;
   print_table(s);
   return 0;
}