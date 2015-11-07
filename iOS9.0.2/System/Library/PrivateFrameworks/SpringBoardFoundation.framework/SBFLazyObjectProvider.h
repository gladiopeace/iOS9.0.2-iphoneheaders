/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:18 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SBFLazyObjectProvider : NSObject {

	id _object;
	/*^block*/id _generator;

}

@property (nonatomic,retain) id object;               //@synthesize object=_object - In the implementation block
@property (nonatomic,copy) id generator;              //@synthesize generator=_generator - In the implementation block
-(void)dealloc;
-(id)object;
-(void)setObject:(id)arg1 ;
-(void)setGenerator:(id)arg1 ;
-(id)generator;
-(id)initWithGenerator:(/*^block*/id)arg1 ;
@end

