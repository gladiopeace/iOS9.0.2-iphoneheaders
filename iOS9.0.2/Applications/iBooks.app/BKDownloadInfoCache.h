/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSMutableArray, NSNumber, NSString, NSURL, NSArray;

@interface BKDownloadInfoCache : NSObject {

	NSDictionary* _itemCache;
	char _paused;
	char _finished;
	float _progress;
	long long _bytesTotal;
	char _waiting;
	BKDownloadInfoCache* _parent;
	NSMutableArray* _mutableChildren;

}

@property (nonatomic,retain) NSDictionary * itemCache;                        //@synthesize itemCache=_itemCache - In the implementation block
@property (nonatomic,readonly) NSNumber * itemIdentifier; 
@property (nonatomic,readonly) NSString * libraryItemIdentifier; 
@property (nonatomic,readonly) NSString * removalIdentifier; 
@property (nonatomic,readonly) NSNumber * collectionIdentifier; 
@property (nonatomic,readonly) NSString * genre; 
@property (nonatomic,readonly) NSString * kind; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * sortTitle; 
@property (nonatomic,readonly) NSString * author; 
@property (nonatomic,readonly) NSString * sortAuthor; 
@property (nonatomic,readonly) NSNumber * sample; 
@property (assign,nonatomic) float progress;                                  //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) long long bytesTotal;                            //@synthesize bytesTotal=_bytesTotal - In the implementation block
@property (nonatomic,readonly) NSURL * thumbnailUrl; 
@property (assign,getter=isPaused,nonatomic) char paused;                     //@synthesize paused=_paused - In the implementation block
@property (assign,getter=isFinished,nonatomic) char finished;                 //@synthesize finished=_finished - In the implementation block
@property (assign,getter=isWaiting,nonatomic) char waiting;                   //@synthesize waiting=_waiting - In the implementation block
@property (nonatomic,readonly) char isAudiobook; 
@property (nonatomic,retain) BKDownloadInfoCache * parent;                    //@synthesize parent=_parent - In the implementation block
@property (nonatomic,copy,readonly) NSArray * children; 
@property (nonatomic,copy) NSMutableArray * mutableChildren;                  //@synthesize mutableChildren=_mutableChildren - In the implementation block
+(id)removalIdentifierForSSDownload:(id)arg1 ;
+(char)hasBookIdentification:(id)arg1 ;
+(id)collectionIdentifierForSSDownload:(id)arg1 ;
+(id)libraryIdentifierForSSDownload:(id)arg1 ;
+(id)itemIdentifierForSSDownload:(id)arg1 ;
+(id)thumbUrlForSSDownload:(id)arg1 ;
-(char)isAudiobook;
-(NSURL *)thumbnailUrl;
-(id)initCollectionWithSSDownload:(id)arg1 ;
-(NSString *)removalIdentifier;
-(void)setWaiting:(char)arg1 ;
-(NSString *)sortAuthor;
-(void)setItemCache:(NSDictionary *)arg1 ;
-(NSDictionary *)itemCache;
-(id)filterNSNull:(id)arg1 ;
-(void)_childProgressDidUpdate;
-(void)setBytesTotal:(long long)arg1 ;
-(NSString *)genre;
-(long long)bytesTotal;
-(NSString *)libraryItemIdentifier;
-(char)isPaused;
-(id)description;
-(NSString *)title;
-(void)setProgress:(float)arg1 ;
-(void)setPaused:(char)arg1 ;
-(float)progress;
-(NSString *)kind;
-(char)isFinished;
-(void)setFinished:(char)arg1 ;
-(NSNumber *)sample;
-(NSMutableArray *)mutableChildren;
-(void)setMutableChildren:(NSMutableArray *)arg1 ;
-(void)addChild:(id)arg1 ;
-(BKDownloadInfoCache *)parent;
-(NSArray *)children;
-(void)setParent:(BKDownloadInfoCache *)arg1 ;
-(NSString *)author;
-(char)isWaiting;
-(NSNumber *)collectionIdentifier;
-(NSString *)sortTitle;
-(void)removeFromParent;
-(NSNumber *)itemIdentifier;
-(id)initWithSSDownload:(id)arg1 ;
@end

