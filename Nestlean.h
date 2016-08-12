//
//  Nestlean.h
//  Nestlean
//

#import <Foundation/Foundation.h>


#pragma mark - Constants
/** @var kNestleanVaultEnabledKey
 *  @brief Login secure key. If true your app will blocked. User must authorised to app. Default NO. NSNumber with bool value.*/
extern NSString* const kNestleanVaultEnabledKey;

/** @var kNestleanEnabledShakeGestureKey
 *  @brief If you need show Nestlena tool view in you applicaiton you can set YES for this options. Default YES. NSNumber with bool value.*/
extern NSString* const kNestleanEnabledShakeGestureKey;




/** @class Nestlean
 *  @brief Class to work with Nestlean SDK.*/
@interface Nestlean : NSObject


#pragma mark - Init methods
/** @brief Init SDK with application key and configurateion settings.
 *  @param appKey Applciation key.*/
+ (void)initWithApplicationKey:(NSString*)appKey;

/** @brief Init SDK with application key and configurateion settings.
 *  @param appKey Applciation key.
 *  @param options Init options to configurate SDK.*/
+ (void)initWithApplicationKey:(NSString*)appKey options:(NSDictionary*)options;


#pragma mark - Setters
/** @brief Send event to server.
 *  @param name Custom name of event.
 *  @param data List of properties for event.*/
+ (void)event:(NSString*)name data:(NSDictionary*)data;

/** @brief Send event to server.
 *  @param name Custom name of event.*/
+ (void)event:(NSString*)name;

/** @brief Send name of screen to server.
 *  @param name Name of screen.*/
+ (void)screen:(NSString*)name;


#pragma mark - UI methods
/** @brief Show login screen.
 *  @note If your build was installed from App Store this method will show feedback view as a +showFeedbackView.*/
+ (void)showMenu;


#pragma mark - Clear all datas
/** @brief Remove nestlean SDK datas from memory.*/
+ (void)clearAllDatas;

@end
