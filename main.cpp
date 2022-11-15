#include "lancer.h"
#include <string>

using namespace std;

void test() {
//    string line = "1334588.091854: B|RecyclerViewHelp:getItemViewType";
//    string line = "1594168.149323: B|10071|VerifyClass com.bomber.lancer.Lancer$SystraceReflector";
//    string line = "1595085.330766: E|13682";
    // 1594172.428674: B|10071|E MainActivity:funC
    //1594172.428777: B|10071|B MainActivity:funD
    string line = "1594172.428674: B|10071|E:MainActivity:funC";


    char time[20];
    char type[127];
    char method[127];

//    sscanf(line.c_str(), "%*s (%[^)]", method);
//    printf("time:%s, type:%s, method:%s\n", time, type, method);


    int c = sscanf(line.c_str(), "%[0-9.0-9]: %1s", time, type);
    printf("c: %d\n", c);
    printf("time->%s, type->%s\n", time, type);

    int d = sscanf(line.c_str(), "%*s %*1s|%*[0-9]|%[^\n]", method);
    printf("d: %d\n", d);
    printf("method->%s\n", method);






}

int main(int argc, char *argv[]) {
//    test();
//    exit(0);

    if (argc != 2) {
        printf("enter file path!\n");
        exit(1);
    }
    string file = string(argv[1]);
    Lancer lancer;
    lancer.ReadFile(file);
    return 0;
}



