/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:20 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Message/Message-Structs.h>
@class NSMutableData, NSArray, MFMimePart, NSData;

@interface MFProgressiveMimeParser : NSObject {

	NSMutableData* _data;
	NSArray* _preserveHeaders;
	id _delegate;
	id _context;
	unsigned _cursor;
	unsigned _lastLength;
	MFMimePart* _topLevelPart;
	MFMimePart* _currentPart;
	NSData* _currentBoundary;
	struct {
		unsigned delegateBeganMimePart : 1;
		unsigned delegateFinishedMimePart : 1;
		unsigned delegateBeganData : 1;
		unsigned delegateFailed : 1;
		unsigned state : 3;
	}  _parserFlags;

}
-(id)topLevelPart;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)data;
-(id)context;
-(void)start;
-(void)setContext:(id)arg1 ;
-(void)_reportError:(id)arg1 ;
-(void)_initializeTopLevelPartWithHeaders:(id)arg1 ;
-(void)_continueParsing;
-(id)_currentBoundary;
-(void)_continueParsingStartOfPart;
-(void)_continueParsingHeaders;
-(void)_continueParsingBody;
-(id)initWithBodyData:(id)arg1 topLevelHeaders:(id)arg2 headersToPreserve:(id)arg3 ;
-(void)noteDataLengthChanged:(unsigned)arg1 ;
-(id)currentPart;
@end

