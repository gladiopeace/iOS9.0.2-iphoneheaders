/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/PDTimeNode.h>

@class PDAnimationTarget, NSMutableArray;

@interface PDAnimateBehavior : PDTimeNode {

	PDAnimationTarget* mTgtElement;
	NSMutableArray* mAttributeNames;

}

@property (nonatomic,retain) NSMutableArray * attributeNames; 
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(NSMutableArray *)attributeNames;
-(void)setAttributeNames:(NSMutableArray *)arg1 ;
@end

