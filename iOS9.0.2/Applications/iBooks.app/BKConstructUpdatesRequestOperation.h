/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSURLRequestProperties;

@interface BKConstructUpdatesRequestOperation : ISOperation {

	SSURLRequestProperties* _inputProperties;
	SSURLRequestProperties* _outputProperties;

}

@property (readonly) SSURLRequestProperties * updatesRequestProperties; 
-(SSURLRequestProperties *)updatesRequestProperties;
-(void)run;
-(id)initWithRequestProperties:(id)arg1 ;
@end

