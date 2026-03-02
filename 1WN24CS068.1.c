#include <stdio.h>

int main() {
    int at[20], bt[20], ct[20], tat[20], wt[20];
    int n, i;
    float twt = 0.0, ttat = 0.0, awt, atat;

    printf("ENTER THE NUMBER OF PROCESSES: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter arrival time of P%d: ", i + 1);
        scanf("%d", &at[i]);

        printf("Enter burst time of P%d: ", i + 1);
        scanf("%d", &bt[i]);
    }


    ct[0] = at[0] + bt[0];
    wt[0] = 0;
    tat[0] = bt[0];

    for (i = 1; i < n; i++) {
        if (ct[i - 1] < at[i]) {
            ct[i] = at[i] + bt[i];
            wt[i] = 0;
        } else {
            wt[i] = ct[i - 1] - at[i];
            ct[i] = ct[i - 1] + bt[i];
        }
        tat[i] = wt[i] + bt[i];
    }

    for (i = 0; i < n; i++) {
        twt += wt[i];
        ttat += tat[i];
    }

    awt = twt / n;
    atat = ttat / n;

    printf("\nPROCESS\tAT\tBT\tCT\tWT\tTAT");
    for (i = 0; i < n; i++) {
        printf("\nP%d\t%d\t%d\t%d\t%d\t%d",
               i + 1, at[i], bt[i], ct[i], wt[i], tat[i]);
    }

    printf("\n\nAverage Waiting Time = %.2f", awt);
    printf("\nAverage Turnaround Time = %.2f\n", atat);

    return 0;
}
