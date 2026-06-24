#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[]) {
    if (argc == 1) {
        fprintf(2, "sleep: parameter not passed");
        return 1;
    }
    pause(atoi(argv[1])*10);
    return 0;
}