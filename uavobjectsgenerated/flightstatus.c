/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup FlightStatus FlightStatus
 * @brief Contains major flight status information for other modules.
 *
 * Autogenerated files and functions for FlightStatus Object
 * @{ 
 *
 * @file       flightstatus.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 * @brief      Implementation of the FlightStatus object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: flightstatus.xml. 
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
#include "flightstatus.h"

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
int32_t FlightStatusInitialize(void)
{
    // Compile time assertion that the FlightStatusDataPacked and FlightStatusData structs
    // have the same size (though instances of FlightStatusData
    // should be placed in memory by the linker/compiler on a 4 byte alignment).
    PIOS_STATIC_ASSERT(sizeof(FlightStatusDataPacked) == sizeof(FlightStatusData));
    
    // Don't set the handle to null if already registered
    if (UAVObjGetByID(FLIGHTSTATUS_OBJID)) {
        return -2;
    }

    // Register object with the object manager
    handle = UAVObjRegister(FLIGHTSTATUS_OBJID,
        FLIGHTSTATUS_ISSINGLEINST, FLIGHTSTATUS_ISSETTINGS, FLIGHTSTATUS_ISPRIORITY, FLIGHTSTATUS_NUMBYTES, &FlightStatusSetDefaults);

    // Done
    return handle ? 0 : -1;
}

/**
 * Initialize object fields and metadata with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void FlightStatusSetDefaults(UAVObjHandle obj, uint16_t instId)
{
    FlightStatusData data;

    // Initialize object fields to their default values
    UAVObjGetInstanceData(obj, instId, &data);
    memset(&data, 0, sizeof(FlightStatusData));
    data.Armed = 0;
    data.AssistedControlState = 0;
    data.AssistedThrottleState = 0;

    UAVObjSetInstanceData(obj, instId, &data);

    // Initialize object metadata to their default values
    if ( instId == 0 ) {
        UAVObjMetadata metadata;
        metadata.flags =
            ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
            ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
            0 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
            0 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
            UPDATEMODE_ONCHANGE << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
            UPDATEMODE_MANUAL << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT |
            UPDATEMODE_MANUAL << UAVOBJ_LOGGING_UPDATE_MODE_SHIFT;
        metadata.telemetryUpdatePeriod = 5000;
        metadata.gcsTelemetryUpdatePeriod = 0;
        metadata.loggingUpdatePeriod = 0;
        UAVObjSetMetadata(obj, &metadata);
    }
}

/**
 * Get object handle
 */
UAVObjHandle FlightStatusHandle()
{
    return handle;
}

/**
 * Get/Set object Functions
 */
void FlightStatusArmedSet(uint8_t *NewArmed)
{
    UAVObjSetDataField(FlightStatusHandle(), (void *)NewArmed, offsetof(FlightStatusData, Armed), sizeof(uint8_t));
}
void FlightStatusArmedGet(uint8_t *NewArmed)
{
    UAVObjGetDataField(FlightStatusHandle(), (void *)NewArmed, offsetof(FlightStatusData, Armed), sizeof(uint8_t));
}
void FlightStatusFlightModeSet(uint8_t *NewFlightMode)
{
    UAVObjSetDataField(FlightStatusHandle(), (void *)NewFlightMode, offsetof(FlightStatusData, FlightMode), sizeof(uint8_t));
}
void FlightStatusFlightModeGet(uint8_t *NewFlightMode)
{
    UAVObjGetDataField(FlightStatusHandle(), (void *)NewFlightMode, offsetof(FlightStatusData, FlightMode), sizeof(uint8_t));
}
void FlightStatusFlightModeAssistSet(uint8_t *NewFlightModeAssist)
{
    UAVObjSetDataField(FlightStatusHandle(), (void *)NewFlightModeAssist, offsetof(FlightStatusData, FlightModeAssist), sizeof(uint8_t));
}
void FlightStatusFlightModeAssistGet(uint8_t *NewFlightModeAssist)
{
    UAVObjGetDataField(FlightStatusHandle(), (void *)NewFlightModeAssist, offsetof(FlightStatusData, FlightModeAssist), sizeof(uint8_t));
}
void FlightStatusAssistedControlStateSet(uint8_t *NewAssistedControlState)
{
    UAVObjSetDataField(FlightStatusHandle(), (void *)NewAssistedControlState, offsetof(FlightStatusData, AssistedControlState), sizeof(uint8_t));
}
void FlightStatusAssistedControlStateGet(uint8_t *NewAssistedControlState)
{
    UAVObjGetDataField(FlightStatusHandle(), (void *)NewAssistedControlState, offsetof(FlightStatusData, AssistedControlState), sizeof(uint8_t));
}
void FlightStatusAssistedThrottleStateSet(uint8_t *NewAssistedThrottleState)
{
    UAVObjSetDataField(FlightStatusHandle(), (void *)NewAssistedThrottleState, offsetof(FlightStatusData, AssistedThrottleState), sizeof(uint8_t));
}
void FlightStatusAssistedThrottleStateGet(uint8_t *NewAssistedThrottleState)
{
    UAVObjGetDataField(FlightStatusHandle(), (void *)NewAssistedThrottleState, offsetof(FlightStatusData, AssistedThrottleState), sizeof(uint8_t));
}
void FlightStatusControlChainSet( FlightStatusControlChainData *NewControlChain )
{
    UAVObjSetDataField(FlightStatusHandle(), (void *)NewControlChain, offsetof(FlightStatusData, ControlChain), 3*sizeof(uint8_t));
}
void FlightStatusControlChainGet( FlightStatusControlChainData *NewControlChain )
{
    UAVObjGetDataField(FlightStatusHandle(), (void *)NewControlChain, offsetof(FlightStatusData, ControlChain), 3*sizeof(uint8_t));
}
void FlightStatusControlChainArraySet( uint8_t *NewControlChain )
{
    UAVObjSetDataField(FlightStatusHandle(), (void *)NewControlChain, offsetof(FlightStatusData, ControlChain), 3*sizeof(uint8_t));
}
void FlightStatusControlChainArrayGet( uint8_t *NewControlChain )
{
    UAVObjGetDataField(FlightStatusHandle(), (void *)NewControlChain, offsetof(FlightStatusData, ControlChain), 3*sizeof(uint8_t));
}


/**
 * @}
 */
