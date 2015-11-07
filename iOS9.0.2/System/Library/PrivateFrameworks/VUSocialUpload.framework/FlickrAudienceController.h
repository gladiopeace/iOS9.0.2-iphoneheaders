/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VUSocialUpload.framework/VUSocialUpload
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VUSocialUpload/VUSocialUpload-Structs.h>
#import <UIKit/UITableViewController.h>

@protocol FlickrComposeOptionViewDelegate;
@interface FlickrAudienceController : UITableViewController {

	int _audience;
	id<FlickrComposeOptionViewDelegate> _delegate;

}

@property (assign,nonatomic) int audience;                                                     //@synthesize audience=_audience - In the implementation block
@property (assign,nonatomic,__weak) id<FlickrComposeOptionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)titleForAudience:(int)arg1 ;
-(void)setDelegate:(id<FlickrComposeOptionViewDelegate>)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<FlickrComposeOptionViewDelegate>)delegate;
-(void)loadView;
-(CGSize)preferredContentSize;
-(int)audience;
-(void)setAudience:(int)arg1 ;
@end

