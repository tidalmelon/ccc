#include<stdio.h>
#include<time.h>
#include<string.h>

void timestamp2str(time_t t, char *ptime, size_t size) {
    struct tm timeinfo;
    localtime_r(&t, &timeinfo);
    //strftime(ptime, size, "%Y/%m/%d %H:%M:%S", &timeinfo);
    strftime(ptime, size, "%Y-%m-%d", &timeinfo);
}

time_t str2timestamp(char *str_time){
    struct tm stm;
    strptime(str_time, "%Y-%m-%d",&stm);
    time_t t = mktime(&stm);
    return t;
}

void get_least_7_days(char (*days)[12], char *str_time) {
    time_t t_timestamp = str2timestamp(str_time);
    size_t i;
    for(i=0; i<7; i++) {

        time_t t_tmp = t_timestamp - i*86400;
        char ptime[50] = {0};
        timestamp2str(t_tmp, ptime, 50);
        strcpy(days[i], ptime);
    }
}


int main() {
    char strtime[] = "2019-04-01";
    char arr[7][12];

    get_least_7_days(arr, strtime);

    size_t i=0;
    for (i=0; i<7;i++) {
        printf("%s\n", arr[i]);
    }

    //time_t t = 1553068299;
    //char ptime[50] = {0};
    //timestamp2str(t, ptime, 50);
    //printf("%s\n", ptime);
    return 0;
}

