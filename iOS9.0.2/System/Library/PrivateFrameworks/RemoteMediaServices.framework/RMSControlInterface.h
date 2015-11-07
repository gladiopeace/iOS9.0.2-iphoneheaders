/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface RMSControlInterface : NSObject {

	char _supportsSpeakerSelection;
	char _supportsVolumeControl;
	char _supportsDirectionalControl;

}

@property (assign,nonatomic) char supportsSpeakerSelection;                //@synthesize supportsSpeakerSelection=_supportsSpeakerSelection - In the implementation block
@property (assign,nonatomic) char supportsVolumeControl;                   //@synthesize supportsVolumeControl=_supportsVolumeControl - In the implementation block
@property (assign,nonatomic) char supportsDirectionalControl;              //@synthesize supportsDirectionalControl=_supportsDirectionalControl - In the implementation block
-(id)protobuf;
-(void)setSupportsSpeakerSelection:(char)arg1 ;
-(void)setSupportsVolumeControl:(char)arg1 ;
-(void)setSupportsDirectionalControl:(char)arg1 ;
-(char)supportsSpeakerSelection;
-(char)supportsVolumeControl;
-(char)supportsDirectionalControl;
-(id)initWithProtobuf:(id)arg1 ;
@end

