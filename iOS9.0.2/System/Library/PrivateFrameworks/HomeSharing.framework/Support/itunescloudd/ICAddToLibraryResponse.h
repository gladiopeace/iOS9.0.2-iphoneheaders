/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HomeSharing/HSResponse.h>

@class NSDictionary;

@interface ICAddToLibraryResponse : HSResponse {

	char _updateRequired;
	NSDictionary* _addedItems;

}

@property (nonatomic,retain) NSDictionary * addedItems;              //@synthesize addedItems=_addedItems - In the implementation block
@property (assign,nonatomic) char updateRequired;                    //@synthesize updateRequired=_updateRequired - In the implementation block
-(char)updateRequired;
-(void)setUpdateRequired:(char)arg1 ;
-(NSDictionary *)addedItems;
-(void)setAddedItems:(NSDictionary *)arg1 ;
@end

