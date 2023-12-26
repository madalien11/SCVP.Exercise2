#ifndef NAND_H
#define NAND_H

#include <systemc.h>


// TODO: Insert your code here
SC_MODULE(nand) {
    public:
    
    sc_in<bool> A, B;                // input signal ports
    sc_out<bool> Z;                  // output signal ports

    SC_CTOR(nand) {
        SC_METHOD(do_nand);          // register do_nand with kernel
        sensitive << A << B;         // sensitivity list
    }

    void do_nand() {  
        Z.write( !(A.read() && B.read()) ); 
    }
    

};
#endif
