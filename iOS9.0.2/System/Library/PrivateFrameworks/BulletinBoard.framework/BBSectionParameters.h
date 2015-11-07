/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/BBUniquableObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSLock, NSString, BBSectionSubtypeParameters, NSMutableDictionary, BBSectionIcon;

@interface BBSectionParameters : NSObject <BBUniquableObject, NSSecureCoding> {

	NSLock* _lock;
	NSString* _uniqueIdentifier;
	char _showsSubtitle;
	char _usesVariableLayout;
	char _orderSectionUsingRecencyDate;
	char _showsDateInFloatingLockScreenAlert;
	char _displaysCriticalBulletins;
	unsigned _messageNumberOfLines;
	BBSectionSubtypeParameters* _defaultSubtypeParameters;
	NSMutableDictionary* _allSubtypeParameters;
	NSString* _displayName;
	BBSectionIcon* _icon;

}

@property (assign,nonatomic) char showsSubtitle;                                                 //@synthesize showsSubtitle=_showsSubtitle - In the implementation block
@property (assign,nonatomic) char usesVariableLayout;                                            //@synthesize usesVariableLayout=_usesVariableLayout - In the implementation block
@property (assign,nonatomic) unsigned messageNumberOfLines;                                      //@synthesize messageNumberOfLines=_messageNumberOfLines - In the implementation block
@property (assign,nonatomic) char orderSectionUsingRecencyDate;                                  //@synthesize orderSectionUsingRecencyDate=_orderSectionUsingRecencyDate - In the implementation block
@property (assign,nonatomic) char showsDateInFloatingLockScreenAlert;                            //@synthesize showsDateInFloatingLockScreenAlert=_showsDateInFloatingLockScreenAlert - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                               //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) BBSectionIcon * icon;                                               //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) char displaysCriticalBulletins;                                     //@synthesize displaysCriticalBulletins=_displaysCriticalBulletins - In the implementation block
@property (nonatomic,retain) BBSectionSubtypeParameters * defaultSubtypeParameters;              //@synthesize defaultSubtypeParameters=_defaultSubtypeParameters - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * allSubtypeParameters;                         //@synthesize allSubtypeParameters=_allSubtypeParameters - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)addSectionParametersToCache:(id)arg1 ;
+(void)removeSectionParametersFromCache:(id)arg1 ;
+(id)copyCachedSectionParametersWithIdentifier:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setIcon:(BBSectionIcon *)arg1 ;
-(id)uniqueIdentifier;
-(BBSectionIcon *)icon;
-(NSString *)displayName;
-(char)displaysCriticalBulletins;
-(void)setDisplaysCriticalBulletins:(char)arg1 ;
-(void)setDefaultSubtypeParameters:(BBSectionSubtypeParameters *)arg1 ;
-(void)setAllSubtypeParameters:(NSMutableDictionary *)arg1 ;
-(void)setShowsSubtitle:(char)arg1 ;
-(void)setUsesVariableLayout:(char)arg1 ;
-(void)setOrderSectionUsingRecencyDate:(char)arg1 ;
-(void)setShowsDateInFloatingLockScreenAlert:(char)arg1 ;
-(BBSectionSubtypeParameters *)defaultSubtypeParameters;
-(NSMutableDictionary *)allSubtypeParameters;
-(char)showsSubtitle;
-(unsigned)messageNumberOfLines;
-(char)usesVariableLayout;
-(char)orderSectionUsingRecencyDate;
-(char)showsDateInFloatingLockScreenAlert;
-(id)parametersForSubtype:(int)arg1 ;
-(id)allSubtypes;
-(void)setMessageNumberOfLines:(unsigned)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
@end

