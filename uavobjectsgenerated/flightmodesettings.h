/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup FlightModeSettings FlightModeSettings 
 * @brief Settings to control arming and flight mode
 *
 * Autogenerated files and functions for FlightModeSettings Object
 *
 * @{ 
 *
 * @file       flightmodesettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 * @brief      Implementation of the FlightModeSettings object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: flightmodesettings.xml. 
 *             This is an automatically generated file.
 *             DO NOT modify manually.
 *
 * @see        The GNU Public License (GPL) Version 3
 *
 *****************************************************************************/
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#ifndef FLIGHTMODESETTINGS_H
#define FLIGHTMODESETTINGS_H

/* Object constants */
#define FLIGHTMODESETTINGS_OBJID 0xBC5AE17C
#define FLIGHTMODESETTINGS_ISSINGLEINST 1
#define FLIGHTMODESETTINGS_ISSETTINGS 1
#define FLIGHTMODESETTINGS_ISPRIORITY 0
#define FLIGHTMODESETTINGS_NUMBYTES sizeof(FlightModeSettingsData)

/* Generic interface functions */
int32_t FlightModeSettingsInitialize();
UAVObjHandle FlightModeSettingsHandle();
void FlightModeSettingsSetDefaults(UAVObjHandle obj, uint16_t instId);

typedef struct __attribute__ ((__packed__)) {
    float Horizontal;
    float Vertical;
}  FlightModeSettingsPositionHoldOffsetData ;
typedef struct __attribute__ ((__packed__)) {
    float array[2];
}  FlightModeSettingsPositionHoldOffsetDataArray ;
#define FlightModeSettingsPositionHoldOffsetToArray( var ) UAVObjectFieldToArray( FlightModeSettingsPositionHoldOffsetData, var )

typedef struct __attribute__ ((__packed__)) {
    uint8_t Roll;
    uint8_t Pitch;
    uint8_t Yaw;
    uint8_t Thrust;
}  FlightModeSettingsStabilization1SettingsData ;
typedef struct __attribute__ ((__packed__)) {
    uint8_t array[4];
}  FlightModeSettingsStabilization1SettingsDataArray ;
#define FlightModeSettingsStabilization1SettingsToArray( var ) UAVObjectFieldToArray( FlightModeSettingsStabilization1SettingsData, var )

typedef struct __attribute__ ((__packed__)) {
    uint8_t Roll;
    uint8_t Pitch;
    uint8_t Yaw;
    uint8_t Thrust;
}  FlightModeSettingsStabilization2SettingsData ;
typedef struct __attribute__ ((__packed__)) {
    uint8_t array[4];
}  FlightModeSettingsStabilization2SettingsDataArray ;
#define FlightModeSettingsStabilization2SettingsToArray( var ) UAVObjectFieldToArray( FlightModeSettingsStabilization2SettingsData, var )

typedef struct __attribute__ ((__packed__)) {
    uint8_t Roll;
    uint8_t Pitch;
    uint8_t Yaw;
    uint8_t Thrust;
}  FlightModeSettingsStabilization3SettingsData ;
typedef struct __attribute__ ((__packed__)) {
    uint8_t array[4];
}  FlightModeSettingsStabilization3SettingsDataArray ;
#define FlightModeSettingsStabilization3SettingsToArray( var ) UAVObjectFieldToArray( FlightModeSettingsStabilization3SettingsData, var )

typedef struct __attribute__ ((__packed__)) {
    uint8_t Roll;
    uint8_t Pitch;
    uint8_t Yaw;
    uint8_t Thrust;
}  FlightModeSettingsStabilization4SettingsData ;
typedef struct __attribute__ ((__packed__)) {
    uint8_t array[4];
}  FlightModeSettingsStabilization4SettingsDataArray ;
#define FlightModeSettingsStabilization4SettingsToArray( var ) UAVObjectFieldToArray( FlightModeSettingsStabilization4SettingsData, var )

typedef struct __attribute__ ((__packed__)) {
    uint8_t Roll;
    uint8_t Pitch;
    uint8_t Yaw;
    uint8_t Thrust;
}  FlightModeSettingsStabilization5SettingsData ;
typedef struct __attribute__ ((__packed__)) {
    uint8_t array[4];
}  FlightModeSettingsStabilization5SettingsDataArray ;
#define FlightModeSettingsStabilization5SettingsToArray( var ) UAVObjectFieldToArray( FlightModeSettingsStabilization5SettingsData, var )

typedef struct __attribute__ ((__packed__)) {
    uint8_t Roll;
    uint8_t Pitch;
    uint8_t Yaw;
    uint8_t Thrust;
}  FlightModeSettingsStabilization6SettingsData ;
typedef struct __attribute__ ((__packed__)) {
    uint8_t array[4];
}  FlightModeSettingsStabilization6SettingsDataArray ;
#define FlightModeSettingsStabilization6SettingsToArray( var ) UAVObjectFieldToArray( FlightModeSettingsStabilization6SettingsData, var )


/*
 * Packed Object data (unaligned).
 * Should only be used where 4 byte alignment can be guaranteed
 * (eg a single instance on the heap)
 */
typedef struct {
    float ReturnToBaseAltitudeOffset;
    float LandingVelocity;
    FlightModeSettingsPositionHoldOffsetData PositionHoldOffset;
    float VarioControlLowPassAlpha;
    uint16_t ArmedTimeout;
    uint16_t ArmingSequenceTime;
    uint16_t DisarmingSequenceTime;
    uint8_t Arming;
    FlightModeSettingsStabilization1SettingsData Stabilization1Settings;
    FlightModeSettingsStabilization2SettingsData Stabilization2Settings;
    FlightModeSettingsStabilization3SettingsData Stabilization3Settings;
    FlightModeSettingsStabilization4SettingsData Stabilization4Settings;
    FlightModeSettingsStabilization5SettingsData Stabilization5Settings;
    FlightModeSettingsStabilization6SettingsData Stabilization6Settings;
    uint8_t FlightModePosition[6];
    uint8_t DisableSanityChecks;
} __attribute__((packed)) FlightModeSettingsDataPacked;

/*
 * Packed Object data.
 * Alignment is forced to 4 bytes so as to avoid the potential for CPU usage faults
 * on Cortex M4F during load/store of float UAVO fields
 */
typedef FlightModeSettingsDataPacked __attribute__((aligned(4))) FlightModeSettingsData;
    
/* Typesafe Object access functions */
static inline int32_t FlightModeSettingsGet(FlightModeSettingsData *dataOut) { return UAVObjGetData(FlightModeSettingsHandle(), dataOut); }
static inline int32_t FlightModeSettingsSet(const FlightModeSettingsData *dataIn) { return UAVObjSetData(FlightModeSettingsHandle(), dataIn); }
static inline int32_t FlightModeSettingsInstGet(uint16_t instId, FlightModeSettingsData *dataOut) { return UAVObjGetInstanceData(FlightModeSettingsHandle(), instId, dataOut); }
static inline int32_t FlightModeSettingsInstSet(uint16_t instId, const FlightModeSettingsData *dataIn) { return UAVObjSetInstanceData(FlightModeSettingsHandle(), instId, dataIn); }
static inline int32_t FlightModeSettingsConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(FlightModeSettingsHandle(), queue, EV_MASK_ALL_UPDATES); }
static inline int32_t FlightModeSettingsConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(FlightModeSettingsHandle(), cb, EV_MASK_ALL_UPDATES); }
static inline uint16_t FlightModeSettingsCreateInstance() { return UAVObjCreateInstance(FlightModeSettingsHandle(), &FlightModeSettingsSetDefaults); }
static inline void FlightModeSettingsRequestUpdate() { UAVObjRequestUpdate(FlightModeSettingsHandle()); }
static inline void FlightModeSettingsRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(FlightModeSettingsHandle(), instId); }
static inline void FlightModeSettingsUpdated() { UAVObjUpdated(FlightModeSettingsHandle()); }
static inline void FlightModeSettingsInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(FlightModeSettingsHandle(), instId); }
static inline void FlightModeSettingsLogging() { UAVObjLogging(FlightModeSettingsHandle()); }
static inline void FlightModeSettingsInstLogging(uint16_t instId) { UAVObjInstanceLogging(FlightModeSettingsHandle(), instId); }
static inline int32_t FlightModeSettingsGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(FlightModeSettingsHandle(), dataOut); }
static inline int32_t FlightModeSettingsSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(FlightModeSettingsHandle(), dataIn); }
static inline int8_t FlightModeSettingsReadOnly() { return UAVObjReadOnly(FlightModeSettingsHandle()); }

