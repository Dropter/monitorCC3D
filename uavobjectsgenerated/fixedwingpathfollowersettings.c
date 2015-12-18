/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup FixedWingPathFollowerSettings FixedWingPathFollowerSettings
 * @brief Settings for the @ref FixedWingPathFollowerModule
 *
 * Autogenerated files and functions for FixedWingPathFollowerSettings Object
 * @{ 
 *
 * @file       fixedwingpathfollowersettings.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 * @brief      Implementation of the FixedWingPathFollowerSettings object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: fixedwingpathfollowersettings.xml. 
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
#include "fixedwingpathfollowersettings.h"

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
int32_t FixedWingPathFollowerSettingsInitialize(void)
{
    // Compile time assertion that the FixedWingPathFollowerSettingsDataPacked and FixedWingPathFollowerSettingsData structs
    // have the same size (though instances of FixedWingPathFollowerSettingsData
    // should be placed in memory by the linker/compiler on a 4 byte alignment).
    PIOS_STATIC_ASSERT(sizeof(FixedWingPathFollowerSettingsDataPacked) == sizeof(FixedWingPathFollowerSettingsData));
    
    // Don't set the handle to null if already registered
    if (UAVObjGetByID(FIXEDWINGPATHFOLLOWERSETTINGS_OBJID)) {
        return -2;
    }

    // Register object with the object manager
    handle = UAVObjRegister(FIXEDWINGPATHFOLLOWERSETTINGS_OBJID,
        FIXEDWINGPATHFOLLOWERSETTINGS_ISSINGLEINST, FIXEDWINGPATHFOLLOWERSETTINGS_ISSETTINGS, FIXEDWINGPATHFOLLOWERSETTINGS_ISPRIORITY, FIXEDWINGPATHFOLLOWERSETTINGS_NUMBYTES, &FixedWingPathFollowerSettingsSetDefaults);

    // Done
    return handle ? 0 : -1;
}

/**
 * Initialize object fields and metadata with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void FixedWingPathFollowerSettingsSetDefaults(UAVObjHandle obj, uint16_t instId)
{
    FixedWingPathFollowerSettingsData data;

    // Initialize object fields to their default values
    UAVObjGetInstanceData(obj, instId, &data);
    memset(&data, 0, sizeof(FixedWingPathFollowerSettingsData));
    data.HorizontalVelMax = 2.000000e+01f;
    data.HorizontalVelMin = 1.000000e+01f;
    data.VerticalVelMax = 1.000000e+01f;
    data.CourseFeedForward = 3.000000e+00f;
    data.ReverseCourseOverlap = 2.000000e+01f;
    data.HorizontalPosP = 2.000000e-01f;
    data.VerticalPosP = 4.000000e-01f;
    data.CoursePI.Kp = 2.000000e-01f;
    data.CoursePI.Ki = 0.000000e+00f;
    data.CoursePI.ILimit = 0.000000e+00f;
    data.SpeedPI.Kp = 2.500000e+00f;
    data.SpeedPI.Ki = 2.500000e-01f;
    data.SpeedPI.ILimit = 1.000000e+01f;
    data.VerticalToPitchCrossFeed.Kp = 5.000000e+00f;
    data.VerticalToPitchCrossFeed.Max = 1.000000e+01f;
    data.AirspeedToPowerCrossFeed.Kp = 2.000000e-01f;
    data.AirspeedToPowerCrossFeed.Max = 1.000000e+00f;
    data.PowerPI.Kp = 1.000000e-02f;
    data.PowerPI.Ki = 5.000000e-02f;
    data.PowerPI.ILimit = 5.000000e-01f;
    data.RollLimit.Min = -4.500000e+01f;
    data.RollLimit.Neutral = 0.000000e+00f;
    data.RollLimit.Max = 4.500000e+01f;
    data.PitchLimit.Min = -1.000000e+01f;
    data.PitchLimit.Neutral = 5.000000e+00f;
    data.PitchLimit.Max = 2.000000e+01f;
    data.ThrustLimit.Min = 1.000000e-01f;
    data.ThrustLimit.Neutral = 5.000000e-01f;
    data.ThrustLimit.Max = 9.000000e-01f;
    data.Safetymargins.Wind = 9.000000e+01f;
    data.Safetymargins.Stallspeed = 1.000000e+00f;
    data.Safetymargins.Lowspeed = 5.000000e-01f;
    data.Safetymargins.Highspeed = 1.500000e+00f;
    data.Safetymargins.Overspeed = 1.000000e+00f;
    data.Safetymargins.Lowpower = 1.000000e+00f;
    data.Safetymargins.Highpower = 0.000000e+00f;
    data.Safetymargins.Pitchcontrol = 1.000000e+00f;
    data.UpdatePeriod = 100;

    UAVObjSetInstanceData(obj, instId, &data);

    // Initialize object metadata to their default values
    if ( instId == 0 ) {
        UAVObjMetadata metadata;
        metadata.flags =
            ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
            ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
            1 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
            1 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
            UPDATEMODE_ONCHANGE << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
            UPDATEMODE_ONCHANGE << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT |
            UPDATEMODE_MANUAL << UAVOBJ_LOGGING_UPDATE_MODE_SHIFT;
        metadata.telemetryUpdatePeriod = 0;
        metadata.gcsTelemetryUpdatePeriod = 0;
        metadata.loggingUpdatePeriod = 0;
        UAVObjSetMetadata(obj, &metadata);
    }
}

/**
 * Get object handle
 */
UAVObjHandle FixedWingPathFollowerSettingsHandle()
{
    return handle;
}

/**
 * Get/Set object Functions
 */
void FixedWingPathFollowerSettingsHorizontalVelMaxSet(float *NewHorizontalVelMax)
{
    UAVObjSetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewHorizontalVelMax, offsetof(FixedWingPathFollowerSettingsData, HorizontalVelMax), sizeof(float));
}
void FixedWingPathFollowerSettingsHorizontalVelMaxGet(float *NewHorizontalVelMax)
{
    UAVObjGetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewHorizontalVelMax, offsetof(FixedWingPathFollowerSettingsData, HorizontalVelMax), sizeof(float));
}
void FixedWingPathFollowerSettingsHorizontalVelMinSet(float *NewHorizontalVelMin)
{
    UAVObjSetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewHorizontalVelMin, offsetof(FixedWingPathFollowerSettingsData, HorizontalVelMin), sizeof(float));
}
void FixedWingPathFollowerSettingsHorizontalVelMinGet(float *NewHorizontalVelMin)
{
    UAVObjGetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewHorizontalVelMin, offsetof(FixedWingPathFollowerSettingsData, HorizontalVelMin), sizeof(float));
}
void FixedWingPathFollowerSettingsVerticalVelMaxSet(float *NewVerticalVelMax)
{
    UAVObjSetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewVerticalVelMax, offsetof(FixedWingPathFollowerSettingsData, VerticalVelMax), sizeof(float));
}
void FixedWingPathFollowerSettingsVerticalVelMaxGet(float *NewVerticalVelMax)
{
    UAVObjGetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewVerticalVelMax, offsetof(FixedWingPathFollowerSettingsData, VerticalVelMax), sizeof(float));
}
void FixedWingPathFollowerSettingsCourseFeedForwardSet(float *NewCourseFeedForward)
{
    UAVObjSetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewCourseFeedForward, offsetof(FixedWingPathFollowerSettingsData, CourseFeedForward), sizeof(float));
}
void FixedWingPathFollowerSettingsCourseFeedForwardGet(float *NewCourseFeedForward)
{
    UAVObjGetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewCourseFeedForward, offsetof(FixedWingPathFollowerSettingsData, CourseFeedForward), sizeof(float));
}
void FixedWingPathFollowerSettingsReverseCourseOverlapSet(float *NewReverseCourseOverlap)
{
    UAVObjSetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewReverseCourseOverlap, offsetof(FixedWingPathFollowerSettingsData, ReverseCourseOverlap), sizeof(float));
}
void FixedWingPathFollowerSettingsReverseCourseOverlapGet(float *NewReverseCourseOverlap)
{
    UAVObjGetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewReverseCourseOverlap, offsetof(FixedWingPathFollowerSettingsData, ReverseCourseOverlap), sizeof(float));
}
void FixedWingPathFollowerSettingsHorizontalPosPSet(float *NewHorizontalPosP)
{
    UAVObjSetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewHorizontalPosP, offsetof(FixedWingPathFollowerSettingsData, HorizontalPosP), sizeof(float));
}
void FixedWingPathFollowerSettingsHorizontalPosPGet(float *NewHorizontalPosP)
{
    UAVObjGetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewHorizontalPosP, offsetof(FixedWingPathFollowerSettingsData, HorizontalPosP), sizeof(float));
}
void FixedWingPathFollowerSettingsVerticalPosPSet(float *NewVerticalPosP)
{
    UAVObjSetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewVerticalPosP, offsetof(FixedWingPathFollowerSettingsData, VerticalPosP), sizeof(float));
}
void FixedWingPathFollowerSettingsVerticalPosPGet(float *NewVerticalPosP)
{
    UAVObjGetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewVerticalPosP, offsetof(FixedWingPathFollowerSettingsData, VerticalPosP), sizeof(float));
}
void FixedWingPathFollowerSettingsCoursePISet( FixedWingPathFollowerSettingsCoursePIData *NewCoursePI )
{
    UAVObjSetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewCoursePI, offsetof(FixedWingPathFollowerSettingsData, CoursePI), 3*sizeof(float));
}
void FixedWingPathFollowerSettingsCoursePIGet( FixedWingPathFollowerSettingsCoursePIData *NewCoursePI )
{
    UAVObjGetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewCoursePI, offsetof(FixedWingPathFollowerSettingsData, CoursePI), 3*sizeof(float));
}
void FixedWingPathFollowerSettingsCoursePIArraySet( float *NewCoursePI )
{
    UAVObjSetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewCoursePI, offsetof(FixedWingPathFollowerSettingsData, CoursePI), 3*sizeof(float));
}
void FixedWingPathFollowerSettingsCoursePIArrayGet( float *NewCoursePI )
{
    UAVObjGetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewCoursePI, offsetof(FixedWingPathFollowerSettingsData, CoursePI), 3*sizeof(float));
}
void FixedWingPathFollowerSettingsSpeedPISet( FixedWingPathFollowerSettingsSpeedPIData *NewSpeedPI )
{
    UAVObjSetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewSpeedPI, offsetof(FixedWingPathFollowerSettingsData, SpeedPI), 3*sizeof(float));
}
void FixedWingPathFollowerSettingsSpeedPIGet( FixedWingPathFollowerSettingsSpeedPIData *NewSpeedPI )
{
    UAVObjGetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewSpeedPI, offsetof(FixedWingPathFollowerSettingsData, SpeedPI), 3*sizeof(float));
}
void FixedWingPathFollowerSettingsSpeedPIArraySet( float *NewSpeedPI )
{
    UAVObjSetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewSpeedPI, offsetof(FixedWingPathFollowerSettingsData, SpeedPI), 3*sizeof(float));
}
void FixedWingPathFollowerSettingsSpeedPIArrayGet( float *NewSpeedPI )
{
    UAVObjGetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewSpeedPI, offsetof(FixedWingPathFollowerSettingsData, SpeedPI), 3*sizeof(float));
}
void FixedWingPathFollowerSettingsVerticalToPitchCrossFeedSet( FixedWingPathFollowerSettingsVerticalToPitchCrossFeedData *NewVerticalToPitchCrossFeed )
{
    UAVObjSetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewVerticalToPitchCrossFeed, offsetof(FixedWingPathFollowerSettingsData, VerticalToPitchCrossFeed), 2*sizeof(float));
}
void FixedWingPathFollowerSettingsVerticalToPitchCrossFeedGet( FixedWingPathFollowerSettingsVerticalToPitchCrossFeedData *NewVerticalToPitchCrossFeed )
{
    UAVObjGetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewVerticalToPitchCrossFeed, offsetof(FixedWingPathFollowerSettingsData, VerticalToPitchCrossFeed), 2*sizeof(float));
}
void FixedWingPathFollowerSettingsVerticalToPitchCrossFeedArraySet( float *NewVerticalToPitchCrossFeed )
{
    UAVObjSetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewVerticalToPitchCrossFeed, offsetof(FixedWingPathFollowerSettingsData, VerticalToPitchCrossFeed), 2*sizeof(float));
}
void FixedWingPathFollowerSettingsVerticalToPitchCrossFeedArrayGet( float *NewVerticalToPitchCrossFeed )
{
    UAVObjGetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewVerticalToPitchCrossFeed, offsetof(FixedWingPathFollowerSettingsData, VerticalToPitchCrossFeed), 2*sizeof(float));
}
void FixedWingPathFollowerSettingsAirspeedToPowerCrossFeedSet( FixedWingPathFollowerSettingsAirspeedToPowerCrossFeedData *NewAirspeedToPowerCrossFeed )
{
    UAVObjSetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewAirspeedToPowerCrossFeed, offsetof(FixedWingPathFollowerSettingsData, AirspeedToPowerCrossFeed), 2*sizeof(float));
}
void FixedWingPathFollowerSettingsAirspeedToPowerCrossFeedGet( FixedWingPathFollowerSettingsAirspeedToPowerCrossFeedData *NewAirspeedToPowerCrossFeed )
{
    UAVObjGetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewAirspeedToPowerCrossFeed, offsetof(FixedWingPathFollowerSettingsData, AirspeedToPowerCrossFeed), 2*sizeof(float));
}
void FixedWingPathFollowerSettingsAirspeedToPowerCrossFeedArraySet( float *NewAirspeedToPowerCrossFeed )
{
    UAVObjSetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewAirspeedToPowerCrossFeed, offsetof(FixedWingPathFollowerSettingsData, AirspeedToPowerCrossFeed), 2*sizeof(float));
}
void FixedWingPathFollowerSettingsAirspeedToPowerCrossFeedArrayGet( float *NewAirspeedToPowerCrossFeed )
{
    UAVObjGetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewAirspeedToPowerCrossFeed, offsetof(FixedWingPathFollowerSettingsData, AirspeedToPowerCrossFeed), 2*sizeof(float));
}
void FixedWingPathFollowerSettingsPowerPISet( FixedWingPathFollowerSettingsPowerPIData *NewPowerPI )
{
    UAVObjSetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewPowerPI, offsetof(FixedWingPathFollowerSettingsData, PowerPI), 3*sizeof(float));
}
void FixedWingPathFollowerSettingsPowerPIGet( FixedWingPathFollowerSettingsPowerPIData *NewPowerPI )
{
    UAVObjGetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewPowerPI, offsetof(FixedWingPathFollowerSettingsData, PowerPI), 3*sizeof(float));
}
void FixedWingPathFollowerSettingsPowerPIArraySet( float *NewPowerPI )
{
    UAVObjSetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewPowerPI, offsetof(FixedWingPathFollowerSettingsData, PowerPI), 3*sizeof(float));
}
void FixedWingPathFollowerSettingsPowerPIArrayGet( float *NewPowerPI )
{
    UAVObjGetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewPowerPI, offsetof(FixedWingPathFollowerSettingsData, PowerPI), 3*sizeof(float));
}
void FixedWingPathFollowerSettingsRollLimitSet( FixedWingPathFollowerSettingsRollLimitData *NewRollLimit )
{
    UAVObjSetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewRollLimit, offsetof(FixedWingPathFollowerSettingsData, RollLimit), 3*sizeof(float));
}
void FixedWingPathFollowerSettingsRollLimitGet( FixedWingPathFollowerSettingsRollLimitData *NewRollLimit )
{
    UAVObjGetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewRollLimit, offsetof(FixedWingPathFollowerSettingsData, RollLimit), 3*sizeof(float));
}
void FixedWingPathFollowerSettingsRollLimitArraySet( float *NewRollLimit )
{
    UAVObjSetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewRollLimit, offsetof(FixedWingPathFollowerSettingsData, RollLimit), 3*sizeof(float));
}
void FixedWingPathFollowerSettingsRollLimitArrayGet( float *NewRollLimit )
{
    UAVObjGetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewRollLimit, offsetof(FixedWingPathFollowerSettingsData, RollLimit), 3*sizeof(float));
}
void FixedWingPathFollowerSettingsPitchLimitSet( FixedWingPathFollowerSettingsPitchLimitData *NewPitchLimit )
{
    UAVObjSetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewPitchLimit, offsetof(FixedWingPathFollowerSettingsData, PitchLimit), 3*sizeof(float));
}
void FixedWingPathFollowerSettingsPitchLimitGet( FixedWingPathFollowerSettingsPitchLimitData *NewPitchLimit )
{
    UAVObjGetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewPitchLimit, offsetof(FixedWingPathFollowerSettingsData, PitchLimit), 3*sizeof(float));
}
void FixedWingPathFollowerSettingsPitchLimitArraySet( float *NewPitchLimit )
{
    UAVObjSetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewPitchLimit, offsetof(FixedWingPathFollowerSettingsData, PitchLimit), 3*sizeof(float));
}
void FixedWingPathFollowerSettingsPitchLimitArrayGet( float *NewPitchLimit )
{
    UAVObjGetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewPitchLimit, offsetof(FixedWingPathFollowerSettingsData, PitchLimit), 3*sizeof(float));
}
void FixedWingPathFollowerSettingsThrustLimitSet( FixedWingPathFollowerSettingsThrustLimitData *NewThrustLimit )
{
    UAVObjSetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewThrustLimit, offsetof(FixedWingPathFollowerSettingsData, ThrustLimit), 3*sizeof(float));
}
void FixedWingPathFollowerSettingsThrustLimitGet( FixedWingPathFollowerSettingsThrustLimitData *NewThrustLimit )
{
    UAVObjGetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewThrustLimit, offsetof(FixedWingPathFollowerSettingsData, ThrustLimit), 3*sizeof(float));
}
void FixedWingPathFollowerSettingsThrustLimitArraySet( float *NewThrustLimit )
{
    UAVObjSetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewThrustLimit, offsetof(FixedWingPathFollowerSettingsData, ThrustLimit), 3*sizeof(float));
}
void FixedWingPathFollowerSettingsThrustLimitArrayGet( float *NewThrustLimit )
{
    UAVObjGetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewThrustLimit, offsetof(FixedWingPathFollowerSettingsData, ThrustLimit), 3*sizeof(float));
}
void FixedWingPathFollowerSettingsSafetymarginsSet( FixedWingPathFollowerSettingsSafetymarginsData *NewSafetymargins )
{
    UAVObjSetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewSafetymargins, offsetof(FixedWingPathFollowerSettingsData, Safetymargins), 8*sizeof(float));
}
void FixedWingPathFollowerSettingsSafetymarginsGet( FixedWingPathFollowerSettingsSafetymarginsData *NewSafetymargins )
{
    UAVObjGetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewSafetymargins, offsetof(FixedWingPathFollowerSettingsData, Safetymargins), 8*sizeof(float));
}
void FixedWingPathFollowerSettingsSafetymarginsArraySet( float *NewSafetymargins )
{
    UAVObjSetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewSafetymargins, offsetof(FixedWingPathFollowerSettingsData, Safetymargins), 8*sizeof(float));
}
void FixedWingPathFollowerSettingsSafetymarginsArrayGet( float *NewSafetymargins )
{
    UAVObjGetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewSafetymargins, offsetof(FixedWingPathFollowerSettingsData, Safetymargins), 8*sizeof(float));
}
void FixedWingPathFollowerSettingsUpdatePeriodSet(int32_t *NewUpdatePeriod)
{
    UAVObjSetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewUpdatePeriod, offsetof(FixedWingPathFollowerSettingsData, UpdatePeriod), sizeof(int32_t));
}
void FixedWingPathFollowerSettingsUpdatePeriodGet(int32_t *NewUpdatePeriod)
{
    UAVObjGetDataField(FixedWingPathFollowerSettingsHandle(), (void *)NewUpdatePeriod, offsetof(FixedWingPathFollowerSettingsData, UpdatePeriod), sizeof(int32_t));
}


/**
 * @}
 */
