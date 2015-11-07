/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalDAV/CalDAVOperation.h>

@interface CalDAVAccountPropertyRefreshOperation : CalDAVOperation {

	char _fetchPrincipalSearchProperties;

}

@property (assign,nonatomic) id<CalDAVAccountPropertyRefreshDelegate> delegate; 
@property (assign,nonatomic) char fetchPrincipalSearchProperties;                            //@synthesize fetchPrincipalSearchProperties=_fetchPrincipalSearchProperties - In the implementation block
-(char)fetchPrincipalSearchProperties;
-(void)setFetchPrincipalSearchProperties:(char)arg1 ;
-(void)refreshProperties;
-(void)getAccountPropertiesTask:(id)arg1 completedWithError:(id)arg2 ;
@end