/* Field ReturnToBaseAltitudeOffset information */

/* Field LandingVelocity information */

/* Field PositionHoldOffset information */

// Array element names for field PositionHoldOffset
typedef enum {
    FLIGHTMODESETTINGS_POSITIONHOLDOFFSET_HORIZONTAL=0,
    FLIGHTMODESETTINGS_POSITIONHOLDOFFSET_VERTICAL=1
} FlightModeSettingsPositionHoldOffsetElem;

// Number of elements for field PositionHoldOffset
#define FLIGHTMODESETTINGS_POSITIONHOLDOFFSET_NUMELEM 2

/* Field VarioControlLowPassAlpha information */

/* Field ArmedTimeout information */

/* Field ArmingSequenceTime information */

/* Field DisarmingSequenceTime information */

/* Field Arming information */

// Enumeration options for field Arming
typedef enum {
    FLIGHTMODESETTINGS_ARMING_ALWAYSDISARMED=0,
    FLIGHTMODESETTINGS_ARMING_ALWAYSARMED=1,
    FLIGHTMODESETTINGS_ARMING_ROLLLEFT=2,
    FLIGHTMODESETTINGS_ARMING_ROLLRIGHT=3,
    FLIGHTMODESETTINGS_ARMING_PITCHFORWARD=4,
    FLIGHTMODESETTINGS_ARMING_PITCHAFT=5,
    FLIGHTMODESETTINGS_ARMING_YAWLEFT=6,
    FLIGHTMODESETTINGS_ARMING_YAWRIGHT=7,
    FLIGHTMODESETTINGS_ARMING_ACCESSORY0=8,
    FLIGHTMODESETTINGS_ARMING_ACCESSORY1=9,
    FLIGHTMODESETTINGS_ARMING_ACCESSORY2=10
} FlightModeSettingsArmingOptions;

