/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:18 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLContainerChange.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CPLAlbumChange : CPLContainerChange <NSSecureCoding, NSCopying> {

	NSString* _keyAssetIdentifier;
	char _albumSortAscending;
	unsigned _albumType;
	NSString* _name;
	int _position;
	NSString* _parentIdentifier;
	unsigned _albumSortType;

}

@property (assign,nonatomic) unsigned albumType;                     //@synthesize albumType=_albumType - In the implementation block
@property (nonatomic,copy) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) int position;                           //@synthesize position=_position - In the implementation block
@property (nonatomic,copy) NSString * parentIdentifier;              //@synthesize parentIdentifier=_parentIdentifier - In the implementation block
@property (assign,nonatomic) unsigned albumSortType;                 //@synthesize albumSortType=_albumSortType - In the implementation block
@property (assign,nonatomic) char albumSortAscending;                //@synthesize albumSortAscending=_albumSortAscending - In the implementation block
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setPosition:(int)arg1 ;
-(int)position;
-(id)propertiesDescription;
-(id)identifiersForMapping;
-(id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id*)arg2 ;
-(id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id*)arg2 ;
-(id)relatedIdentifier;
-(void)setRelatedIdentifier:(id)arg1 ;
-(NSString *)parentIdentifier;
-(unsigned)albumType;
-(char)albumSortAscending;
-(unsigned)albumSortType;
-(void)setParentIdentifier:(NSString *)arg1 ;
-(void)setAlbumType:(unsigned)arg1 ;
-(void)setAlbumSortType:(unsigned)arg1 ;
-(void)setAlbumSortAscending:(char)arg1 ;
@end

