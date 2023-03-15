// --- CMAKE generated variables for your plugin

#include "pluginstructures.h"

#ifndef _plugindescription_h
#define _plugindescription_h

#define QUOTE(name) #name
#define STR(macro) QUOTE(macro)
#define AU_COCOA_VIEWFACTORY_STRING STR(AU_COCOA_VIEWFACTORY_NAME)
#define AU_COCOA_VIEW_STRING STR(AU_COCOA_VIEW_NAME)

// --- AU Plugin Cocoa View Names (flat namespace)
#define AU_COCOA_VIEWFACTORY_NAME AUCocoaViewFactory_8080A420FFFA439784350A161C91BC0E
#define AU_COCOA_VIEW_NAME AUCocoaView_8080A420FFFA439784350A161C91BC0E

// --- BUNDLE IDs (MacOS Only)
const char* kAAXBundleID = "nextlvlmusic.aax.SRSExpander.bundleID";
const char* kAUBundleID = "nextlvlmusic.au.SRSExpander.bundleID";
const char* kVST3BundleID = "nextlvlmusic.vst3.SRSExpander.bundleID";

// --- Plugin Names
const char* kPluginName = "SRS Expander";
const char* kShortPluginName = "SRS Expander";
const char* kAUBundleName = "SRS Expander";
const char* kAAXBundleName = "SRS Expander";
const char* kVSTBundleName = "SRS Expander";

// --- bundle name helper
inline static const char* getPluginDescBundleName()
{
#ifdef AUPLUGIN
	return kAUBundleName;
#endif

#ifdef AAXPLUGIN
	return kAAXBundleName;
#endif

#ifdef VSTPLUGIN
	return kVSTBundleName;
#endif

	// --- should never get here
	return kPluginName;
}

// --- Plugin Type
const pluginType kPluginType = pluginType::kFXPlugin;

// --- VST3 UUID
const char* kVSTFUID = "{8080A420-FFFA-4397-8435-0A161C91BC0E}";

// --- 4-char codes
const int32_t kFourCharCode = 'dGBM';
const int32_t kAAXProductID = 'G4tE';
const int32_t kManufacturerID = 'VNDR';

// --- Vendor information
const char* kVendorName = "NEXTLVL MUSIC";
const char* kVendorURL = "www.nextlvlmusicgroup.com";
const char* kVendorEmail = "contact.nextlvlmusic@gmail.com";

// --- Plugin Options
const bool kProcessFrames = true;
const uint32_t kBlockSize = DEFAULT_AUDIO_BLOCK_SIZE;
const bool kWantSidechain = false;
const uint32_t kLatencyInSamples = 0;
const double kTailTimeMsec = 0.000;
const bool kVSTInfiniteTail = false;
const bool kVSTSAA = false;
const uint32_t kVST3SAAGranularity = 1;
const uint32_t kAAXCategory = 0;

#endif


