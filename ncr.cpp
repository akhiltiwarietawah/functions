int ncr(n,r) {
    int ncr = 1;
    for (int i = 0; i < r; i++){
        ncr *= (n-r);
        ncr /= (i+1); 
    }

    return ncr;
}