#include<stdio.h>
#include<time.h>

void timestamp2str(time_t t, char *ptime, size_t size) {
    struct tm timeinfo;
    localtime_r(&t, &timeinfo);
    strftime(ptime, size, "%Y/%m/%d %H:%M:%S", &timeinfo);
}

int main() {

    time_t t = 1553068299;
    char ptime[50] = {0};

    timestamp2str(t, ptime, 50);

    printf("%s\n", ptime);

    return 0;
}

