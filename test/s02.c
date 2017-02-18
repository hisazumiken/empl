define ULDATA {
    uint32 dest;
    uint32 src;
    uint32 fid;
    uint8 htl;
    uint8 ackn;
    uint8 retryn;
    PACKET_TYPE pt;
    uint1 loop_flag;
    uint32 header_size;
};

match(p) {
    case ULDATA[ a, PACKET_TYPE[ b ] ] {
            printf ("Hello World\n");
        }
    case ULDATA[ b ] {
            foo();
        }
}