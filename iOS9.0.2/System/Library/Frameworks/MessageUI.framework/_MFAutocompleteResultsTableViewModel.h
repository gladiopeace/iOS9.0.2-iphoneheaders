/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MessageUI/MessageUI-Structs.h>
@class NSMutableDictionary;

@interface _MFAutocompleteResultsTableViewModel : NSObject {

	NSMutableDictionary* _sections;
	unsigned _numberOfSections;

}

@property (assign,nonatomic) unsigned numberOfSections;                        //@synthesize numberOfSections=_numberOfSections - In the implementation block
@property (nonatomic,readonly) unsigned numberOfNonEmptySections; 
-(void)enumerateSections:(/*^block*/id)arg1 ;
-(void)setNumberOfSections:(unsigned)arg1 ;
-(void)setSection:(id)arg1 atIndex:(unsigned)arg2 ;
-(unsigned)numberOfNonEmptySections;
-(id)initWithNumberOfSections:(unsigned)arg1 ;
-(SCD_Struct_MF9)computeDiffForModel:(id)arg1 ;
-(void)dealloc;
-(id)objectAtIndexedSubscript:(unsigned)arg1 ;
-(unsigned)numberOfSections;
-(void)setObject:(id)arg1 atIndexedSubscript:(unsigned)arg2 ;
-(id)sectionAtIndex:(unsigned)arg1 ;
@end

