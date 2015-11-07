/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBNotificationCell.h>

@class SBNotificationSeparatorView;

@interface SBNotificationsBulletinCell : SBNotificationCell {

	SBNotificationSeparatorView* _separator;
	char _showsSeparator;
	char _missed;

}

@property (assign,nonatomic) char showsSeparator;                      //@synthesize showsSeparator=_showsSeparator - In the implementation block
@property (assign,getter=isMissed,nonatomic) char missed;              //@synthesize missed=_missed - In the implementation block
+(id)defaultColorForRelevanceDate;
+(CGSize)_preferredSizeForRelevanceDateLabel:(id)arg1 ;
-(void)setRelevanceDateLabel:(id)arg1 ;
-(void)setEventDateLabel:(id)arg1 ;
-(char)showsSeparator;
-(void)setShowsSeparator:(char)arg1 ;
-(char)isMissed;
-(void)dealloc;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(void)setSectionLocation:(int)arg1 animated:(char)arg2 ;
-(void)setMissed:(char)arg1 ;
@end

