/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, AXReplayableGesture, NSUUID;

@interface AXSwitchRecipeMapping : NSObject {

	char _optional;
	NSString* _action;
	NSString* _longPressAction;
	AXReplayableGesture* _gesture;
	AXReplayableGesture* _longPressGesture;
	NSUUID* _switchUUID;
	int _switchOriginalAction;

}

@property (nonatomic,copy) NSString * action;                                     //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSString * longPressAction;                            //@synthesize longPressAction=_longPressAction - In the implementation block
@property (nonatomic,retain) AXReplayableGesture * gesture;                       //@synthesize gesture=_gesture - In the implementation block
@property (nonatomic,retain) AXReplayableGesture * longPressGesture;              //@synthesize longPressGesture=_longPressGesture - In the implementation block
@property (assign,getter=isOptional,nonatomic) char optional;                     //@synthesize optional=_optional - In the implementation block
@property (nonatomic,copy) NSUUID * switchUUID;                                   //@synthesize switchUUID=_switchUUID - In the implementation block
@property (assign,nonatomic) int switchOriginalAction;                            //@synthesize switchOriginalAction=_switchOriginalAction - In the implementation block
+(id)recipeMappingWithDictionaryRepresentation:(id)arg1 ;
-(char)isOptional;
-(void)setOptional:(char)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)action;
-(void)setAction:(NSString *)arg1 ;
-(NSString *)longPressAction;
-(id)dictionaryRepresentation;
-(void)setLongPressAction:(NSString *)arg1 ;
-(void)setGesture:(AXReplayableGesture *)arg1 ;
-(void)setLongPressGesture:(AXReplayableGesture *)arg1 ;
-(void)setSwitchUUID:(NSUUID *)arg1 ;
-(void)setSwitchOriginalAction:(int)arg1 ;
-(AXReplayableGesture *)gesture;
-(AXReplayableGesture *)longPressGesture;
-(NSUUID *)switchUUID;
-(int)switchOriginalAction;
@end

