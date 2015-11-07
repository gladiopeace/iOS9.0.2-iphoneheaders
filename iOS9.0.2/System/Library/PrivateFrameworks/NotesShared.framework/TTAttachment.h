/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/TTAttachment.h>

@protocol TTAttachment <NSObject>
@required
-(id)attachmentIdentifier;
-(id)attachmentUTI;

@end


@class NSString;

@interface TTAttachment : NSObject <TTAttachment> {

	NSString* _attachmentIdentifier;
	NSString* _attachmentUTI;

}

@property (nonatomic,retain) NSString * attachmentIdentifier;              //@synthesize attachmentIdentifier=_attachmentIdentifier - In the implementation block
@property (nonatomic,retain) NSString * attachmentUTI;                     //@synthesize attachmentUTI=_attachmentUTI - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)attachmentIdentifier;
-(NSString *)attachmentUTI;
-(void)setAttachmentIdentifier:(NSString *)arg1 ;
-(void)setAttachmentUTI:(NSString *)arg1 ;
@end

