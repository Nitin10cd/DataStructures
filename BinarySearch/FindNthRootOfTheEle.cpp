int getVerify (int val , int times, int target) {
    long long product = 1;
    for (int i = 0; i < times; i++) {
        product*=val;
        if (product > target) return true;
    }
    if (product == target) return 1;
}

int nthRoot (int m , int n) {
    int low = 1;
    int high = m;
    while (low <= high) {
        int mid = low + (high - low) /2;
        int result = getVerify(mid,n,m);
        if (result == 1) return mid;
        else if (result == 0) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}