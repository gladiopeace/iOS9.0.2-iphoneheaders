/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct _CFURLAuthChallenge* CFURLAuthChallengeRef;

typedef struct _CFHSTSPolicy* CFHSTSPolicyRef;

typedef struct _CFURLRequest* CFURLRequestRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct __CFString* CFStringRef;

typedef struct _NSZone* NSZoneRef;

typedef struct _CFURLResponse* CFURLResponseRef;

typedef struct __SecTrust* SecTrustRef;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct __SecIdentity* SecIdentityRef;

typedef struct _CFURLCredential* CFURLCredentialRef;

typedef struct CFURLProtocolClient {
	int version;
	void client;
	/*function pointer*/void* retain;
	/*function pointer*/void* release;
	/*function pointer*/void* copyDescription;
	/*function pointer*/void* wasRedirected;
	/*function pointer*/void* cacheResponseIsValid;
	/*function pointer*/void* didReceiveResponse;
	/*function pointer*/void* didLoadData;
	/*function pointer*/void* didFinishLoading;
	/*function pointer*/void* didFail;
	/*function pointer*/void* didReceiveAuthenticationChallenge;
} CFURLProtocolClient;

typedef struct _CFURLProtectionSpace* CFURLProtectionSpaceRef;

typedef struct _CFURLProtocol* CFURLProtocolRef;

typedef struct weak_ptr<__CFURLCache> {
	__CFURLCache __ptr_;
	__shared_weak_count __cntrl_;
} weak_ptr<__CFURLCache>;

typedef struct OpaqueCFHTTPCookie* OpaqueCFHTTPCookieRef;

typedef struct __CFArray* CFArrayRef;

typedef struct timespec {
	int tv_sec;
	long tv_nsec;
} timespec;

typedef struct stat {
	int st_dev;
	unsigned short st_mode;
	unsigned short st_nlink;
	unsigned long long st_ino;
	unsigned st_uid;
	unsigned st_gid;
	int st_rdev;
	timespec st_atimespec;
	timespec st_mtimespec;
	timespec st_ctimespec;
	timespec st_birthtimespec;
	long long st_size;
	long long st_blocks;
	int st_blksize;
	unsigned st_flags;
	unsigned st_gen;
	int st_lspare;
	long long st_qspare[2];
} stat;

typedef struct __CFNetService* CFNetServiceRef;

typedef struct {
	int field1;
	int field2;
} SCD_Struct_NS20;

typedef struct __CFNetServiceBrowser* CFNetServiceBrowserRef;

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_NS22;

typedef struct {
	SCD_Struct_NS22 field1;
	SCD_Struct_NS22 field2;
} SCD_Struct_NS23;

typedef struct __CFURLStorageSession* CFURLStorageSessionRef;

typedef struct _CFURLCredentialStorage* CFURLCredentialStorageRef;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct OpaqueCFHTTPCookieStorage* OpaqueCFHTTPCookieStorageRef;

typedef struct __CFReadStream* CFReadStreamRef;

typedef struct __CFWriteStream* CFWriteStreamRef;

typedef struct {
	int domain;
	int error;
} SCD_Struct_NS30;

typedef struct _CFURLConnection* CFURLConnectionRef;

typedef struct _CFURLDownload* CFURLDownloadRef;

typedef struct __CFURL* CFURLRef;

typedef struct __CFError* CFErrorRef;

typedef struct z_stream_s {
	char* next_in;
	unsigned avail_in;
	unsigned total_in;
	char* next_out;
	unsigned avail_out;
	unsigned total_out;
	char* msg;
	internal_state state;
	/*function pointer*/void* zalloc;
	/*function pointer*/void* zfree;
	void opaque;
	int data_type;
	unsigned adler;
	unsigned reserved;
} z_stream_s;

typedef struct __PerformanceTiming* PerformanceTimingRef;

typedef struct _CFURLCache* CFURLCacheRef;

typedef struct __CFSet* CFSetRef;

