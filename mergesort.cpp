
int mid = (low + high)/2;  //step2

//step 3
//fungsi rekursi - memanggil diri sendiri
mergesort(low, mid); //step 3.a
mergesort (mid + 1, high);  //step 3.b