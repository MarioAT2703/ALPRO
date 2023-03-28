
    printf("Masukkan jumlah pengulangan luar: ");
    scanf("%d", &jumlah_luar);
    printf("Masukkan jumlah pengulangan dalam: ");
    scanf("%d", &jumlah_dalam);

    for (i = 1; i <= jumlah_luar; i++) {
        for (j = 1; j <= jumlah_dalam; j++) {
            printf("Pengulangan ke-%d dalam pengulangan ke-%d\n", j, i);
        }
    }

    return 0;
}