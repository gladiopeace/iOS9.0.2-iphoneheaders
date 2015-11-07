/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface PLDefaults : NSObject {

	char _debugEnabled;
	NSMutableDictionary* _managedPrefsCache;
	NSMutableDictionary* _instancePrefsCache;
	NSMutableDictionary* _userPrefsCache;

}

@property (assign) char debugEnabled;                                     //@synthesize debugEnabled=_debugEnabled - In the implementation block
@property (retain) NSMutableDictionary * managedPrefsCache;               //@synthesize managedPrefsCache=_managedPrefsCache - In the implementation block
@property (retain) NSMutableDictionary * instancePrefsCache;              //@synthesize instancePrefsCache=_instancePrefsCache - In the implementation block
@property (retain) NSMutableDictionary * userPrefsCache;                  //@synthesize userPrefsCache=_userPrefsCache - In the implementation block
+(long)longForKey:(id)arg1 ;
+(double)doubleForKey:(id)arg1 ;
+(id)objectForKey:(id)arg1 ;
+(void)setObject:(id)arg1 forKey:(id)arg2 ;
+(char)boolForKey:(id)arg1 ;
+(id)applicationID;
+(id)sharedDefaults;
+(void)resetUserDefaultCacheForKey:(id)arg1 ;
+(char)fullModeLiveQuery;
+(void)setObject:(id)arg1 forKey:(id)arg2 forApplicationID:(id)arg3 saveToDisk:(char)arg4 ;
+(double)doubleForKey:(id)arg1 ifNotSet:(double)arg2 ;
+(id)allDefaultsEnabled;
+(char)isClassNameDebugEnabled:(id)arg1 ;
+(char)isClassNameDebugEnabled:(id)arg1 forKey:(id)arg2 ;
+(char)objectExistsForKey:(id)arg1 ;
+(void)setClassName:(id)arg1 debugEnabled:(char)arg2 ;
+(void)setClassName:(id)arg1 debugEnabled:(char)arg2 forKey:(id)arg3 ;
+(id)objectForKey:(id)arg1 synchronize:(char)arg2 ;
+(char)fullModeForClass:(Class)arg1 ;
+(char)isModelingDebugEnabled;
+(char)fullPLLog;
+(void)setClass:(Class)arg1 debugEnabled:(char)arg2 ;
+(void)setClass:(Class)arg1 debugEnabled:(char)arg2 forKey:(id)arg3 ;
+(char)debugEnabled;
+(char)isClassDebugEnabled:(Class)arg1 ;
+(char)fullMode;
+(char)isClassDebugEnabled:(Class)arg1 forKey:(id)arg2 ;
+(long)longForKey:(id)arg1 ifNotSet:(long)arg2 ;
+(void)setObject:(id)arg1 forKey:(id)arg2 saveToDisk:(char)arg3 ;
+(id)objectForKey:(id)arg1 forApplicationID:(id)arg2 synchronize:(char)arg3 ;
+(char)isDevBoard;
+(char)boolForKey:(id)arg1 ifNotSet:(char)arg2 ;
+(void)resetUserDefaultCacheForKey:(id)arg1 forApplicationID:(id)arg2 ;
-(id)init;
-(void)setDebugEnabled:(char)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 forApplicationID:(id)arg3 saveToDisk:(char)arg4 ;
-(id)userDefaultsObjectForKey:(id)arg1 forApplicationID:(id)arg2 synchronize:(char)arg3 ;
-(id)instancePrefsObjectForKey:(id)arg1 ;
-(void)setManagedPrefsCache:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)managedPrefsCache;
-(NSMutableDictionary *)userPrefsCache;
-(NSMutableDictionary *)instancePrefsCache;
-(void)setInstancePrefsCache:(NSMutableDictionary *)arg1 ;
-(void)setUserPrefsCache:(NSMutableDictionary *)arg1 ;
-(char)debugEnabled;
-(id)objectForKey:(id)arg1 forApplicationID:(id)arg2 synchronize:(char)arg3 ;
-(id)managedPrefsObjectForKey:(id)arg1 forApplicationID:(id)arg2 synchronize:(char)arg3 ;
-(void)resetUserDefaultCacheForKey:(id)arg1 forApplicationID:(id)arg2 ;
@end

