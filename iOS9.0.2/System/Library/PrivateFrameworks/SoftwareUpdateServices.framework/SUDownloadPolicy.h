/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:16 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class SUDescriptor;


@protocol SUDownloadPolicy <NSObject>
@property (nonatomic,retain) SUDescriptor * descriptor; 
@required
-(char)isDownloadable;
-(void)setDescriptor:(id)arg1;
-(SUDescriptor *)descriptor;
-(char)isDownloadableForCurrentNetworkConditions:(int*)arg1 cellularFeesApply:(char*)arg2;
-(char)isDownloadAllowableForCellularRoaming;
-(char)isDownloadAllowableForCellular;
-(char)isDownloadFreeForCellular;
-(char)isPowerRequired;
-(char)isDownloadAllowableForCellular2G;
-(char)isDownloadAllowableForWiFi;
-(char)isSamePolicy:(id)arg1;
-(char)isDownloadableForCurrentNetworkConditions:(int*)arg1 cellularFeesApply:(char*)arg2 powerRequired:(char*)arg3;
-(char)hasEnoughDiskSpace;
-(id)initWithDescriptor:(id)arg1;

@end

