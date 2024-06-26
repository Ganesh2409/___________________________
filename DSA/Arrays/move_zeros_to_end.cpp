// nice pattern buddy 
// i have thinked of O^2 approach but the bekow approach is awesome 
// my target is to get move the zeros to end naa so why do we not to think of this way 
// like move the zeros to the palce of no nzeros whil swapping 
vector<int> moveZeros(int n, vector<int> a) {
    // Write your code here.
    int p1 = 0;
    int p2 =0;
    while(p1 <a.size()){
        if(a[p1] != 0){
            swap(a[p1],a[p2]);
            p2++;
        }
        p1++;
    }
    return a;
}

// why this world seems something wrong for me ! but why ! 