/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MKInstructionContents.h>

@interface MNSignInstructionContents : MKInstructionContents {

	char _useNames;

}

@property (assign,nonatomic) char useNames;              //@synthesize useNames=_useNames - In the implementation block
+(id)contentsWithStep:(id)arg1 transportType:(int)arg2 useNames:(char)arg3 ;
-(id)_signInstructionForStartWithShorterAlternatives:(id*)arg1 ;
-(id)_signWalkingInstructionForRightWithShorterAlternatives:(id*)arg1 ;
-(void)setUseNames:(char)arg1 ;
-(id)_signInstructionForContinueWithShorterAlternatives:(id*)arg1 ;
-(id)_signInstructionForArrivalWithShorterAlternatives:(id*)arg1 ;
-(id)_signWalkingInstructionForContinueWithShorterAlternatives:(id*)arg1 ;
-(id)_signInstructionForRoundaboutWithShorterAlternatives:(id*)arg1 ;
-(id)_signInstructionForExitWithShorterAlternatives:(id*)arg1 ;
-(id)instructionWithShorterAlternatives:(id*)arg1 ;
-(id)_signInstructionForBranchWithShorterAlternatives:(id*)arg1 ;
-(id)_signWalkingInstructionForTurnWithShorterAlternatives:(id*)arg1 ;
-(id)_signWalkingInstructionForRoundaboutWithShorterAlternatives:(id*)arg1 ;
-(id)_signWalkingInstructionForUTurnWithShorterAlternatives:(id*)arg1 ;
-(id)_signInstructionForChangeHighwaysWithShorterAlternatives:(id*)arg1 ;
-(id)_signInstructionForTurnWithShorterAlternatives:(id*)arg1 ;
-(id)_signWalkingInstructionForStartWithShorterAlternatives:(id*)arg1 ;
-(id)_signWalkingInstructionForLeftWithShorterAlternatives:(id*)arg1 ;
-(id)_signInstructionForFerryWithShorterAlternatives:(id*)arg1 ;
-(char)useNames;
-(id)_signInstructionForUTurnWithShorterAlternatives:(id*)arg1 ;
-(char)useDestinationName;
-(char)useRoadName;
-(char)useIntersectionName;
-(char)useTowardNames;
@end

