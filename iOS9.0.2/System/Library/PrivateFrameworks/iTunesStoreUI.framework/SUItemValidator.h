/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface SUItemValidator : NSObject {

	NSMutableArray* _collectionTests;
	NSMutableArray* _itemTests;

}

@property (nonatomic,readonly) NSArray * validationTests; 
-(void)dealloc;
-(char)validateItems:(id)arg1 offers:(id)arg2 error:(id*)arg3 ;
-(void)addCollectionValidationTests:(id)arg1 ;
-(void)addItemValidationTests:(id)arg1 ;
-(void)removeValidationTest:(id)arg1 ;
-(char)validateItems:(id)arg1 error:(id*)arg2 ;
-(NSArray *)validationTests;
@end

