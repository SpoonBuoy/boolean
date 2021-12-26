#ifndef BOOL_INCLUDE
#define BOOL_INCLUDE
class Bool{
    private:
        bool state;
    public:
        //Constructor
        //Initially the bit is set off
        Bool(){
            this->setBit(0);
        }

        //setter
        void setBit(int state){
            this->state = state;
        }

        //getter
        bool getBit(){
            return this->state;
        }

        //Operator overloaders
        Bool operator+(Bool const &obj) const{
            Bool res;
            res.state = (state | (obj.state));
            return res;
        }
        Bool operator&(Bool const &obj) const{
            Bool res;
            res.state = (state & (obj.state));
            return res;
        }
        Bool operator^(Bool const &obj) const{
            Bool res;
            res.state = (state ^ (obj.state));
            return res;
        }        
        Bool operator~(){
           state = !(state);
           return *(this);
        }
};
#endif