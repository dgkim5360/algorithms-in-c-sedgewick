int search(int arr[], int v, int l, int r) {
    while (r >= 1) {
	int m = (l+r)/2;
	if (v == arr[m])
	    return m;
	if (v < arr[m])
	    r = m-1;
	else
	    r = l+1;
    }
    return -1;
}
