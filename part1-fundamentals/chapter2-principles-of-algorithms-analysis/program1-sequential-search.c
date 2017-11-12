int search(int arr[], int v, int l, int r) {
    int i;

    for (i = l; i <= r; ++i)
	if (v == arr[i])
	    return i;
    return -1;
}
