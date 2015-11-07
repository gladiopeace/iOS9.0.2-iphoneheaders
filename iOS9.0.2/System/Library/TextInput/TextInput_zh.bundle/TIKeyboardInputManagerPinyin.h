/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput_zh/TIKeyboardInputManagerChineseMecabra.h>

@class NSMutableArray, NSMutableDictionary, NSArray;

@interface TIKeyboardInputManagerPinyin : TIKeyboardInputManagerChineseMecabra {

	NSMutableArray* _touchDataArray;
	NSMutableDictionary* _touchUpEvents;
	NSArray* _clearedTouchDataArray;
	NSArray* _savedGeometryData;
	NSArray* _savedTouchData;

}

@property (nonatomic,readonly) NSMutableDictionary * touchUpEvents;              //@synthesize touchUpEvents=_touchUpEvents - In the implementation block
@property (nonatomic,readonly) NSMutableArray * touchDataArray;                  //@synthesize touchDataArray=_touchDataArray - In the implementation block
@property (nonatomic,retain) NSArray * clearedTouchDataArray;                    //@synthesize clearedTouchDataArray=_clearedTouchDataArray - In the implementation block
@property (nonatomic,retain) NSArray * savedGeometryData;                        //@synthesize savedGeometryData=_savedGeometryData - In the implementation block
@property (nonatomic,retain) NSArray * savedTouchData;                           //@synthesize savedTouchData=_savedTouchData - In the implementation block
-(void)dealloc;
-(id)keyboardBehaviors;
-(void)clearInput;
-(char)usesAutoDeleteWord;
-(char)needsKeyHitTestResults;
-(int)keyHitTest:(id)arg1 ;
-(char)updateCandidates;
-(char)shouldSearchCompletionForSubstrings;
-(char)supportsPairedPunctutationInput;
-(char)usesGeometryModelData;
-(NSMutableDictionary *)touchUpEvents;
-(void)setSavedGeometryData:(NSArray *)arg1 ;
-(NSMutableArray *)touchDataArray;
-(void)setSavedTouchData:(NSArray *)arg1 ;
-(NSArray *)clearedTouchDataArray;
-(void)setClearedTouchDataArray:(NSArray *)arg1 ;
-(void)insertDummyTouchDataAtIndex:(unsigned)arg1 ;
-(void)saveTouchDataForPathIndex:(int)arg1 atIndex:(unsigned)arg2 ;
-(NSArray *)savedGeometryData;
-(NSArray *)savedTouchData;
-(id)touchDataForPathIndex:(int)arg1 ;
-(id)geometryModelData;
-(void)addInput:(id)arg1 withContext:(id)arg2 ;
-(id)didAcceptCandidate:(id)arg1 ;
@end

