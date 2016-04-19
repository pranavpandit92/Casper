//all Enum Values

//Water Dispenser
typedef enum WATER_DISPENSER_STATE
{
	OFF				= 0,
	ON_NORMAL_FILL	= 1,
	ON_MEASURED_FILL= 2,
	PAUSE			= 3,
	REFRESH			= 4,
	UNKNOWN			= 255
};

typedef enum WATER_DISPENSER_MODE
{
	OFF		= 0,
	ON		= 1,
	UNKNOWN	= 255
};

typedef enum WATER_DISPENSER_ENABLE
{
	DISABLED	= 0,
	ENABLED		= 1,
	UNKNOWN		= 255
};
//End

//Ice Dispenser
typedef enum ICE_DISPENSER_STATE
{
	OFF		= 0,
	ON		= 1,
	UNKNOWN	= 255
};
typedef enum ICE_DISPENSER_MODE
{

	CUBED	= 0,
	CRUSHED	= 1,
	SHAVED	= 2,
	UNKNOWN	= 255
};

typedef enum ICE_DISPENSER_ENABLE
{
	DISABLED	= 0,
	ENABLED		= 1,
	UNKNOWN		= 255
};
//End

//Temp Control for all features
typedef enum TEMP_CONTROL_STATE
{
	SATISFIED		= 0,
	COOLING			= 1,
	OK_TO_DEFROST	= 2,
	ERROR_OFF		= 3,
	ERROR_ON		= 4,
	NORMAL_STORAGE	= 5,
	FREEZING		= 6,
	HARVESTING		= 7,
	DISABLED		= 8,
	MELTING			= 9,
	PULLDOWN		= 10,
	INITIALIZATION	= 11,
	COOLING_C2		= 12,
	IDLE			= 13,
	UNKNOWN			= 255
};
typedef enum TEMP_CONTROL_MODE
{
	NORMAL			= 0,
	MAX_ICE			= 1,
	MAX_COOL		= 2,
	ECO_MODE		= 3,
	SHOCK_FREEZE	= 4,
	VACATION_HIGH	= 5,
	VACATION_LOW	= 6,
	SABBATH			= 7,
	FAST_FREEZE		= 8,
	AUTO_PILOT		= 9,
	AUTO_FF			= 10,
	SMART_SENSE		= 11,
	UNKNOWN			= 255
};
typedef enum TEMP_CONTROL_ENABLED
{
	DISABLED	= 0,
	ENABLED		= 1,
	LOCKED		= 2,
	UNKNOWN		= 255
};
//End
