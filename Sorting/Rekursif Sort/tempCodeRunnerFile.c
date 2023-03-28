
    int arr[n];
    printf("Masukkan %d angka: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    sort_descending(arr, n);

    printf("Angka yang sudah diurutkan: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}