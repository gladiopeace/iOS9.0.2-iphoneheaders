/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/_UINavigationControllerPalette.h>

@class NSArray, UILabel, UIImageView, UIView, NSString;

@interface TransferMailboxPickerPalette : _UINavigationControllerPalette {

	NSArray* _senders;
	UILabel* _sendersLabel;
	UILabel* _subjectLabel;
	UIImageView* _messageThumbnailView;
	unsigned _messageCount;

}

@property (nonatomic,readonly) UIView * messageThumbnailView;              //@synthesize messageThumbnailView=_messageThumbnailView - In the implementation block
@property (nonatomic,copy) NSString * subject; 
@property (nonatomic,copy) NSArray * senders;                              //@synthesize senders=_senders - In the implementation block
@property (assign,nonatomic) unsigned messageCount;                        //@synthesize messageCount=_messageCount - In the implementation block
+(float)defaultHeight;
-(void)setMessageThumbnailWithView:(id)arg1 ;
-(UIView *)messageThumbnailView;
-(CGRect)messageThumbnailViewFrame;
-(void)_drawThumbnailInContext:(CGContextRef)arg1 view:(id)arg2 frame:(CGRect)arg3 ;
-(id)_senderStringForWidth:(float)arg1 ;
-(NSArray *)senders;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(unsigned)messageCount;
-(void)setSubject:(NSString *)arg1 ;
-(NSString *)subject;
-(void)setMessageCount:(unsigned)arg1 ;
-(void)setSenders:(NSArray *)arg1 ;
@end

