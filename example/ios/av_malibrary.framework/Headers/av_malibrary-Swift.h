// Generated by Apple Swift version 5.0.1 (swiftlang-1001.0.82.4 clang-1001.0.46.5)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="av_malibrary",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


SWIFT_PROTOCOL("_TtP12av_malibrary24AkamaiPlayerDataProtocol_")
@protocol AkamaiPlayerDataProtocol
/// This call should return the current stream head position of the player in seconds.
- (double)streamHeadPosition SWIFT_WARN_UNUSED_RESULT;
/// Bytes loaded until present time
- (int64_t)bytesLoaded SWIFT_WARN_UNUSED_RESULT;
/// Number of frames dropped until present time.
- (NSInteger)droppedFrames SWIFT_WARN_UNUSED_RESULT;
@end

@class AVPlayer;
enum endReasonCode : NSInteger;

/// API interface for integrating Media Anlaytics library with players build
/// with AVFoudation / AVPlayer
SWIFT_CLASS("_TtC12av_malibrary23AV_AkamaiMediaAnalytics")
@interface AV_AkamaiMediaAnalytics : NSObject <AkamaiPlayerDataProtocol>
/// Creates an instance of the AV loader and initializes some of the member
/// variables
/// \param beaconXML Configuration xml file for MA library in string
/// format
///
- (nonnull instancetype)initWithBeaconXML:(NSString * _Nonnull)configXML OBJC_DESIGNATED_INITIALIZER;
/// Set valid instance of AVPlayer / AVQueuePlayer to track the media stats
/// \param mediaPlayer Instance of AVPlayer / AVQueuePlayer
///
- (void)setMediaPlayer:(AVPlayer * _Nonnull)mediaPlayer;
/// Stops tracking for the current media player and removes all the observers
/// TODO: uGt: we should alos check if playback is completed. If not, then
/// call handlePlayEnd and end the current session
- (void)resetMediaPlayer;
/// Turns on the debug logging
- (void)enableDebugLogging;
/// Turns off the debug logging
- (void)disableDebugLogging;
/// API to track seek when seek starts.
/// TODO: uGt- Just following approach similar to old objective-c based
/// library where we have scurb APIs. We will figure out if there is a way to
/// detect seek internally
- (void)beginScrub;
/// API to track seek when seek Ends.
/// TODO: uGt- Just following approach similar to old objective-c based
/// library where we have scurb APIs. We will figure out if there is a way to
/// detect seek internally
- (void)endScrub;
/// Allows player to set custom dimensions and customize Media analytics
/// setup
/// TODO: uGt-  this API should be
/// public func setData(value data:String, forKey key:String)
/// \param key Name of a key for which value is passed
///
/// \param forValue value to be set for a given key
///
- (void)setData:(NSString * _Nonnull)keyInfo value:(NSString * _Nonnull)data;
/// Allows player to set custom viewer id. Our library generates viewerId if
/// not provided by the player. Our library uses identifier for vendor
/// \param viewerId valid string object to be set as viewer id
///
- (void)setViewerId:(NSString * _Nonnull)viewerId;
/// Allows player to set viewer diagnostics Identifier.
/// \param viewerDiagnosticsId valid string object to be set as
/// Viewer Diagnostics id
///
- (void)setViewerDiagnosticsId:(NSString * _Nonnull)viewerDiagnosticsId;
/// API to report playback failure with error code
/// TODO: uGt We can detect the playback failure and can report the detailed error codes
/// Check the possiblitiy
/// \param errorCode Error code indicating the failure
///
- (void)handleError:(NSString * _Nonnull)errorCode;
/// API to report end of playback. This represents use cases which are not
/// playbck failure which includes user ended the playback, etc. Refere to
/// endReasonCode enum for more details and reasonCodes
/// \param reasonCode Reason for playback end
///
- (void)handlePlayEnd:(enum endReasonCode)reasonCode;
/// Handle title switch. Call playEnd for the current playback. set custom
/// dimensions and then set new media player
- (void)handleTitleSwitch:(NSDictionary<NSString *, NSString *> * _Nonnull)customData withPlayer:(AVPlayer * _Nonnull)mediaPlayer;
/// Handle application exit use case
- (void)handleApplicationExit;
/// Enables server ip tracking.
/// TODO: uGt- Shall we remove these combo APIs as server ip is captured from
/// accesslogs and it works if even if streams are not hosted on Akamai.
/// Also, we can use accesslogs as fallback and use it only if streams are not
/// hosted on Akamai. This will help us capture other information sent by
/// GHOST
- (void)enableServerIpLookup;
/// Disables server ip tracking.
/// TODO: uGt- Shall we remove these combo APIs as server ip is captured from
/// accesslogs and it works if even if streams are not hosted on Akamai.
/// Also, we can use accesslogs as fallback and use it only if streams are not
/// hosted on Akamai. This will help us capture other information sent by
/// GHOST
- (void)disableServerIpLookup;
/// Enable location tracking which by default turned on
- (void)enableLocationSupport;
/// Disable location tracking
- (void)disableLocationSupport;
- (double)streamHeadPosition SWIFT_WARN_UNUSED_RESULT;
/// Bytes loaded until present time
/// <ul>
///   <li>
///     Return : bytes downloaded with Int64 datatype
///   </li>
/// </ul>
- (int64_t)bytesLoaded SWIFT_WARN_UNUSED_RESULT;
/// Number of frames dropped until present time.
/// <ul>
///   <li>
///     Return : dropped frames with Int datatype
///   </li>
/// </ul>
- (NSInteger)droppedFrames SWIFT_WARN_UNUSED_RESULT;
/// An override observer method for key path
/// \param keyPath The key path, relative to object, to the value that has changed.
///
/// \param object The source object of the key path keyPath.
///
/// \param change A dictionary that describes the changes that have been made to the value of the property at the key path keyPath relative to object. Entries are described in Change Dictionary Keys.
///
/// \param context The value that was provided when the observer was registered to receive key-value observation notifications.
///
- (void)observeValueForKeyPath:(NSString * _Nullable)keyPath ofObject:(id _Nullable)object change:(NSDictionary<NSKeyValueChangeKey, id> * _Nullable)change context:(void * _Nullable)context;
/// Ad apis
/// This call must be made just when the Ad is loaded into the player.
/// \param adInfo a dictionary containing ad load related information
///
- (void)handleAdLoaded:(NSDictionary<NSString *, NSString *> * _Nonnull)adInfo;
/// This call should be made just when the Ad starts playing.
/// \param adInfo a dictionary containing ad start related information
///
- (void)handleAdStarted:(NSDictionary<NSString *, NSString *> * _Nonnull)adInfo;
/// This call should be made when 25% of Ad has played.
- (void)handleAdFirstQuartile;
/// This call should be made when 50% of Ad has played.
- (void)handleAdMidPoint;
/// This call should be made when 75% of Ad has played.
- (void)handleAdThirdQuartile;
/// This call is made when the ad has completely played.
- (void)handleAdComplete;
/// This call should be made when the Ad has been stopped/closed/skipped by the user.
- (void)handleAdSkipped;
/// This call should be made when an error occurs while playing the Ad.
- (void)handleAdError;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// Valid end reason codes while playback ends
/// <ul>
///   <li>
///     Play_End_Detected : Player played video to its end time
///   </li>
///   <li>
///     User_Ended_Playback : User ended the playback before its end time
///   </li>
///   <li>
///     Application_Close : Application closed during playback
///   </li>
///   <li>
///     Application_Background : Application background during playback
///   </li>
/// </ul>
typedef SWIFT_ENUM(NSInteger, endReasonCode, closed) {
  endReasonCodePlay_End_Detected = 0,
  endReasonCodeUser_Ended_Playback = 1,
  endReasonCodeApplication_Close = 2,
  endReasonCodeApplication_Background = 3,
  endReasonCodeTitle_Switched = 4,
};




#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop