/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, UIImage, NSURL, NSItemProvider;

@interface SLAttachment : NSObject <NSSecureCoding> {

	/*^block*/id _previewUpdateObserver;
	/*^block*/id _payloadUpdateObserver;
	NSString* _identifier;
	char _startedPayloadLoad;
	char _needsAnotherPreviewGeneration;
	int _previewType;
	UIImage* _previewImage;
	int _type;
	id _payload;
	NSURL* _payloadSourceFileURL;
	NSItemProvider* _itemProvider;
	NSString* _typeIdentifier;
	int _itemProviderPreviewType;
	int _downsampleStatus;

}

@property (assign) int previewType;                                           //@synthesize previewType=_previewType - In the implementation block
@property (nonatomic,retain) UIImage * previewImage;                          //@synthesize previewImage=_previewImage - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) int type;                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) id payload;                                        //@synthesize payload=_payload - In the implementation block
@property (nonatomic,copy) NSURL * payloadSourceFileURL;                      //@synthesize payloadSourceFileURL=_payloadSourceFileURL - In the implementation block
@property (nonatomic,retain) NSItemProvider * itemProvider;                   //@synthesize itemProvider=_itemProvider - In the implementation block
@property (nonatomic,copy) NSString * typeIdentifier;                         //@synthesize typeIdentifier=_typeIdentifier - In the implementation block
@property (nonatomic,readonly) int itemProviderPreviewType;                   //@synthesize itemProviderPreviewType=_itemProviderPreviewType - In the implementation block
@property (assign,nonatomic) int downsampleStatus;                            //@synthesize downsampleStatus=_downsampleStatus - In the implementation block
@property (assign,nonatomic) char startedPayloadLoad;                         //@synthesize startedPayloadLoad=_startedPayloadLoad - In the implementation block
@property (assign,nonatomic) char needsAnotherPreviewGeneration;              //@synthesize needsAnotherPreviewGeneration=_needsAnotherPreviewGeneration - In the implementation block
+(char)attachmentTypeRepresentsAnImage:(int)arg1 ;
+(char)supportsSecureCoding;
-(NSItemProvider *)itemProvider;
-(NSURL *)payloadSourceFileURL;
-(id)initWithPayload:(id)arg1 type:(int)arg2 previewImage:(id)arg3 ;
-(void)setDownsampleStatus:(int)arg1 ;
-(int)downsampleStatus;
-(void)setPreviewUpdateObserverWithBlock:(/*^block*/id)arg1 ;
-(void)setPayloadUpdateObserverWithBlock:(/*^block*/id)arg1 ;
-(void)setItemProvider:(NSItemProvider *)arg1 ;
-(void)setPayloadSourceFileURL:(NSURL *)arg1 ;
-(void)setTypeIdentifier:(NSString *)arg1 ;
-(int)itemProviderPreviewType;
-(char)startedPayloadLoad;
-(void)setStartedPayloadLoad:(char)arg1 ;
-(char)needsAnotherPreviewGeneration;
-(void)setNeedsAnotherPreviewGeneration:(char)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(NSString *)identifier;
-(id)payload;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)_uniqueIdentifier;
-(NSString *)typeIdentifier;
-(void)setPayload:(id)arg1 ;
-(void)setPreviewImage:(UIImage *)arg1 ;
-(UIImage *)previewImage;
-(void)setPreviewType:(int)arg1 ;
-(int)previewType;
@end

