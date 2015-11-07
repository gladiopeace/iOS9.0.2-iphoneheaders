/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MIME/MFMessageStore.h>

@class NSData, NSString;

@interface MFDataMessageStore : MFMessageStore {

	NSData* _data;
	Class _messageClass;
	NSString* _storagePath;

}
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)message;
-(void)setMessageClass:(Class)arg1 ;
-(id)storagePath;
-(id)storePath;
-(id)_cachedBodyDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(void)_deleteCachedBodyForMessage:(id)arg1 ;
-(id)mailboxUid;
-(void)writeUpdatedMessageDataToDisk;
-(id)headerDataForMessage:(id)arg1 downloadIfNecessary:(char)arg2 ;
-(id)storeData:(id)arg1 forMimePart:(id)arg2 isComplete:(char)arg3 ;
-(void)deleteBodyDataForMessage:(id)arg1 ;
-(id)_cachedHeadersForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(char)bodyFetchRequiresNetworkActivity;
-(id)bodyDataForMessage:(id)arg1 isComplete:(char*)arg2 isPartial:(char*)arg3 downloadIfNecessary:(char)arg4 ;
-(id)_cachedBodyForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(void)setStoragePath:(id)arg1 ;
-(id)account;
@end

