/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup AirspeedSensor AirspeedSensor
 * @brief The raw data from the dynamic pressure sensor with pressure, temperature and airspeed.
 *
 * Autogenerated files and functions for AirspeedSensor Object
 * @{ 
 *
 * @file       airspeedsensor.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 * @brief      Implementation of the AirspeedSensor object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: airspeedsensor.xml. 
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

#include <openpilot.h>
#include "airspeedsensor.h"

// Private variables
#if (defined(__MACH__) && defined(__APPLE__))
static UAVObjHandle handle __attribute__((section("__DATA,_uavo_handles")));
#else
static UAVObjHandle handle __attribute__((section("_uavo_handles")));
#endif

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure to initialize or -2 for already initialized
 */
int32_t AirspeedSensorInitialize(void)
{
    // Compile time assertion that the AirspeedSensorDataPacked and AirspeedSensorData structs
    // have the same size (though instances of AirspeedSensorData
    // should be placed in memory by the linker/compiler on a 4 byte alignment).
    PIOS_STATIC_ASSERT(sizeof(AirspeedSensorDataPacked) == sizeof(AirspeedSensorData));
    
    // Don't set the handle to null if already registered
    if (UAVObjGetByID(AIRSPEEDSENSOR_OBJID)) {
        return -2;
    }

    // Register object with the object manager
    handle = UAVObjRegister(AIRSPEEDSENSOR_OBJID,
        AIRSPEEDSENSOR_ISSINGLEINST, AIRSPEEDSENSOR_ISSETTINGS, AIRSPEEDSENSOR_ISPRIORITY, AIRSPEEDSENSOR_NUMBYTES, &AirspeedSensorSetDefaults);

    // Done
    return handle ? 0 : -1;
}

/**
 * Initialize object fields and metadata with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void AirspeedSensorSetDefaults(UAVObjHandle obj, uint16_t instId)
{
    AirspeedSensorData data;

    // Initialize object fields to their default values
    UAVObjGetInstanceData(obj, instId, &data);
    memset(&data, 0, sizeof(AirspeedSensorData));
    data.TrueAirspeed = -1.000000e+00f;

    UAVObjSetInstanceData(obj, instId, &data);

    // Initialize object metadata to their default values
    if ( instId == 0 ) {
        UAVObjMetadata metadata;
        metadata.flags =
            ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
            ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
            0 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
            0 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
            UPDATEMODE_PERIODIC << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
            UPDATEMODE_MANUAL << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT |
            UPDATEMODE_MANUAL << UAVOBJ_LOGGING_UPDATE_MODE_SHIFT;
        metadata.telemetryUpdatePeriod = 1000;
        metadata.gcsTelemetryUpdatePeriod = 0;
        metadata.loggingUpdatePeriod = 0;
        UAVObjSetMetadata(obj, &metadata);
    }
}

/**
 * Get object handle
 */
UAVObjHandle AirspeedSensorHandle()
{
    return handle;
}

/**
 * Get/Set object Functions
 */
void AirspeedSensorDifferentialPressureSet(float *NewDifferentialPressure)
{
    UAVObjSetDataField(AirspeedSensorHandle(), (void *)NewDifferentialPressure, offsetof(AirspeedSensorData, DifferentialPressure), sizeof(float));
}
void AirspeedSensorDifferentialPressureGet(float *NewDifferentialPressure)
{
    UAVObjGetDataField(AirspeedSensorHandle(), (void *)NewDifferentialPressure, offsetof(AirspeedSensorData, DifferentialPressure), sizeof(float));
}
void AirspeedSensorTemperatureSet(float *NewTemperature)
{
    UAVObjSetDataField(AirspeedSensorHandle(), (void *)NewTemperature, offsetof(AirspeedSensorData, Temperature), sizeof(float));
}
void AirspeedSensorTemperatureGet(float *NewTemperature)
{
    UAVObjGetDataField(AirspeedSensorHandle(), (void *)NewTemperature, offsetof(AirspeedSensorData, Temperature), sizeof(float));
}
void AirspeedSensorCalibratedAirspeedSet(float *NewCalibratedAirspeed)
{
    UAVObjSetDataField(AirspeedSensorHandle(), (void *)NewCalibratedAirspeed, offsetof(AirspeedSensorData, CalibratedAirspeed), sizeof(float));
}
void AirspeedSensorCalibratedAirspeedGet(float *NewCalibratedAirspeed)
{
    UAVObjGetDataField(AirspeedSensorHandle(), (void *)NewCalibratedAirspeed, offsetof(AirspeedSensorData, CalibratedAirspeed), sizeof(float));
}
void AirspeedSensorTrueAirspeedSet(float *NewTrueAirspeed)
{
    UAVObjSetDataField(AirspeedSensorHandle(), (void *)NewTrueAirspeed, offsetof(AirspeedSensorData, TrueAirspeed), sizeof(float));
}
void AirspeedSensorTrueAirspeedGet(float *NewTrueAirspeed)
{
    UAVObjGetDataField(AirspeedSensorHandle(), (void *)NewTrueAirspeed, offsetof(AirspeedSensorData, TrueAirspeed), sizeof(float));
}
void AirspeedSensorSensorValueSet(uint16_t *NewSensorValue)
{
    UAVObjSetDataField(AirspeedSensorHandle(), (void *)NewSensorValue, offsetof(AirspeedSensorData, SensorValue), sizeof(uint16_t));
}
void AirspeedSensorSensorValueGet(uint16_t *NewSensorValue)
{
    UAVObjGetDataField(AirspeedSensorHandle(), (void *)NewSensorValue, offsetof(AirspeedSensorData, SensorValue), sizeof(uint16_t));
}
void AirspeedSensorSensorValueTemperatureSet(uint16_t *NewSensorValueTemperature)
{
    UAVObjSetDataField(AirspeedSensorHandle(), (void *)NewSensorValueTemperature, offsetof(AirspeedSensorData, SensorValueTemperature), sizeof(uint16_t));
}
void AirspeedSensorSensorValueTemperatureGet(uint16_t *NewSensorValueTemperature)
{
    UAVObjGetDataField(AirspeedSensorHandle(), (void *)NewSensorValueTemperature, offsetof(AirspeedSensorData, SensorValueTemperature), sizeof(uint16_t));
}
void AirspeedSensorSensorConnectedSet(uint8_t *NewSensorConnected)
{
    UAVObjSetDataField(AirspeedSensorHandle(), (void *)NewSensorConnected, offsetof(AirspeedSensorData, SensorConnected), sizeof(uint8_t));
}
void AirspeedSensorSensorConnectedGet(uint8_t *NewSensorConnected)
{
    UAVObjGetDataField(AirspeedSensorHandle(), (void *)NewSensorConnected, offsetof(AirspeedSensorData, SensorConnected), sizeof(uint8_t));
}


/**
 * @}
 */
