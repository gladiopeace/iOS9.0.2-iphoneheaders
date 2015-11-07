/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:09 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Game Center/Game Center-Structs.h>
#import <Game Center/GKPlayerProfileCollectionViewController.h>

@interface GKFriendRequestProfileViewController : GKPlayerProfileCollectionViewController {

	char _processed;
	char _didFloatInBubbles;

}

@property (assign,nonatomic) char processed;                      //@synthesize processed=_processed - In the implementation block
@property (assign,nonatomic) char didFloatInBubbles;              //@synthesize didFloatInBubbles=_didFloatInBubbles - In the implementation block
+(Class)headerViewClass;
-(void)acceptedFriendRequest:(char)arg1 withError:(id)arg2 ;
-(void)acceptFriendRequest;
-(void)ignoreFriendRequest;
-(id)init;
-(void)loadView;
-(CGSize)preferredContentSize;
-(void)viewDidAppear:(char)arg1 ;
-(char)processed;
-(void)setProcessed:(char)arg1 ;
-(void)configureDataSource;
-(void)willAnimateAppearingWithBubbleFlow;
-(void)floatInBubbles;
-(void)setDidFloatInBubbles:(char)arg1 ;
-(void)animateOutBubbleWithFocus:(int)arg1 completion:(/*^block*/id)arg2 ;
-(char)didFloatInBubbles;
@end
