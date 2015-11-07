/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class PFUbiquityLocation, NSString, NSError, NSObject;

@interface PFUbiquitySafeSaveFile : NSObject {

	PFUbiquityLocation* _permanentLocation;
	PFUbiquityLocation* _safeSaveLocation;
	PFUbiquityLocation* _currentLocation;
	NSString* _localPeerID;
	char _continueCheckingDownload;
	char _downloadSuccess;
	NSError* _downloadError;
	char _continueCheckingUpload;
	char _safeSaveSuccess;
	char _moveAfterSave;
	NSError* _safeSaveError;
	NSObject*<OS_dispatch_semaphore> _safeSaveSemaphore;
	char _isRegistered;

}

@property (nonatomic,readonly) PFUbiquityLocation * permanentLocation;              //@synthesize permanentLocation=_permanentLocation - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * safeSaveLocation;               //@synthesize safeSaveLocation=_safeSaveLocation - In the implementation block
@property (nonatomic,retain) PFUbiquityLocation * currentLocation;                  //@synthesize currentLocation=_currentLocation - In the implementation block
@property (nonatomic,readonly) NSString * localPeerID;                              //@synthesize localPeerID=_localPeerID - In the implementation block
@property (nonatomic,readonly) NSError * safeSaveError;                             //@synthesize safeSaveError=_safeSaveError - In the implementation block
@property (nonatomic,readonly) char isRegistered;                                   //@synthesize isRegistered=_isRegistered - In the implementation block
@property (nonatomic,readonly) char continueCheckingUpload;                         //@synthesize continueCheckingUpload=_continueCheckingUpload - In the implementation block
@property (nonatomic,readonly) char safeSaveSuccess;                                //@synthesize safeSaveSuccess=_safeSaveSuccess - In the implementation block
@property (nonatomic,readonly) char moveAfterSave;                                  //@synthesize moveAfterSave=_moveAfterSave - In the implementation block
@property (nonatomic,readonly) char existsAtSafeSaveLocation; 
@property (nonatomic,readonly) char existsAtPermanentLocation; 
@property (nonatomic,readonly) char existsInCloud; 
@property (nonatomic,readonly) char downloadSuccess;                                //@synthesize downloadSuccess=_downloadSuccess - In the implementation block
@property (nonatomic,readonly) char continueCheckingDownload;                       //@synthesize continueCheckingDownload=_continueCheckingDownload - In the implementation block
@property (nonatomic,readonly) NSError * downloadError;                             //@synthesize downloadError=_downloadError - In the implementation block
-(NSString *)localPeerID;
-(char)continueCheckingDownload;
-(void)checkFileDownload;
-(char)continueCheckingUpload;
-(void)checkSafeSaveFileUpload;
-(PFUbiquityLocation *)permanentLocation;
-(PFUbiquityLocation *)safeSaveLocation;
-(id)initWithPermanentLocation:(id)arg1 safeSaveLocation:(id)arg2 andLocalPeerID:(id)arg3 ;
-(char)existsInCloud;
-(char)loadFile:(id*)arg1 ;
-(char)downloadLatestVersion:(char)arg1 error:(id*)arg2 ;
-(char)moveToPermanentLocation:(id*)arg1 ;
-(char)loadFileFromLocation:(id)arg1 error:(id*)arg2 ;
-(char)writeFileToLocation:(id)arg1 error:(id*)arg2 ;
-(char)safeSaveFile:(char)arg1 moveToPermanentLocation:(char)arg2 error:(id*)arg3 ;
-(char)existsAtSafeSaveLocation;
-(char)waitForFileToUpload:(id*)arg1 ;
-(char)isFileUploaded:(id*)arg1 ;
-(char)existsAtPermanentLocation;
-(char)removeFileFromLocation:(id)arg1 error:(id*)arg2 ;
-(char)isFileDownloaded:(id*)arg1 ;
-(char)waitForFileToDownload:(id*)arg1 ;
-(void)checkSafeSaveFileUploadAsync;
-(void)setSafeSaveSuccess:(char)arg1 ;
-(void)safeSaveFinishedUpload;
-(void)setSafeSaveError:(NSError *)arg1 ;
-(void)setDownloadSuccess:(char)arg1 ;
-(void)downloadFinished;
-(void)setDownloadError:(NSError *)arg1 ;
-(NSError *)safeSaveError;
-(char)safeSaveSuccess;
-(char)moveAfterSave;
-(char)downloadSuccess;
-(NSError *)downloadError;
-(char)isRegistered;
-(char)writeFile:(id*)arg1 ;
-(char)removeFile:(id*)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(PFUbiquityLocation *)currentLocation;
-(void)setCurrentLocation:(PFUbiquityLocation *)arg1 ;
@end

