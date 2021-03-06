//
//  LEDGattConsts.h
//  TISensorTag
//
//  Created by Stephen M Moraco on 03/17/13.
//  Copyright (c) 2013 Iron Sheep Productions, LLC. All rights reserved.
//


//   -----------------------------------
//   ----    TISensorTag SERVICES   ----
//   -----------------------------------
#define kGENERIC_ACCESS_SVC     @"1800"
#define kGATT_SVC               @"1801"
#define kDEVICE_INFORMATION_SVC @"180A"

#define kIR_TEMPERATURE_SVC     @"F000AA00-0451-4000-B000-000000000000"
#define kACCELEROMETER_SVC      @"F000AA10-0451-4000-B000-000000000000"
#define kHUMIDITY_SVC           @"F000AA20-0451-4000-B000-000000000000"
#define kMAGNETOMETER_SVC       @"F000AA30-0451-4000-B000-000000000000"
#define kBAROMETER_SVC          @"F000AA40-0451-4000-B000-000000000000"
#define kGYROSCOPE_SVC          @"F000AA50-0451-4000-B000-000000000000"
#define kSK_KEYPRESSED_SVC      @"FFE0"
#define kTEST_SVC               @"F000AA60-0451-4000-B000-000000000000"
#define kUNKNOWN_SVC            @"F000FFC0-0451-4000-B000-000000000000"

//   -------------------------------------
//   ---- TISensorTag CHARACTERISTICS ----
//   -------------------------------------
// GAP SVC
#define kDEVICE_NAME_CHRSTC        @"2A00"
#define kAPPEARANCE_CHRSTC         @"2A01"
#define kPERI_PRIVACY_FLAG_CHRSTC  @"2A02"
#define kRECONNECT_ADDR_CHRSTC     @"2A03"
#define kPER_CONN_PARAM_CHRSTC     @"2A04"

// GATT SVC
#define kSVC_CHANGED_CHRSTC        @"2A05"

// DVC INFO SVC
#define kSYSTEM_ID_CHRSTC          @"2A23"
#define kMODEL_NUMBER_CHRSTC       @"2A24"
#define kSERIAL_NUMBER_CHRSTC      @"2A25"
#define kFIRMWARE_REVISION_CHRSTC  @"2A26"
#define kHARDWARE_REVISION_CHRSTC  @"2A27"
#define kSOFTWARE_REVISION_CHRSTC  @"2A28"
#define kMANUFACTURER_NAME_CHRSTC  @"2A29"
#define k11073_CERT_DATA_CHRSTC    @"2A2A"
#define kPNPID_DATA_CHRSTC         @"2A50"  // this a doc. BUG!!  is really 2A50 vs 2A2A!!

// IR TEMPERATURE SVC
#define kIR_TEMP_DATA_CHRSTC       @"F000AA01-0451-4000-B000-000000000000"
#define kIR_TEMP_CONF_CHRSTC       @"F000AA02-0451-4000-B000-000000000000"

// ACCELEROMETER SVC
#define kACCEL_DATA_CHRSTC         @"F000AA11-0451-4000-B000-000000000000"
#define kACCEL_CONF_CHRSTC         @"F000AA12-0451-4000-B000-000000000000"
#define kACCEL_PERI_CHRSTC         @"F000AA13-0451-4000-B000-000000000000"

// HUMIDITY SVC
#define kHUMID_DATA_CHRSTC         @"F000AA21-0451-4000-B000-000000000000"
#define kHUMID_CONF_CHRSTC         @"F000AA22-0451-4000-B000-000000000000"

// MAGNETOMETER SVC
#define kMAGNETO_DATA_CHRSTC       @"F000AA31-0451-4000-B000-000000000000"
#define kMAGNETO_CONF_CHRSTC       @"F000AA32-0451-4000-B000-000000000000"
#define kMAGNETO_PERI_CHRSTC       @"F000AA33-0451-4000-B000-000000000000"

// BAROMETER SVC
#define kBARO_DATA_CHRSTC          @"F000AA41-0451-4000-B000-000000000000"
#define kBARO_CONF_CHRSTC          @"F000AA42-0451-4000-B000-000000000000"
#define kBARO_CALI_CHRSTC          @"F000AA43-0451-4000-B000-000000000000"

// GYROSCOPE SVC
#define kGYRO_DATA_CHRSTC          @"F000AA51-0451-4000-B000-000000000000"
#define kGYRO_CONF_CHRSTC          @"F000AA52-0451-4000-B000-000000000000"

// SK_KEYPRESSED SVC
#define kKEYPRESSED_CHRSTC         @"FFE1"

// TEST SVC
#define kTEST_DATA_CHRSTC          @"F000AA61-0451-4000-B000-000000000000"
#define kTEST_CONF_CHRSTC          @"F000AA62-0451-4000-B000-000000000000"

// UNKNOWN SVC
#define kUNK_DATA_CHRSTC          @"F000FFC1-0451-4000-B000-000000000000"
#define kUNK_CONF_CHRSTC          @"F000FFC2-0451-4000-B000-000000000000"
