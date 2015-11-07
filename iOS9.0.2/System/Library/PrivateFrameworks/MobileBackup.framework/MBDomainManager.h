/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface MBDomainManager : NSObject {

	NSMutableDictionary* _domainsByName;

}
-(void)addDomain:(id)arg1 ;
-(id)domainForName:(id)arg1 ;
-(id)allDomains;
-(id)initWithDomains:(id)arg1 ;
-(char)containsDomainName:(id)arg1 ;
-(id)domainForPath:(id)arg1 relativePath:(id*)arg2 ;
-(id)redirectDomain:(id)arg1 forRelativePath:(id)arg2 ;
-(void)dealloc;
@end

