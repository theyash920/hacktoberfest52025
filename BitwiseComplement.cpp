class solution{
    public:
    int bitwiseComplement(int n){
        int m=n;
        int mask =0;
        //edge case
        if(n==0)
           return 1;
        while(m!=0){
            mask = (mask<<1) |1;//0000|1 = 0001
            m = m>>1;
        }
        int ans = (~n) & mask; //int ans = (~n) & mask;: Computes the bitwise complement of n limited to the significant bits of n.
        //(~n)gives complement mask = 0000000000000000111 as in 5(101) the last one is on third no. thats why there are three one
        return ans;
    }
}
