// This is an example of a unioned struct for use with peripherals.
// Source - MPLAB SPI test that I did using a https://www.mikroe.com/6dof-imu-4-click
typedef union{
   struct __attribute__((__packed__)){
       int16_t     aX,aY,aZ;
       int16_t    temp;
       int16_t     gX,gY,gZ;
   } IMU;
   uint16_t asInt16s[7];
   uint8_t asUInt8s[14];
} IMU_DATA_PACKET_T;
