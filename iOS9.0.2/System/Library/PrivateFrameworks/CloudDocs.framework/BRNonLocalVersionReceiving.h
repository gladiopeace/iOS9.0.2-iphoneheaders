/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:11 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BRNonLocalVersionReceiving <NSObject>
@required
-(oneway void)newThumbnailForVersionWithEtag:(id)arg1;
-(oneway void)newCachedVersionAtURL:(id)arg1 size:(id)arg2 etag:(id)arg3 hasThumbnail:(char)arg4 displayName:(id)arg5 lastEditorDeviceName:(id)arg6 lastEditorFormattedName:(id)arg7 modificationDate:(id)arg8;
-(oneway void)newFaultVersionAtURL:(id)arg1 faultURL:(id)arg2 faultExtension:(id)arg3 etag:(id)arg4 hasThumbnail:(char)arg5 displayName:(id)arg6 lastEditorDeviceName:(id)arg7 lastEditorFormattedName:(id)arg8 modificationDate:(id)arg9;
-(oneway void)versionsDone;

@end

