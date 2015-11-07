/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataAccess/DAAction.h>

@interface ASEmailChangeFlagsAction : DAAction {

	char _read;
	char _flagged;
	unsigned long long _changedFlags;

}

@property (assign,nonatomic) char read;                                    //@synthesize read=_read - In the implementation block
@property (assign,nonatomic) char flagged;                                 //@synthesize flagged=_flagged - In the implementation block
@property (assign,nonatomic) unsigned long long changedFlags;              //@synthesize changedFlags=_changedFlags - In the implementation block
-(id)initWithServerID:(id)arg1 read:(char)arg2 flagged:(char)arg3 changedFlags:(unsigned long long)arg4 ;
-(void)appendApplicationDataForTask:(id)arg1 toWBXMLData:(id)arg2 ;
-(unsigned long long)changedFlags;
-(void)setChangedFlags:(unsigned long long)arg1 ;
-(char)flagged;
-(void)setRead:(char)arg1 ;
-(void)setFlagged:(char)arg1 ;
-(char)read;
@end

