/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, PDIterate, NSString, NSDictionary;

@interface PDTimeNode : NSObject {

	NSMutableArray* mStartTimeConditions;
	NSMutableArray* mEndTimeConditions;
	NSMutableArray* mChildTimeNodeList;
	NSMutableArray* mSubTimeNodeList;
	PDIterate* mIterate;
	int mType;
	int mAnimationPresetClass;
	char mHasPresetId;
	int mPresetId;
	char mHasPresetSubType;
	int mPresetSubType;
	char mHasRepeatCount;
	int mRepeatCount;
	char mHasRepeatDuration;
	int mRepeatDuration;
	int mRestartType;
	char mHasDuration;
	double mDuration;
	char mHasSpeed;
	double mSpeed;
	char mHasAcceleration;
	double mAcceleration;
	char mHasDeceleration;
	double mDeceleration;
	char mHasDisplay;
	char mDisplay;
	char mHasFillType;
	int mFillType;
	NSString* mGroupId;
	NSDictionary* attributeMap;

}

@property (nonatomic,retain) NSDictionary * attributeMap; 
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(void)setSpeed:(double)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(char)display;
-(void)setType:(int)arg1 ;
-(int)type;
-(double)speed;
-(int)repeatCount;
-(void)setRepeatCount:(int)arg1 ;
-(double)acceleration;
-(int)fillType;
-(char)hasDuration;
-(int)animationPresetClass;
-(int)restartType;
-(void)setGroupId:(id)arg1 ;
-(int)presetSubType;
-(int)repeatDuration;
-(double)deceleration;
-(id)startTimeConditions;
-(id)endTimeConditions;
-(id)childTimeNodeList;
-(id)subTimeNodeList;
-(id)groupId;
-(id)iterate;
-(void)setStartTimeConditions:(id)arg1 ;
-(void)setEndTimeConditions:(id)arg1 ;
-(void)setChildTimeNodeList:(id)arg1 ;
-(void)setSubTimeNodeList:(id)arg1 ;
-(void)setIterate:(id)arg1 ;
-(char)hasType;
-(char)hasPresetClass;
-(void)setAnimationPresetClass:(int)arg1 ;
-(char)hasPresetSubType;
-(void)setPresetSubType:(int)arg1 ;
-(char)hasPresetId;
-(void)setPresetId:(int)arg1 ;
-(char)hasRepeatCount;
-(char)hasRepeatDuration;
-(void)setRepeatDuration:(int)arg1 ;
-(char)hasRestartType;
-(void)setRestartType:(int)arg1 ;
-(char)hasSpeed;
-(char)hasAcceleration;
-(void)setAcceleration:(double)arg1 ;
-(char)hasDeceleration;
-(void)setDeceleration:(double)arg1 ;
-(char)hasFillType;
-(void)setFillType:(int)arg1 ;
-(void)setGroupIdValue:(int)arg1 ;
-(char)hasDisplay;
-(void)setDisplay:(char)arg1 ;
-(NSDictionary *)attributeMap;
-(void)setAttributeMap:(NSDictionary *)arg1 ;
-(int)presetId;
-(long)writeDuration;
-(long)writeRepeatCount;
@end

