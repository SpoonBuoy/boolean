#include "../headers/get_res.h"
#include "../headers/Bool.h"
Bool get_res_binary(Bool left, Bool right, char oper){
    Bool res;
    switch (oper){
        case '+':
            res = left + right;
            break;
        case '&':
            res = left & right;
            break;
        case '^':
            res = left ^ right;
            break;
     }
     return res;
}
Bool get_res_unary(Bool right, char oper){
    Bool res;
    switch (oper){
        case '~':
            res = ~right;
            break;
     }
     return res;
}