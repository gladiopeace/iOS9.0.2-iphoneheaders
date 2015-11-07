/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MusicLibrary/MusicLibrary-Structs.h>
@interface ML3QueryResultSet_BackingStore : NSObject {

	vector<long long, std::__1::allocator<long long> >* _persistentIDs;
	vector<unsigned char, std::__1::allocator<unsigned char> > _sections;

}

@property (nonatomic,readonly) unsigned count; 
-(long long)persistentIDAtIndex:(unsigned)arg1 ;
-(void)enumerateSectionsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned)count;
-(void)reverseEnumeratePersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(char)containsPersistentIDs:(const unordered_set<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long> >*)arg1 ;
-(void)reverseEnumerateSectionsUsingBlock:(/*^block*/id)arg1 ;
-(id)backingStoreByRemovingPersistentIDs:(const unordered_set<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long> >*)arg1 ;
-(void)enumeratePersistentIDsUsingBlock:(/*^block*/id)arg1 ;
@end

