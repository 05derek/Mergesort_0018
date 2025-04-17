

while (i <= mid && j <= high) {  //step 4.d
    if (arr[i] <= arr[j]){   //step 4.d.i
        B[k] = arr[i];
        i++;
    }else {   //step 4.d.ii
        B[k] = arr[j];
        j++;
    }
    k++;
}