/* Field Stabilization1Settings information */

// Enumeration options for field Stabilization1Settings
typedef enum {
    FLIGHTMODESETTINGS_STABILIZATION1SETTINGS_MANUAL=0,
    FLIGHTMODESETTINGS_STABILIZATION1SETTINGS_RATE=1,
    FLIGHTMODESETTINGS_STABILIZATION1SETTINGS_ATTITUDE=2,
    FLIGHTMODESETTINGS_STABILIZATION1SETTINGS_AXISLOCK=3,
    FLIGHTMODESETTINGS_STABILIZATION1SETTINGS_WEAKLEVELING=4,
    FLIGHTMODESETTINGS_STABILIZATION1SETTINGS_VIRTUALBAR=5,
    FLIGHTMODESETTINGS_STABILIZATION1SETTINGS_ACRO=6,
    FLIGHTMODESETTINGS_STABILIZATION1SETTINGS_RATTITUDE=7,
    FLIGHTMODESETTINGS_STABILIZATION1SETTINGS_ALTITUDEHOLD=8,
    FLIGHTMODESETTINGS_STABILIZATION1SETTINGS_ALTITUDEVARIO=9,
    FLIGHTMODESETTINGS_STABILIZATION1SETTINGS_CRUISECONTROL=10
} FlightModeSettingsStabilization1SettingsOptions;

// Array element names for field Stabilization1Settings
typedef enum {
    FLIGHTMODESETTINGS_STABILIZATION1SETTINGS_ROLL=0,
    FLIGHTMODESETTINGS_STABILIZATION1SETTINGS_PITCH=1,
    FLIGHTMODESETTINGS_STABILIZATION1SETTINGS_YAW=2,
    FLIGHTMODESETTINGS_STABILIZATION1SETTINGS_THRUST=3
} FlightModeSettingsStabilization1SettingsElem;

// Number of elements for field Stabilization1Settings
#define FLIGHTMODESETTINGS_STABILIZATION1SETTINGS_NUMELEM 4

/* Field Stabilization2Settings information */

