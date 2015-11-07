/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface IMLockFile : NSObject {

	int _fd;
	char _locked;
	NSString* _path;

}

@property (nonatomic,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) char locked;                  //@synthesize locked=_locked - In the implementation block
-(char)tryLock:(char)arg1 ;
-(char)_lock:(char)arg1 blocking:(char)arg2 ;
-(char)lock:(char)arg1 ;
-(void)dealloc;
-(NSString *)path;
-(void)unlock;
-(id)initWithPath:(id)arg1 ;
-(char)locked;
@end

