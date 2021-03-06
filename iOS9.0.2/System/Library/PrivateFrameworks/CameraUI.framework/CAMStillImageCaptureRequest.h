/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureRequest.h>
#import <libobjc.A.dylib/CAMHDRRequest.h>
#import <libobjc.A.dylib/CAMEffectFilterTypeProvider.h>
#import <libobjc.A.dylib/CAMBurstIdentifierProvider.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/CAMBurstRequest.h>
#import <libobjc.A.dylib/CAMIrisRequest.h>

@protocol CAMStillImageCaptureRequestDelegate;
@class NSString, NSURL;

@interface CAMStillImageCaptureRequest : CAMCaptureRequest <CAMHDRRequest, CAMEffectFilterTypeProvider, CAMBurstIdentifierProvider, NSCopying, NSMutableCopying, CAMBurstRequest, CAMIrisRequest> {

	NSString* _HDREV0PersistenceUUID;
	int _effectFilterType;
	unsigned _maximumBurstLength;
	int _flashMode;
	int _hdrMode;
	int _irisMode;
	char _usesStillImageStabilization;
	char _wantsAudioForCapture;
	char _wantsSquareCrop;
	char _wantsHighResolutionStills;
	NSString* _burstIdentifier;
	NSString* _irisIdentifier;
	NSURL* _localVideoDestinationURL;
	NSString* _videoPersistenceUUID;
	NSString* _HDREV0IrisIdentifier;
	NSURL* _HDREV0LocalVideoDestinationURL;
	NSString* _HDREV0VideoPersistenceUUID;
	id<CAMStillImageCaptureRequestDelegate> _delegate;

}

@property (nonatomic,readonly) int flashMode;                                                        //@synthesize flashMode=_flashMode - In the implementation block
@property (nonatomic,readonly) int hdrMode;                                                          //@synthesize hdrMode=_hdrMode - In the implementation block
@property (nonatomic,readonly) int irisMode;                                                         //@synthesize irisMode=_irisMode - In the implementation block
@property (nonatomic,readonly) char usesStillImageStabilization;                                     //@synthesize usesStillImageStabilization=_usesStillImageStabilization - In the implementation block
@property (nonatomic,readonly) char wantsAudioForCapture;                                            //@synthesize wantsAudioForCapture=_wantsAudioForCapture - In the implementation block
@property (nonatomic,readonly) char wantsSquareCrop;                                                 //@synthesize wantsSquareCrop=_wantsSquareCrop - In the implementation block
@property (nonatomic,readonly) char wantsHighResolutionStills;                                       //@synthesize wantsHighResolutionStills=_wantsHighResolutionStills - In the implementation block
@property (nonatomic,copy,readonly) NSString * burstIdentifier;                                      //@synthesize burstIdentifier=_burstIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * irisIdentifier;                                       //@synthesize irisIdentifier=_irisIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSURL * localVideoDestinationURL;                                //@synthesize localVideoDestinationURL=_localVideoDestinationURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * videoPersistenceUUID;                                 //@synthesize videoPersistenceUUID=_videoPersistenceUUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * HDREV0IrisIdentifier;                                 //@synthesize HDREV0IrisIdentifier=_HDREV0IrisIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSURL * HDREV0LocalVideoDestinationURL;                          //@synthesize HDREV0LocalVideoDestinationURL=_HDREV0LocalVideoDestinationURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * HDREV0VideoPersistenceUUID;                           //@synthesize HDREV0VideoPersistenceUUID=_HDREV0VideoPersistenceUUID - In the implementation block
@property (nonatomic,__weak,readonly) id<CAMStillImageCaptureRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned maximumBurstLength;                                          //@synthesize maximumBurstLength=_maximumBurstLength - In the implementation block
@property (nonatomic,readonly) int effectFilterType;                                                 //@synthesize effectFilterType=_effectFilterType - In the implementation block
@property (nonatomic,copy,readonly) NSString * HDREV0PersistenceUUID;                                //@synthesize HDREV0PersistenceUUID=_HDREV0PersistenceUUID - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)burstIdentifier;
-(id)init;
-(id<CAMStillImageCaptureRequestDelegate>)delegate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(int)flashMode;
-(int)hdrMode;
-(int)irisMode;
-(char)usesStillImageStabilization;
-(char)wantsAudioForCapture;
-(char)wantsSquareCrop;
-(char)wantsHighResolutionStills;
-(id)irisLocalVideoDestinationURLForHDREV0:(char)arg1 ;
-(id)initWithRequest:(id)arg1 distinctPersistence:(char)arg2 ;
-(unsigned)maximumBurstLength;
-(int)effectFilterType;
-(NSString *)HDREV0PersistenceUUID;
-(id)captureRequest;
-(NSString *)videoPersistenceUUID;
-(NSString *)irisIdentifier;
-(id)irisStillImagePersistenceUUIDForHDREV0:(char)arg1 ;
-(id)irisVideoPersistenceUUIDForHDREV0:(char)arg1 ;
-(char)isHDREV0LocalVideoDestinationURL:(id)arg1 ;
-(id)irisIdentifierForHDREV0:(char)arg1 ;
-(NSURL *)localVideoDestinationURL;
-(NSString *)HDREV0IrisIdentifier;
-(NSURL *)HDREV0LocalVideoDestinationURL;
-(NSString *)HDREV0VideoPersistenceUUID;
@end

