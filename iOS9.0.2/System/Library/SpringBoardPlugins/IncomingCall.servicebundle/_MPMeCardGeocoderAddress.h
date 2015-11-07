/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/SpringBoardPlugins/IncomingCall.servicebundle/IncomingCall
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSDictionary, NSString, CLGeocoder, NSDate;

@interface _MPMeCardGeocoderAddress : NSObject <NSCoding> {

	NSDictionary* _addressDictionary;
	NSString* _entityID;
	NSString* _label;
	CLGeocoder* _geocoder;
	int _state;
	int _tries;
	NSDate* _lastGeocodeAttempt;
	NSDictionary* _locationDictionary;
	char _cancelingGeocode;
	NSDate* _geocodeAfter;

}

@property (readonly) NSDictionary * addressDictionary;               //@synthesize addressDictionary=_addressDictionary - In the implementation block
@property (readonly) NSDictionary * locationDictionary;              //@synthesize locationDictionary=_locationDictionary - In the implementation block
@property (readonly) NSDate * lastGeocodeAttempt;                    //@synthesize lastGeocodeAttempt=_lastGeocodeAttempt - In the implementation block
@property (readonly) int state;                                      //@synthesize state=_state - In the implementation block
@property (readonly) NSDate * geocodeAfter;                          //@synthesize geocodeAfter=_geocodeAfter - In the implementation block
-(void)cancelGeocode;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(int)state;
-(NSDictionary *)addressDictionary;
-(char)expired;
-(void)recalculateGeocodeAfterDate;
-(id)createGeocodeAfterDate;
-(NSDate *)lastGeocodeAttempt;
-(id)initWithAddressDictionary:(id)arg1 entityID:(id)arg2 label:(id)arg3 ;
-(char)checkGeocodeAfterDateForSanity;
-(void)attemptGeocodeWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)nextGeocodeAttempt;
-(NSDictionary *)locationDictionary;
-(NSDate *)geocodeAfter;
@end

