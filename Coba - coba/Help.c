#include <stdio.h>
#include <string.h>

struct user {
    char username[20];
    char password[20];
};

int main() {
    struct user data[100];
    int n = 0;
    char username[20];
    char password[20];

    // Membaca data dari file
    FILE *file = fopen("login.txt", "r");
    while (fscanf(file, "%s %s", data[n].username, data[n].password) != EOF) {
        n++;
    }
    fclose(file);

    // Login
    printf("Username: ");
    scanf("%s", username);
    printf("Password: ");
    scanf("%s", password);

    // Cek username dan password
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(username, data[i].username) == 0 && strcmp(password, data[i].password) == 0) {
            found = 1;
            break;
        }
    }

    // Tampilkan hasil
    if (found) {
        printf("Login berhasil\n");
    } else {
        printf("Username atau password salah\n");
    }

    return 0;
}
//ERROr