// Enumeration options for field Stabilization2Settings
typedef enum {
    FLIGHTMODESETTINGS_STABILIZATION2SETTINGS_MANUAL=0,
    FLIGHTMODESETTINGS_STABILIZATION2SETTINGS_RATE=1,
    FLIGHTMODESETTINGS_STABILIZATION2SETTINGS_ATTITUDE=2,
    FLIGHTMODESETTINGS_STABILIZATION2SETTINGS_AXISLOCK=3,
    FLIGHTMODESETTINGS_STABILIZATION2SETTINGS_WEAKLEVELING=4,
    FLIGHTMODESETTINGS_STABILIZATION2SETTINGS_VIRTUALBAR=5,
    FLIGHTMODESETTINGS_STABILIZATION2SETTINGS_ACRO=6,
    FLIGHTMODESETTINGS_STABILIZATION2SETTINGS_RATTITUDE=7,
    FLIGHTMODESETTINGS_STABILIZATION2SETTINGS_ALTITUDEHOLD=8,
    FLIGHTMODESETTINGS_STABILIZATION2SETTINGS_ALTITUDEVARIO=9,
    FLIGHTMODESETTINGS_STABILIZATION2SETTINGS_CRUISECONTROL=10
} FlightModeSettingsStabilization2SettingsOptions;

// Array element names for field Stabilization2Settings
typedef enum {
    FLIGHTMODESETTINGS_STABILIZATION2SETTINGS_ROLL=0,
    FLIGHTMODESETTINGS_STABILIZATION2SETTINGS_PITCH=1,
    FLIGHTMODESETTINGS_STABILIZATION2SETTINGS_YAW=2,
    FLIGHTMODESETTINGS_STABILIZATION2SETTINGS_THRUST=3
} FlightModeSettingsStabilization2SettingsElem;

// Number of elements for field Stabilization2Settings
#define FLIGHTMODESETTINGS_STABILIZATION2SETTINGS_NUMELEM 4

/* Field Stabilization3Settings information */

// Enumeration options for field Stabilization3Settings
typedef enum {
    FLIGHTMODESETTINGS_STABILIZATION3SETTINGS_MANUAL=0,
    FLIGHTMODESETTINGS_STABILIZATION3SETTINGS_RATE=1,
    FLIGHTMODESETTINGS_STABILIZATION3SETTINGS_ATTITUDE=2,
    FLIGHTMODESETTINGS_STABILIZATION3SETTINGS_AXISLOCK=3,
    FLIGHTMODESETTINGS_STABILIZATION3SETTINGS_WEAKLEVELING=4,
    FLIGHTMODESETTINGS_STABILIZATION3SETTINGS_VIRTUALBAR=5,
    FLIGHTMODESETTINGS_STABILIZATION3SETTINGS_ACRO=6,
    FLIGHTMODESETTINGS_STABILIZATION3SETTINGS_RATTITUDE=7,
    FLIGHTMODESETTINGS_STABILIZATION3SETTINGS_ALTITUDEHOLD=8,
    FLIGHTMODESETTINGS_STABILIZATION3SETTINGS_ALTITUDEVARIO=9,
    FLIGHTMODESETTINGS_STABILIZATION3SETTINGS_CRUISECONTROL=10
} FlightModeSettingsStabilization3SettingsOptions;

// Array element names for field Stabilization3Settings
typedef enum {
    FLIGHTMODESETTINGS_STABILIZATION3SETTINGS_ROLL=0,
    FLIGHTMODESETTINGS_STABILIZATION3SETTINGS_PITCH=1,
    FLIGHTMODESETTINGS_STABILIZATION3SETTINGS_YAW=2,
    FLIGHTMODESETTINGS_STABILIZATION3SETTINGS_THRUST=3
} FlightModeSettingsStabilization3SettingsElem;

// Number of elements for field Stabilization3Settings
#define FLIGHTMODESETTINGS_STABILIZATION3SETTINGS_NUMELEM 4

/* Field Stabilization4Settings information */

// Enumeration options for field Stabilization4Settings
typedef enum {
    FLIGHTMODESETTINGS_STABILIZATION4SETTINGS_MANUAL=0,
    FLIGHTMODESETTINGS_STABILIZATION4SETTINGS_RATE=1,
    FLIGHTMODESETTINGS_STABILIZATION4SETTINGS_ATTITUDE=2,
    FLIGHTMODESETTINGS_STABILIZATION4SETTINGS_AXISLOCK=3,
    FLIGHTMODESETTINGS_STABILIZATION4SETTINGS_WEAKLEVELING=4,
    FLIGHTMODESETTINGS_STABILIZATION4SETTINGS_VIRTUALBAR=5,
    FLIGHTMODESETTINGS_STABILIZATION4SETTINGS_ACRO=6,
    FLIGHTMODESETTINGS_STABILIZATION4SETTINGS_RATTITUDE=7,
    FLIGHTMODESETTINGS_STABILIZATION4SETTINGS_ALTITUDEHOLD=8,
    FLIGHTMODESETTINGS_STABILIZATION4SETTINGS_ALTITUDEVARIO=9,
    FLIGHTMODESETTINGS_STABILIZATION4SETTINGS_CRUISECONTROL=10
} FlightModeSettingsStabilization4SettingsOptions;

