class Solution {
public:
    const long long int MOD = 1e9+7;

    void matmul(long long int &ra,long long int &rb,long long int &rc,long long int &rd, long long int a,long long int b,long long int c,long long int d){
        long long nra = ra*a+rb*c;
        long long nrb = ra*b+rb*d;
        long long nrc = rc*a+rd*c;
        long long nrd = rc*b+rd*d;

        ra = nra%MOD;
        rb = nrb%MOD;
        rc = nrc%MOD;
        rd = nrd%MOD;
    }

    int countGoodStrings(long long n) {

        long long int a=1,b=1,c=1,d=0;

        long long int ra=1,rb=0,rc=0,rd=1;

        while(n){
            if(n&1){
                matmul(ra,rb,rc,rd,a,b,c,d);
            }

            n/=2;
            matmul(a,b,c,d,a,b,c,d);
        }

        return 2*rc%MOD;
    }
};