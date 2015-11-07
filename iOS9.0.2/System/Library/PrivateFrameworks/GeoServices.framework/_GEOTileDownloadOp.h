/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSURLConnectionDelegate.h>

@class NSURL, NSMutableData, NSString, NSData, NSURLConnection, GEOSimpleTileRequester;

@interface _GEOTileDownloadOp : NSObject <NSURLConnectionDelegate> {

	NSURL* _url;
	char _requireWiFi;
	NSMutableData* _data;
	NSString* _cachedEtag;
	NSData* _cachedData;
	NSURLConnection* _conn;
	NSString* _responseEtag;
	unsigned _priority;
	GEOTileKey _key;
	char _finished;
	NSString* _editionHeader;
	unsigned _tileEdition;
	NSString* _userAgent;
	NSData* _auditToken;
	char _useCookies;
	_GEOTileDownloadOp* _baseTile;
	_GEOTileDownloadOp* _localizationTile;
	unsigned _contentLength;
	GEOSimpleTileRequester* _delegate;
	char _gotData;
	int _attempts;
	double _startTime;
	double _timeout;
	int _eTagType;

}

@property (assign,nonatomic) int eTagType;                                       //@synthesize eTagType=_eTagType - In the implementation block
@property (nonatomic,retain) NSURL * url;                                        //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSString * cachedEtag;                              //@synthesize cachedEtag=_cachedEtag - In the implementation block
@property (nonatomic,retain) NSData * cachedData;                                //@synthesize cachedData=_cachedData - In the implementation block
@property (assign,nonatomic) unsigned priority;                                  //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) char requireWiFi;                                   //@synthesize requireWiFi=_requireWiFi - In the implementation block
@property (nonatomic,retain) NSMutableData * data;                               //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSString * responseEtag;                            //@synthesize responseEtag=_responseEtag - In the implementation block
@property (nonatomic,retain) NSURLConnection * conn;                             //@synthesize conn=_conn - In the implementation block
@property (nonatomic,retain) NSString * editionHeader;                           //@synthesize editionHeader=_editionHeader - In the implementation block
@property (nonatomic,retain) NSString * userAgent;                               //@synthesize userAgent=_userAgent - In the implementation block
@property (nonatomic,retain) NSData * auditToken;                                //@synthesize auditToken=_auditToken - In the implementation block
@property (assign,nonatomic) char useCookies;                                    //@synthesize useCookies=_useCookies - In the implementation block
@property (nonatomic,retain) _GEOTileDownloadOp * baseTile;                      //@synthesize baseTile=_baseTile - In the implementation block
@property (nonatomic,retain) _GEOTileDownloadOp * localizationTile;              //@synthesize localizationTile=_localizationTile - In the implementation block
@property (assign) GEOTileKey key;                                               //@synthesize key=_key - In the implementation block
@property (assign) unsigned tileEdition;                                         //@synthesize tileEdition=_tileEdition - In the implementation block
@property (nonatomic,readonly) unsigned contentLength;                           //@synthesize contentLength=_contentLength - In the implementation block
@property (nonatomic,readonly) char finished;                                    //@synthesize finished=_finished - In the implementation block
@property (assign,nonatomic) double timeout;                                     //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) GEOSimpleTileRequester * delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double startTime;                                 //@synthesize startTime=_startTime - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)timeout;
-(char)finished;
-(void)cancel;
-(void)setDelegate:(GEOSimpleTileRequester *)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(GEOSimpleTileRequester *)delegate;
-(GEOTileKey)key;
-(NSURL *)url;
-(NSMutableData *)data;
-(void)setData:(NSMutableData *)arg1 ;
-(unsigned)priority;
-(void)setPriority:(unsigned)arg1 ;
-(void)start;
-(void)setUrl:(NSURL *)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)setKey:(GEOTileKey)arg1 ;
-(double)startTime;
-(NSData *)auditToken;
-(_GEOTileDownloadOp *)baseTile;
-(char)requireWiFi;
-(NSString *)editionHeader;
-(void)setCachedEtag:(NSString *)arg1 ;
-(NSString *)userAgent;
-(void)setCachedData:(NSData *)arg1 ;
-(_GEOTileDownloadOp *)localizationTile;
-(NSString *)cachedEtag;
-(void)setAuditToken:(NSData *)arg1 ;
-(void)setUseCookies:(char)arg1 ;
-(void)setRequireWiFi:(char)arg1 ;
-(int)eTagType;
-(void)setResponseEtag:(NSString *)arg1 ;
-(void)setUserAgent:(NSString *)arg1 ;
-(unsigned)contentLength;
-(void)setTimeout:(double)arg1 ;
-(void)setLocalizationTile:(_GEOTileDownloadOp *)arg1 ;
-(NSString *)responseEtag;
-(double)elapsed;
-(char)useCookies;
-(void)setTileEdition:(unsigned)arg1 ;
-(void)setConn:(NSURLConnection *)arg1 ;
-(void)setEditionHeader:(NSString *)arg1 ;
-(unsigned)tileEdition;
-(NSData *)cachedData;
-(NSURLConnection *)conn;
-(void)setBaseTile:(_GEOTileDownloadOp *)arg1 ;
-(void)setETagType:(int)arg1 ;
@end