// Array element names for field Stabilization4Settings
typedef enum {
    FLIGHTMODESETTINGS_STABILIZATION4SETTINGS_ROLL=0,
    FLIGHTMODESETTINGS_STABILIZATION4SETTINGS_PITCH=1,
    FLIGHTMODESETTINGS_STABILIZATION4SETTINGS_YAW=2,
    FLIGHTMODESETTINGS_STABILIZATION4SETTINGS_THRUST=3
} FlightModeSettingsStabilization4SettingsElem;

// Number of elements for field Stabilization4Settings
#define FLIGHTMODESETTINGS_STABILIZATION4SETTINGS_NUMELEM 4

/* Field Stabilization5Settings information */

// Enumeration options for field Stabilization5Settings
typedef enum {
    FLIGHTMODESETTINGS_STABILIZATION5SETTINGS_MANUAL=0,
    FLIGHTMODESETTINGS_STABILIZATION5SETTINGS_RATE=1,
    FLIGHTMODESETTINGS_STABILIZATION5SETTINGS_ATTITUDE=2,
    FLIGHTMODESETTINGS_STABILIZATION5SETTINGS_AXISLOCK=3,
    FLIGHTMODESETTINGS_STABILIZATION5SETTINGS_WEAKLEVELING=4,
    FLIGHTMODESETTINGS_STABILIZATION5SETTINGS_VIRTUALBAR=5,
    FLIGHTMODESETTINGS_STABILIZATION5SETTINGS_ACRO=6,
    FLIGHTMODESETTINGS_STABILIZATION5SETTINGS_RATTITUDE=7,
    FLIGHTMODESETTINGS_STABILIZATION5SETTINGS_ALTITUDEHOLD=8,
    FLIGHTMODESETTINGS_STABILIZATION5SETTINGS_ALTITUDEVARIO=9,
    FLIGHTMODESETTINGS_STABILIZATION5SETTINGS_CRUISECONTROL=10
} FlightModeSettingsStabilization5SettingsOptions;

// Array element names for field Stabilization5Settings
typedef enum {
    FLIGHTMODESETTINGS_STABILIZATION5SETTINGS_ROLL=0,
    FLIGHTMODESETTINGS_STABILIZATION5SETTINGS_PITCH=1,
    FLIGHTMODESETTINGS_STABILIZATION5SETTINGS_YAW=2,
    FLIGHTMODESETTINGS_STABILIZATION5SETTINGS_THRUST=3
} FlightModeSettingsStabilization5SettingsElem;

// Number of elements for field Stabilization5Settings
#define FLIGHTMODESETTINGS_STABILIZATION5SETTINGS_NUMELEM 4

/* Field Stabilization6Settings information */

// Enumeration options for field Stabilization6Settings
typedef enum {
    FLIGHTMODESETTINGS_STABILIZATION6SETTINGS_MANUAL=0,
    FLIGHTMODESETTINGS_STABILIZATION6SETTINGS_RATE=1,
    FLIGHTMODESETTINGS_STABILIZATION6SETTINGS_ATTITUDE=2,
    FLIGHTMODESETTINGS_STABILIZATION6SETTINGS_AXISLOCK=3,
    FLIGHTMODESETTINGS_STABILIZATION6SETTINGS_WEAKLEVELING=4,
    FLIGHTMODESETTINGS_STABILIZATION6SETTINGS_VIRTUALBAR=5,
    FLIGHTMODESETTINGS_STABILIZATION6SETTINGS_ACRO=6,
    FLIGHTMODESETTINGS_STABILIZATION6SETTINGS_RATTITUDE=7,
    FLIGHTMODESETTINGS_STABILIZATION6SETTINGS_ALTITUDEHOLD=8,
    FLIGHTMODESETTINGS_STABILIZATION6SETTINGS_ALTITUDEVARIO=9,
    FLIGHTMODESETTINGS_STABILIZATION6SETTINGS_CRUISECONTROL=10
} FlightModeSettingsStabilization6SettingsOptions;

