/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface TSUKeychainUtils : NSObject
+(char)setPassphrase:(id)arg1 forGenericItem:(id)arg2 service:(id)arg3 description:(id)arg4 label:(id)arg5 account:(id)arg6 error:(id*)arg7 ;
+(char)lookupGenericItem:(id)arg1 account:(id*)arg2 passphrase:(id*)arg3 error:(id*)arg4 ;
+(char)removeGenericItem:(id)arg1 error:(id*)arg2 ;
+(char)setPassphrase:(id)arg1 forGenericItem:(id)arg2 service:(id)arg3 description:(id)arg4 label:(id)arg5 error:(id*)arg6 ;
+(char)lookupGenericItem:(id)arg1 passphrase:(id*)arg2 error:(id*)arg3 ;
@end

