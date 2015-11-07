/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSString;

@interface OADHyperlink : NSObject {

	NSURL* mTargetLocation;
	int mTargetMode;
	NSString* mTargetFrame;
	NSString* mAction;
	NSString* mTooltip;
	NSString* mInvalidUrl;
	char mDoEndSound;
	char mIsVisited;
	char mDoAddToHistory;

}

@property (assign,nonatomic) char doEndSound; 
@property (assign,nonatomic) char isVisited; 
@property (assign,nonatomic) char doAddToHistory; 
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)action;
-(void)setAction:(id)arg1 ;
-(void)setTargetFrame:(id)arg1 ;
-(id)targetFrame;
-(id)targetLocation;
-(void)setTooltip:(id)arg1 ;
-(void)setDoEndSound:(char)arg1 ;
-(void)setIsVisited:(char)arg1 ;
-(void)setDoAddToHistory:(char)arg1 ;
-(void)setInvalidUrl:(id)arg1 ;
-(void)setTargetLocation:(id)arg1 ;
-(int)targetMode;
-(void)setTargetMode:(int)arg1 ;
-(id)tooltip;
-(id)invalidUrl;
-(char)doEndSound;
-(char)isVisited;
-(char)doAddToHistory;
@end