// Array element names for field Stabilization6Settings
typedef enum {
    FLIGHTMODESETTINGS_STABILIZATION6SETTINGS_ROLL=0,
    FLIGHTMODESETTINGS_STABILIZATION6SETTINGS_PITCH=1,
    FLIGHTMODESETTINGS_STABILIZATION6SETTINGS_YAW=2,
    FLIGHTMODESETTINGS_STABILIZATION6SETTINGS_THRUST=3
} FlightModeSettingsStabilization6SettingsElem;

// Number of elements for field Stabilization6Settings
#define FLIGHTMODESETTINGS_STABILIZATION6SETTINGS_NUMELEM 4

/* Field FlightModePosition information */

// Enumeration options for field FlightModePosition
typedef enum {
    FLIGHTMODESETTINGS_FLIGHTMODEPOSITION_MANUAL=0,
    FLIGHTMODESETTINGS_FLIGHTMODEPOSITION_STABILIZED1=1,
    FLIGHTMODESETTINGS_FLIGHTMODEPOSITION_STABILIZED2=2,
    FLIGHTMODESETTINGS_FLIGHTMODEPOSITION_STABILIZED3=3,
    FLIGHTMODESETTINGS_FLIGHTMODEPOSITION_STABILIZED4=4,
    FLIGHTMODESETTINGS_FLIGHTMODEPOSITION_STABILIZED5=5,
    FLIGHTMODESETTINGS_FLIGHTMODEPOSITION_STABILIZED6=6,
    FLIGHTMODESETTINGS_FLIGHTMODEPOSITION_POSITIONHOLD=7,
    FLIGHTMODESETTINGS_FLIGHTMODEPOSITION_COURSELOCK=8,
    FLIGHTMODESETTINGS_FLIGHTMODEPOSITION_POSITIONROAM=9,
    FLIGHTMODESETTINGS_FLIGHTMODEPOSITION_HOMELEASH=10,
    FLIGHTMODESETTINGS_FLIGHTMODEPOSITION_ABSOLUTEPOSITION=11,
    FLIGHTMODESETTINGS_FLIGHTMODEPOSITION_RETURNTOBASE=12,
    FLIGHTMODESETTINGS_FLIGHTMODEPOSITION_LAND=13,
    FLIGHTMODESETTINGS_FLIGHTMODEPOSITION_PATHPLANNER=14,
    FLIGHTMODESETTINGS_FLIGHTMODEPOSITION_POI=15,
    FLIGHTMODESETTINGS_FLIGHTMODEPOSITION_AUTOCRUISE=16
} FlightModeSettingsFlightModePositionOptions;

// Number of elements for field FlightModePosition
#define FLIGHTMODESETTINGS_FLIGHTMODEPOSITION_NUMELEM 6

/* Field DisableSanityChecks information */

// Enumeration options for field DisableSanityChecks
typedef enum {
    FLIGHTMODESETTINGS_DISABLESANITYCHECKS_FALSE=0,
    FLIGHTMODESETTINGS_DISABLESANITYCHECKS_TRUE=1
} FlightModeSettingsDisableSanityChecksOptions;



