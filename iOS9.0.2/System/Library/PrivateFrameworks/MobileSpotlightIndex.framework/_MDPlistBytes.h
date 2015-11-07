/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:22 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileSpotlightIndex.framework/MobileSpotlightIndex
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MobileSpotlightIndex/MobileSpotlightIndex-Structs.h>
@interface _MDPlistBytes : NSObject {

	unsigned _byteVector;
	unsigned _byteVectorCnt;
	unsigned _byteVectorCapacity;
	unsigned _isBad : 16;
	unsigned _shouldDeallocate : 1;
	unsigned _isMutable : 1;
	unsigned _isMutating : 1;
	unsigned _didFinalize : 1;
	unsigned _useMalloc : 1;
	CFArrayRef _rleQueue;
	unsigned long long* _wrapperPtr;
	unsigned long long* _uidVector;
	int _uidCount;
	int _uidCapacity;

}
+(MDPlistBytesRef)emptyDictionaryPlistBytes;
+(MDPlistBytesRef)createPlistBytes:(id)arg1 ;
+(MDPlistBytesRef)nullObjectPlistBytes;
+(MDPlistBytesRef)emptyArrayPlistBytes;
+(MDPlistBytesRef)createArrayPlistBytesUsingBlock:(/*^block*/id)arg1 ;
+(void)enumerateObjectsFromPlistBytes:(char*)arg1 count:(unsigned)arg2 shouldDeallocate:(char)arg3 usingBlock:(/*^block*/id)arg4 ;
+(MDPlistBytesRef)createDictionaryPlistBytesUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long)_cfTypeID;
-(void)dealloc;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)initWithByteVector:(char*)arg1 count:(unsigned)arg2 shouldDeallocate:(char)arg3 ;
-(id)createDispatchData;
-(CFDataRef)copyData;
-(CFDataRef)copyDataWithBytesNoCopy;
-(void)finalize;
@end

