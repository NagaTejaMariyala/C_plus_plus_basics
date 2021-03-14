
#include<iostream>
#include<bitset>
using namespace std;
int main()
{
    bitset<32> bv;

    cout << "Bitvector : " << bv << endl;
    cout << "Size : " << bv.size() << endl;
    cout << "Bit ON: " << bv.count() << endl;

    bv.set();
    cout << "\nSet all bits to one \n";
    cout << "Bitvector : " << bv << endl;
    cout << "Bit ON: " << bv.count() << endl;

    bv.reset();
    cout << "\nSet all bits to zero \n";
    cout << "Bitvector : " << bv << endl;
    cout << "Bit ON: " << bv.count() << endl;

    bv.set(4);
    bv.set(1);
    bv.set(31);
    bv.set(9);
    cout << "\nSet bits at position 1,4,9,31 to one \n";
    cout << "Bitvector : " << bv << endl;
    cout << "Bit ON: " << bv.count() << endl;
    
    bv.reset(31);
    bv.reset(9);
    cout << "\nReset bits at position 9,31 to one \n";
    cout << "Bitvector : " << bv << endl;
    cout << "Bit ON: " << bv.count() << endl;

    bv.flip();
    cout << "\nflip bits \n";
    cout << "Bitvector : " << bv << endl;
    cout << "Bit ON: " << bv.count() << endl;
    cout << endl;

    bv.flip(1);
    bv.flip(3);
    bv.flip(31);
    cout << "\nflip bits at position 1,3,31 \n";
    cout << "Bitvector : " << bv << endl;
    cout << "Bit ON: " << bv.count() << endl;
    cout << endl;

    cout << "Is any bit ON : " << bv.any() << endl;
    cout << "IS no bit ON: " << bv.none() << endl;
    cout << endl;

    if(bv.test(7))
        cout << "Bit a position 7 is ON \n";
    else
        cout << "Bit a position 7 is OFF \n";

    if(bv.test(31))
        cout << "Bit a position 31 is ON \n";
    else
        cout << "Bit a position 31 is OFF \n";
	
    bv=~bv;
    cout << "\nComplement bitvector \n";
    cout << "Bitvector : " << bv << endl;
    cout << endl;

    bitset<16> bv2(0xffff);

    bitset<32> bv3(0xffff);

    bitset<64> bv4(0xffffffff);


    cout << "Bitvector2 : " << bv2 << endl;
    cout << "Bitvector3 : " << bv3 << endl;
    cout << "Bitvector4 : " << bv4 << endl;
    cout << endl;

    string s("11111010010");
    bitset<32> bv5(s);
    bitset<32> bv6(s,2,6);
    bitset<32> bv7(s,s.size()-7);
    cout << "Bitvector5 : " << bv5 << endl;
    cout << "Bitvector6 : " << bv6 << endl;
    cout << "Bitvector7 : " << bv7 << endl;
    cout << endl;

    bitset<32> b(0xe);
    bitset<16> b1(0xff);
    bitset<32> b2(0xffff);
    bitset<64> b3(0xffffffff);

    unsigned long ul = b.to_ulong();
    cout << "ulong b = " << ul << endl;

    unsigned long ul1 = b1.to_ulong();
    cout << "ulong b1 = " << ul1 << endl;

    unsigned long ul2 = b2.to_ulong();
    cout << "ulong b2 = " << ul2 << endl;

    unsigned long ul3 = b3.to_ulong();
    cout << "ulong b3 = " << ul3 << endl;
    cout << endl;

    string st1("101010101100");
    string st2("101001010011");

    bitset<16> v1(st1);
    bitset<16> v2(st2);

    cout << "Bitvec1: " << v1 << endl;
    cout << "Bitvec2: " << v2 << endl;

    bitset<16> v3 = v1 & v2;
    cout << "Bitvec3 = bitvec1 & bitvec2 : " << v3 << endl;

    bitset<16> v4 = v1 | v2;
    cout << "Bitvec4 = bitvec1 | bitvec2 : " << v4 << endl;

    string sval("00011100");

    bitset<16> bvec(sval);
    cout << "Bitvector : " << bvec << endl;
    cout << "Bitvector : " << bvec.to_ulong() << endl;

    bitset<16> bvec2 = bvec << 3;
    cout << "Bitvector2 : " << bvec2 << endl;
    cout << "Bitvector2 : " << bvec2.to_ulong() << endl;

    bitset<16> bvec3 = bvec >> 2;
    cout << "Bitvector3 : " << bvec3 << endl;
    cout << "Bitvector3 : " << bvec3.to_ulong() << endl;

    return 0;
}
