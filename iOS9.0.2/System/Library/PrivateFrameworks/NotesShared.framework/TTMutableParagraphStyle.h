/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <NotesShared/TTParagraphStyle.h>

@class TTTodo;

@interface TTMutableParagraphStyle : TTParagraphStyle

@property (assign,nonatomic) unsigned style; 
@property (assign,nonatomic) int alignment; 
@property (assign,nonatomic) int writingDirection; 
@property (assign,nonatomic) unsigned indent; 
@property (assign,nonatomic) unsigned startingItemNumber; 
@property (nonatomic,retain) TTTodo * todo; 
@property (assign,nonatomic) unsigned hints; 
@property (assign,nonatomic) char needsParagraphCleanup; 
@property (assign,nonatomic) char needsListCleanup; 
+(id)paragraphStyleNamed:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

