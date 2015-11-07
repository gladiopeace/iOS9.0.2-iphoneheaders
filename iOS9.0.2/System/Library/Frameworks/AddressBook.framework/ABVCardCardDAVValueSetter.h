/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:09 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AddressBook/ABVCardPersonValueSetter.h>

@interface ABVCardCardDAVValueSetter : ABVCardPersonValueSetter {

	char _recordIsGroup;
	char _importingToExistingGroup;

}

@property (assign) char recordIsGroup;              //@synthesize recordIsGroup=_recordIsGroup - In the implementation block
+(CFDictionaryRef)_personToGroupPropertyMap;
+(int)groupPropertyForPersonProperty:(int)arg1 ;
-(char)propertyIsValidForPerson:(unsigned)arg1 ;
-(char)setImageData:(id)arg1 cropRectX:(int)arg2 cropRectY:(int)arg3 cropRectWidth:(int)arg4 cropRectHeight:(int)arg5 ;
-(void)setRecordIsGroup:(char)arg1 ;
-(id)initWithPerson:(void*)arg1 removeExistingProperties:(char)arg2 ;
-(id)initWithGroup:(void*)arg1 removeExistingProperties:(char)arg2 ;
-(void*)copyParsedRecordWithSource:(void*)arg1 outRecordType:(unsigned*)arg2 ;
-(void)_drainExistingProperties;
-(char)recordIsGroup;
-(id)imageData;
-(void*)valueForProperty:(unsigned)arg1 ;
-(char)setValue:(void*)arg1 forProperty:(unsigned)arg2 ;
@end

