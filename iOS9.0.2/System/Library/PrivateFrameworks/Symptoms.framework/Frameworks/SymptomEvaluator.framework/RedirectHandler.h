/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/ConfigurableObjectProtocol.h>
#import <SymptomEvaluator/SymptomAdditionalProtocol.h>
#import <libobjc.A.dylib/AdditionalInfoProtocol.h>

@class NSString, NSMutableDictionary, NSDate;

@interface RedirectHandler : NSObject <ConfigurableObjectProtocol, SymptomAdditionalProtocol, AdditionalInfoProtocol> {

	NSString* _originalURLKey;
	NSString* _redirectURLKey;
	unsigned _ignoreFor;
	unsigned _maxCount;
	double _maxAge;
	NSMutableDictionary* _ignoredDestinations;
	unsigned _numIgnored;
	double _numIgnoredScaleFactor;
	NSString* _currentRedirectURL;
	NSMutableDictionary* _redirectedOrigins;
	NSMutableDictionary* _requestingPids;
	NSDate* _pruningTime;
	unsigned _numNegatives;
	id _resetObserver;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)configureClass:(id)arg1 ;
+(BOOL)noteSymptom:(id)arg1 ;
+(id)evaluate:(id)arg1 forThreshold:(int)arg2 ;
+(id)generateAdditionalInfo:(id)arg1 ;
+(id)_sharedInstance;
-(id)init;
-(NSString *)description;
-(void)_reset:(id)arg1 ;
-(int)configureInstance:(id)arg1 ;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(BOOL)noteSymptom:(id)arg1 ;
-(id)evaluate:(id)arg1 forThreshold:(int)arg2 ;
-(id)generateAdditionalInfo:(id)arg1 ;
-(void)_prune;
-(void)performNegativeFeedback:(id)arg1 ;
-(void)_pruneDir:(id)arg1 ;
-(void)_addRedirectFrom:(id)arg1 To:(id)arg2 by:(unsigned long long)arg3 atTime:(unsigned)arg4 ;
@end

