/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PTPTransport, PTPOperationResponsePacket, PTPEventPacket, NSMutableArray, PTPDeviceInfoDataset, NSString, NSMutableDictionary, PTPWrappedBytes;

@interface PTPInitiator : NSObject {

	PTPTransport* _transport;
	PTPOperationResponsePacket* _response;
	PTPEventPacket* _event;
	unsigned long _transactionID;
	unsigned short _operationCode;
	char _responseReceived;
	char _requestPending;
	char _cancelOp;
	unsigned long _lastAddedObject;
	id _delegate;
	char _sessionOpen;
	char _needToReopenSession;
	NSMutableArray* _storages;
	PTPDeviceInfoDataset* _deviceInfo;
	NSMutableArray* _eventQueue;
	unsigned short _deviceVendorID;
	unsigned short _deviceProductID;
	NSString* _UUIDString;
	NSString* _deviceSerialNumberString;
	unsigned long _estimatedNumOfDownloadableObjects;
	unsigned long _numOfDownloadableObjectsPlusFolders;
	unsigned long _contentCatalogPercentCompleted;
	NSString* _userAssignedDeviceName;
	char _appleDeviceHasNewFW;
	char _deviceIsPairedWithThisHost;
	char _deviceIsPasscodeLocked;
	char _deviceIsDummyPTPDevice;
	NSMutableDictionary* _arrayOf64BitFileSizes;
	PTPWrappedBytes* _dataForTransaction;
	unsigned long long _excessReceivedDataSize;
	unsigned long long _totalFDFileSize;
	unsigned long long _totalFDReceivedSize;
	unsigned long _totalFDReportedProgress;
	double _currentFDNoteTime;
	char* _metadataBuffer;
	unsigned long _maxMetadataBufferSize;

}
-(void)handleData:(id)arg1 ;
-(void)cancel;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)UUIDString;
-(void)handleEvent:(id)arg1 ;
-(void)stop;
-(double)timeOffset;
-(char)start;
-(void)handleResponse:(id)arg1 ;
-(id)deviceInfo;
-(id)transport;
-(void)sentData:(id)arg1 ;
-(void)transportActivated;
-(void)transportDeactivated;
-(void)handleDeviceRemoval;
-(void)handleStartData:(id)arg1 ;
-(void)setContentCatalogPercentCompleted:(unsigned long)arg1 ;
-(char)isAccessRestrictedAppleDevice;
-(char)deleteFile:(id)arg1 ;
-(id)initWithHostLocationID:(unsigned long)arg1 ;
-(id)refreshAssignedDeviceName;
-(id)userAssignedDeviceName;
-(unsigned short)deviceVendorID;
-(unsigned short)deviceProductID;
-(id)initWithTargetAddress:(id)arg1 targetPort:(unsigned long)arg2 targetGUID:(id)arg3 targetName:(id)arg4 hostGUID:(id)arg5 hostName:(id)arg6 ;
-(void)readStorages;
-(void)handleReroutedEvent:(id)arg1 ;
-(id)objectInfo:(unsigned long)arg1 ;
-(id)itemForObjectHandle:(unsigned long)arg1 ;
-(id)storageForStorageID:(unsigned long)arg1 ;
-(unsigned short)saveFile:(id)arg1 to:(id)arg2 ;
-(id)thumbDataFromFile:(id)arg1 maxSize:(unsigned long)arg2 actualSize:(unsigned*)arg3 useBuffer:(char*)arg4 ;
-(id)partialDataFromFile:(id)arg1 fromOffset:(unsigned long)arg2 maxSize:(unsigned long)arg3 actualSize:(unsigned*)arg4 useBuffer:(char*)arg5 ;
-(char*)metadataBuffer;
-(unsigned long)maxMetadataBufferSize;
-(id)storageInfo:(unsigned long)arg1 ;
-(id)objectInfosForObjectsInStorage:(unsigned long)arg1 objectFormatCode:(unsigned long)arg2 association:(unsigned long)arg3 ;
-(id)objectHandlesInStorage:(unsigned long)arg1 objectFormatCode:(unsigned long)arg2 association:(unsigned long)arg3 ;
-(id)objectInfosForObjectsInStorage64:(unsigned long)arg1 objectFormatCode:(unsigned long)arg2 association:(unsigned long)arg3 ;
-(id)objectHandlesInStorage64:(unsigned long)arg1 objectFormatCode:(unsigned long)arg2 association:(unsigned long)arg3 ;
-(char)closeSession;
-(id)sendRequest:(id)arg1 andReceiveData:(id)arg2 excessReceivedDataSize:(unsigned long long*)arg3 timeout:(double)arg4 ;
-(void)processUnhandledEvents;
-(id)sendRequest:(id)arg1 andReceiveData:(id)arg2 maxDataSize:(unsigned long)arg3 excessReceivedDataSize:(unsigned long long*)arg4 timeout:(double)arg5 ;
-(id)sendRequest:(id)arg1 excessReceivedDataSize:(unsigned long long*)arg2 timeout:(double)arg3 ;
-(char)allowKeepAwake;
-(id)storageIDs;
-(unsigned long long)objectInfo64BitSize:(unsigned long)arg1 ;
-(id)dataFromFile:(id)arg1 maxSize:(unsigned long)arg2 actualSize:(unsigned*)arg3 useBuffer:(char*)arg4 ;
-(unsigned short)savePartialFileMD5:(id)arg1 fromOffset:(unsigned long long)arg2 size:(unsigned long long)arg3 to:(id)arg4 ;
-(unsigned short)savePartialFile:(id)arg1 fromOffset:(unsigned long long)arg2 size:(unsigned long long)arg3 to:(id)arg4 ;
-(id)deviceDateTime;
-(char)setDevicePropertyValue:(id)arg1 forProperty:(unsigned short)arg2 ;
-(unsigned short)deviceStatus;
-(void)deviceReset;
-(id)deviceSerialNumberString;
-(char)appleDeviceHasNewFW;
-(char)deviceIsPairedWithThisHost;
-(char)deviceIsPasscodeLocked;
-(char)deviceIsDummyPTPDevice;
-(unsigned long)numOfDownloadableObjectsPlusFolders;
-(int)transportConnectionStatus;
-(void)appendDataBuffer:(void*)arg1 length:(unsigned long)arg2 ;
-(char)waitForResponseWithTimeout:(double)arg1 notifyProgressForFile:(id)arg2 ;
-(void)issueCancelEvent:(unsigned long)arg1 ;
-(void)issueCancelRequest:(unsigned long)arg1 ;
-(id)sendRequest:(id)arg1 andSendData:(id)arg2 ;
-(id)devicePropertyDescDatasetForProperty:(unsigned short)arg1 ;
-(id)devicePropertyValueForProperty:(unsigned short)arg1 ;
-(char)resetDevicePropertyValueForProperty:(unsigned short)arg1 ;
-(unsigned long)numObjectsInStorage:(unsigned long)arg1 objectFormatCode:(unsigned long)arg2 association:(unsigned long)arg3 ;
-(id)objectFilesystemInfosForObjectsInStorage:(unsigned long)arg1 objectFormatCode:(unsigned long)arg2 association:(unsigned long)arg3 ;
-(char)initiateCapture;
-(char)setDeviceDateTime:(id)arg1 ;
-(char)requestPending;
-(unsigned long)contentCatalogPercentCompleted;
-(char)openSession;
-(id)initiator;
@end

