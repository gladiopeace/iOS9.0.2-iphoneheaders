/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol FBANetworkActivityDelegate;
@interface FBANetworkActivityIndicator : NSObject {

	id<FBANetworkActivityDelegate> _delegate;
	int _activityCounter;

}

@property (retain) id<FBANetworkActivityDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int activityCounter;                        //@synthesize activityCounter=_activityCounter - In the implementation block
+(void)endAllActivity;
+(id)sharedManager;
+(void)setDelegate:(id)arg1 ;
+(char)isActive;
+(void)startActivity;
+(void)endActivity;
-(int)activityCounter;
-(void)setActivityCounter:(int)arg1 ;
-(void)setDelegate:(id<FBANetworkActivityDelegate>)arg1 ;
-(id<FBANetworkActivityDelegate>)delegate;
@end

