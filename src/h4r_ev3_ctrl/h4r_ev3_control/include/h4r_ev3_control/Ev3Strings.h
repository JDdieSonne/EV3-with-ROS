
/*WARNING WARNING WARNING WARNING WARNING
 *This file is generated by script
 *generateMaps.py, to add strings change
 *strings.yml and run it again!
 *WARNING WARNING WARNING WARNING WARNING
 */
#ifndef EV3STRINGS_H
#define EV3STRINGS_H
 #include <h4r_ev3_control/StringEnum.h>
namespace ev3_control{
class Ev3Strings
{
private: 
Ev3Strings(){}/*thou shalt never construct this!*/
public:
	typedef enum
	{
		EV3SWITCH_NOT_FOUND=-1,
		EV3SWITCH_ON,
		EV3SWITCH_OFF,
	}Ev3Switch;

	static StringEnum<Ev3Switch> ev3_switch_conv;


	typedef enum
	{
		EV3ULTRASONICMODE_NOT_FOUND=-1,
		EV3ULTRASONICMODE_US_DC_IN,
		EV3ULTRASONICMODE_US_DIST_CM,
		EV3ULTRASONICMODE_US_LISTEN,
		EV3ULTRASONICMODE_US_DC_CM,
		EV3ULTRASONICMODE_US_SI_IN,
		EV3ULTRASONICMODE_US_SI_CM,
		EV3ULTRASONICMODE_US_DIST_IN,
	}Ev3UltrasonicMode;

	static StringEnum<Ev3UltrasonicMode> ev3_ultrasonic_mode_conv;


	typedef enum
	{
		EV3COLORMODE_NOT_FOUND=-1,
		EV3COLORMODE_COL_COLOR,
		EV3COLORMODE_COL_AMBIENT,
		EV3COLORMODE_COL_REFLECT,
		EV3COLORMODE_RGB_RAW,
		EV3COLORMODE_COL_CAL,
		EV3COLORMODE_REF_RAW,
	}Ev3ColorMode;

	static StringEnum<Ev3ColorMode> ev3_color_mode_conv;


	typedef enum
	{
		EV3INFRAREDMODE_NOT_FOUND=-1,
		EV3INFRAREDMODE_IR_REMOTE,
		EV3INFRAREDMODE_IR_PROX,
		EV3INFRAREDMODE_IR_REM_A,
		EV3INFRAREDMODE_IR_SEEK,
		EV3INFRAREDMODE_IR_S_ALT,
		EV3INFRAREDMODE_IR_CAL,
	}Ev3InfraredMode;

	static StringEnum<Ev3InfraredMode> ev3_infrared_mode_conv;


	typedef enum
	{
		EV3DRIVERNAME_NOT_FOUND=-1,
		EV3DRIVERNAME_LEGO_EV3_TOUCH,
		EV3DRIVERNAME_LEGO_EV3_COLOR,
		EV3DRIVERNAME_LEGO_EV3_US,
		EV3DRIVERNAME_LEGO_EV3_GYRO,
		EV3DRIVERNAME_LEGO_EV3_IR,
	}Ev3DriverName;

	static StringEnum<Ev3DriverName> ev3_driver_name_conv;


	typedef enum
	{
		EV3POLARITY_NOT_FOUND=-1,
		EV3POLARITY_INVERSED,
		EV3POLARITY_NORMAL,
	}Ev3Polarity;

	static StringEnum<Ev3Polarity> ev3_polarity_conv;


	typedef enum
	{
		EV3PORTSTATUS_NOT_FOUND=-1,
		EV3PORTSTATUS_EV3_UART,
		EV3PORTSTATUS_NO_CONNECT,
		EV3PORTSTATUS_EV3_ANALOG,
	}Ev3PortStatus;

	static StringEnum<Ev3PortStatus> ev3_port_status_conv;


	typedef enum
	{
		EV3GYROMODE_NOT_FOUND=-1,
		EV3GYROMODE_GYRO_FAS,
		EV3GYROMODE_GYRO_ANG,
		EV3GYROMODE_GYRO_G_A,
		EV3GYROMODE_GYRO_CAL,
		EV3GYROMODE_GYRO_RATE,
	}Ev3GyroMode;

	static StringEnum<Ev3GyroMode> ev3_gyro_mode_conv;


	typedef enum
	{
		EV3MOTORCOMMANDS_NOT_FOUND=-1,
		EV3MOTORCOMMANDS_RESET,
		EV3MOTORCOMMANDS_RUN_TO_REL_POS,
		EV3MOTORCOMMANDS_RUN_FOREVER,
		EV3MOTORCOMMANDS_RUN_DIRECT,
		EV3MOTORCOMMANDS_STOP,
		EV3MOTORCOMMANDS_RUN_TIMED,
		EV3MOTORCOMMANDS_RUN_TO_ABS_POS,
	}Ev3MotorCommands;

	static StringEnum<Ev3MotorCommands> ev3_motor_commands_conv;


	typedef enum
	{
		EV3TOUCHMODE_NOT_FOUND=-1,
		EV3TOUCHMODE_TOUCH,
	}Ev3TouchMode;

	static StringEnum<Ev3TouchMode> ev3_touch_mode_conv;


	typedef enum
	{
		EV3PORTDRIVERS_NOT_FOUND=-1,
		EV3PORTDRIVERS_LEGOEV3_INPUT_PORT,
		EV3PORTDRIVERS_LEGOEV3_INPUT_OUTPORT,
	}Ev3PortDrivers;

	static StringEnum<Ev3PortDrivers> ev3_port_drivers_conv;


};
}
#endif


