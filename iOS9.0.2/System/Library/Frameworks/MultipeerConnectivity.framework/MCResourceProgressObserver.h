/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:54 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSProgress;

@interface MCResourceProgressObserver : NSObject {

	NSString* _name;
	NSProgress* _progress;
	/*^block*/id _cancelHandler;

}

@property (nonatomic,copy) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSProgress * progress;              //@synthesize progress=_progress - In the implementation block
@property (nonatomic,copy) id cancelHandler;                     //@synthesize cancelHandler=_cancelHandler - In the implementation block
-(id)initWithName:(id)arg1 progress:(id)arg2 cancelHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)invalidate;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSProgress *)progress;
-(void)setCancelHandler:(id)arg1 ;
-(id)cancelHandler;
@end

