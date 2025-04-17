

//step 5
for (int x = low; x<= high; x++) {
    arr[x] = B{x};
}


void output(){
    cout << "\nData setelah diurutkan (Mergesort): ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << "  ";
    }
    cout << endl;
}