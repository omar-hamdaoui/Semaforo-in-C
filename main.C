#include <stdio.h>
#include <unistd.h>

void setSemaforoAuto() {
    printf("🟢 ⚪ ⚪ Semaforo veicoli verde\n");
    sleep(5);
    printf("🟡 ⚪ ⚪ Semaforo veicoli giallo\n");
    sleep(2);
    printf("🔴 ⚪ ⚪ Semaforo veicoli rosso\n");
    sleep(20);
}

void setSemaforoPedoni() {
    printf("🔴 ⚪ Semaforo pedonale rosso\n");
    sleep(5);
    printf("⚪ 🟢 ⚪ Semaforo pedonale verde\n");
    sleep(10);
    printf("⚪ 🟢 ⚪ Semaforo pedonale verde lampeggiante\n");
    sleep(5);
    printf("🔴 ⚪ ⚪ Semaforo pedonale rosso\n");
    sleep(15);
}

int main() {
    char input;
    while (1) {
        printf("Premi 'x' per uscire o un altro tasto per continuare: ");
        input = getchar();

        if (input == 'x') {
            return 0;
        }

        setSemaforoAuto();
        setSemaforoPedoni();
    }

    return 0;
}

