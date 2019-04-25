#include <cassert>

using namespace std;

//堆内存数组分配
char *ArrayAlloc(int n) {
    assert(n > 0);
    return new char[n];
}

int main() {
    char *a = ArrayAlloc(0);
}