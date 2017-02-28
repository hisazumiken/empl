#include <stdio.h>

struct PACKET_TYPE {
    int a;
    int b;
};

struct ULDATA {
    PACKET_TYPE pt;
    uint1 loop_flag;
    uint32 header_size;
};

int main() {
  %match(ULDATA[] p) {
    [[[10, 20], 20, 30], b] {
      printf("hello");
    }
    [ %h >= 50 ] {
      printf("fooo");
    }
  }
}
