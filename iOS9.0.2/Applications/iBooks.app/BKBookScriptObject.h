/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, NSNumber, NSDictionary;

@interface BKBookScriptObject : SUScriptObject {

	NSString* _adamID;
	NSString* _publicationVersion;
	NSString* _humanReadablePublicationVersion;
	NSNumber* _dsID;
	NSNumber* _isSample;
	NSString* _storeFrontID;
	NSString* _versionID;
	NSDictionary* _digest;

}
+(id)webScriptNameForKey:(const char*)arg1 ;
-(id)initWithDigest:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)_className;
-(id)isSample;
@end

