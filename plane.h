//OUTPUT pins (as labelled on PCB)
#define RUDDER_OUT_PIN 2
#define L_TAIL_OUT_PIN 3
#define R_TAIL_OUT_PIN 4
#define R_AILERON_OUT_PIN 5
#define L_AILERON_OUT_PIN 6
#define SPARE_OUT_PIN 13
//#define DROP_OUT_PIN 10  //note this is done by communicator class


//INPUT pins (as labelled on PCB). These labels are misleading/innaccurate
#define PID_MODE_INPUT 7
#define PITCH_INPUT 8
#define ROLL_INPUT 9
#define FLAP_MODE_INPUT 11
#define YAW_INPUT 12

 
//define Demixing constants 
#define FLIP_LEFT_SIGNAL false
#define FLIP_RIGHT_SIGNAL false
#define LEFT_SIGNAL_OFFSET 100
#define RIGHT_SIGNAL_OFFSET 100

//system timing variables in microseconds
#define SLOW_LOOP_TIME 250    //Xbee send packets of data 
#define MEDIUM_LOOP_TIME 50   //servo updating
#define FAST_LOOP_TIME 1  	  //MPU updating, if PID's then compute new servo values
#define LONG_LOOP_TIME 500 	  //LED blinking

//hardware declerations
#define STATUS_LED_PIN 50