/* Set/Get functions */
extern void FlightModeSettingsReturnToBaseAltitudeOffsetSet(float *NewReturnToBaseAltitudeOffset);
extern void FlightModeSettingsReturnToBaseAltitudeOffsetGet(float *NewReturnToBaseAltitudeOffset);
extern void FlightModeSettingsLandingVelocitySet(float *NewLandingVelocity);
extern void FlightModeSettingsLandingVelocityGet(float *NewLandingVelocity);
extern void FlightModeSettingsPositionHoldOffsetSet(FlightModeSettingsPositionHoldOffsetData *NewPositionHoldOffset);
extern void FlightModeSettingsPositionHoldOffsetGet(FlightModeSettingsPositionHoldOffsetData *NewPositionHoldOffset);
extern void FlightModeSettingsPositionHoldOffsetArraySet(float *NewPositionHoldOffset);
extern void FlightModeSettingsPositionHoldOffsetArrayGet(float *NewPositionHoldOffset);
extern void FlightModeSettingsVarioControlLowPassAlphaSet(float *NewVarioControlLowPassAlpha);
extern void FlightModeSettingsVarioControlLowPassAlphaGet(float *NewVarioControlLowPassAlpha);
extern void FlightModeSettingsArmedTimeoutSet(uint16_t *NewArmedTimeout);
extern void FlightModeSettingsArmedTimeoutGet(uint16_t *NewArmedTimeout);
extern void FlightModeSettingsArmingSequenceTimeSet(uint16_t *NewArmingSequenceTime);
extern void FlightModeSettingsArmingSequenceTimeGet(uint16_t *NewArmingSequenceTime);
extern void FlightModeSettingsDisarmingSequenceTimeSet(uint16_t *NewDisarmingSequenceTime);
extern void FlightModeSettingsDisarmingSequenceTimeGet(uint16_t *NewDisarmingSequenceTime);
extern void FlightModeSettingsArmingSet(uint8_t *NewArming);
extern void FlightModeSettingsArmingGet(uint8_t *NewArming);
extern void FlightModeSettingsStabilization1SettingsSet(FlightModeSettingsStabilization1SettingsData *NewStabilization1Settings);
extern void FlightModeSettingsStabilization1SettingsGet(FlightModeSettingsStabilization1SettingsData *NewStabilization1Settings);
extern void FlightModeSettingsStabilization1SettingsArraySet(uint8_t *NewStabilization1Settings);
extern void FlightModeSettingsStabilization1SettingsArrayGet(uint8_t *NewStabilization1Settings);
extern void FlightModeSettingsStabilization2SettingsSet(FlightModeSettingsStabilization2SettingsData *NewStabilization2Settings);
extern void FlightModeSettingsStabilization2SettingsGet(FlightModeSettingsStabilization2SettingsData *NewStabilization2Settings);
extern void FlightModeSettingsStabilization2SettingsArraySet(uint8_t *NewStabilization2Settings);
extern void FlightModeSettingsStabilization2SettingsArrayGet(uint8_t *NewStabilization2Settings);
extern void FlightModeSettingsStabilization3SettingsSet(FlightModeSettingsStabilization3SettingsData *NewStabilization3Settings);
extern void FlightModeSettingsStabilization3SettingsGet(FlightModeSettingsStabilization3SettingsData *NewStabilization3Settings);
extern void FlightModeSettingsStabilization3SettingsArraySet(uint8_t *NewStabilization3Settings);
extern void FlightModeSettingsStabilization3SettingsArrayGet(uint8_t *NewStabilization3Settings);
extern void FlightModeSettingsStabilization4SettingsSet(FlightModeSettingsStabilization4SettingsData *NewStabilization4Settings);
extern void FlightModeSettingsStabilization4SettingsGet(FlightModeSettingsStabilization4SettingsData *NewStabilization4Settings);
extern void FlightModeSettingsStabilization4SettingsArraySet(uint8_t *NewStabilization4Settings);
extern void FlightModeSettingsStabilization4SettingsArrayGet(uint8_t *NewStabilization4Settings);
extern void FlightModeSettingsStabilization5SettingsSet(FlightModeSettingsStabilization5SettingsData *NewStabilization5Settings);
extern void FlightModeSettingsStabilization5SettingsGet(FlightModeSettingsStabilization5SettingsData *NewStabilization5Settings);
extern void FlightModeSettingsStabilization5SettingsArraySet(uint8_t *NewStabilization5Settings);
extern void FlightModeSettingsStabilization5SettingsArrayGet(uint8_t *NewStabilization5Settings);
extern void FlightModeSettingsStabilization6SettingsSet(FlightModeSettingsStabilization6SettingsData *NewStabilization6Settings);
extern void FlightModeSettingsStabilization6SettingsGet(FlightModeSettingsStabilization6SettingsData *NewStabilization6Settings);
extern void FlightModeSettingsStabilization6SettingsArraySet(uint8_t *NewStabilization6Settings);
extern void FlightModeSettingsStabilization6SettingsArrayGet(uint8_t *NewStabilization6Settings);
extern void FlightModeSettingsFlightModePositionSet(uint8_t *NewFlightModePosition);
extern void FlightModeSettingsFlightModePositionGet(uint8_t *NewFlightModePosition);
extern void FlightModeSettingsDisableSanityChecksSet(uint8_t *NewDisableSanityChecks);
extern void FlightModeSettingsDisableSanityChecksGet(uint8_t *NewDisableSanityChecks);


#endif // FLIGHTMODESETTINGS_H

/**
 * @}
 * @}
 */
