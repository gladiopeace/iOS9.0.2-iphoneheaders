/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MapsWindowTraitsChangeObserverEntry : NSObject {

	/*^block*/id _willChangeHandler;
	/*^block*/id _changeHandler;
	/*^block*/id _didChangeHandler;

}

@property (nonatomic,copy) id willChangeHandler;              //@synthesize willChangeHandler=_willChangeHandler - In the implementation block
@property (nonatomic,copy) id changeHandler;                  //@synthesize changeHandler=_changeHandler - In the implementation block
@property (nonatomic,copy) id didChangeHandler;               //@synthesize didChangeHandler=_didChangeHandler - In the implementation block
-(void)setWillChangeHandler:(id)arg1 ;
-(void)setDidChangeHandler:(id)arg1 ;
-(id)didChangeHandler;
-(id)willChangeHandler;
-(void)setChangeHandler:(id)arg1 ;
-(id)changeHandler;
@end
