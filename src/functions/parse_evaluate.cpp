#include <string>
#include <stack>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <vector>
#include "../headers/Bool.h"
#include "../headers/get_res.h"
#include "../headers/parse_evaluate.h"
std::vector<Bool> evaluate(std::string inp, int num, std::set<char> var){
    int i = 0;
    std::map <char, int> row;
    for(auto v : var) row[v] = i, i++;
    int n = var.size();
    std::vector<Bool> cur_row(n+1);
    for(int i=n-1;i>=0;i--){
        if(num & 1) cur_row[i].setBit(1);
        num >>= 1;
    }
    //for(auto x:cur_row) std::cout<<x.getBit()<<" | ";
    // cout<<endl;
    std::stack <char> st;
    std::stack <Bool> temp_res;
    for(char x : inp){
        if(x == ')'){
            std::deque <Bool> temp;
            std::queue <char> oper;
            while(st.top() != '('){
                char cur = st.top();
                st.pop();
                if(cur == '1'){
                    temp.push_back(temp_res.top());
                    temp_res.pop();
                }
                else if((cur <= 'z' && cur >= 'a') || (cur <= 'Z' && cur >= 'A')){
                    temp.push_back(cur_row[row[cur]]);
                }
                else oper.push(cur);
            }
            st.pop();
            Bool left, right, res;
            while(!oper.empty()){
                char op = oper.front();
                if(op == '~'){
                    right = temp.front();
                    temp.pop_front();
                    res =  get_res_unary(right, op);
                }
                else{
                    left = temp.front();
                    temp.pop_front();
                    right = temp.front();
                    temp.pop_front();
                    res = get_res_binary(left, right, op);
                }
                oper.pop();
                temp.push_front(res);
            }
            temp_res.push(res);
            st.push('1');
        }
        else st.push(x);
    }
    cur_row[n] = temp_res.top();
    return cur_row;
}
