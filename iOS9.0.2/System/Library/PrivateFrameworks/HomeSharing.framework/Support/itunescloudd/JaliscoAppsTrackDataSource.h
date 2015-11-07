/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <itunescloudd/itunescloudd-Structs.h>
@class SSAccount, NSData, NSArray, NSNumber;

@interface JaliscoAppsTrackDataSource : NSObject {

	SSAccount* _account;
	NSData* _itemsResponseData;
	NSArray* _rawItems;
	NSArray* _deletedItems;
	NSNumber* _familyMemberStoreID;

}
+(id)metadataMap;
-(id)initWithItemsResponseData:(id)arg1 account:(id)arg2 familyMemberStoreID:(id)arg3 ;
-(id)insertIntoDatabase:(id)arg1 progressHandler:(/*^block*/id)arg2 ;
-(char)mediaKindIsSupported:(unsigned)arg1 ;
-(char)_parseFlavor:(id)arg1 forRedownloadParameterForStatement:(sqlite3_stmtRef)arg2 ;
@end

