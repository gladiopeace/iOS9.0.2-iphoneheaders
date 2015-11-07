/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CNAutocompleteUsageMonitorProbe <CNAutocompleteProbe>
@required
-(void)recordUserSelectedPredictionAtIndex:(unsigned)arg1;
-(void)recordUserSelectedIndex:(unsigned)arg1;
-(void)recordUserTypedInNumberOfCharacters:(unsigned)arg1;
-(void)recordUserSelectedResultWithSourceType:(unsigned)arg1;
-(void)recordUserIgnoredPredictionAfterDelay:(double)arg1;
-(void)recordUserIgnoredPrefixedResultAfterDelay:(double)arg1 batch:(unsigned)arg2;
-(void)recordUserSawPredictions;

@end

