#include <iostream> 

using namespace std;

class Bool{
    private:
        bool val;
    public:
        //Constructor
        Bool(){}

        //setter
        void setBit(int val){
            this->val = val;
        }
        //getter
        bool getBit(){
            return this->val;
        }

        //Operator overloaders
        Bool operator+(Bool const &obj) const{
            Bool res;
            res.val = (val | (obj.val));
            return res;
        }
        Bool operator&(Bool const &obj) const{
            Bool res;
            res.val = (val & (obj.val));
            return res;
        }
        Bool operator^(Bool const &obj) const{
            Bool res;
            res.val = (val ^ (obj.val));
            return res;
        }        
        Bool operator~(){
           val = !(val);
           return *(this);
        }
};