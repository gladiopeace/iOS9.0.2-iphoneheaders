/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MTSSDownloadManagerDelegate <NSObject>
@optional
-(void)downloadManager:(id)arg1 updateDownloadCount:(id)arg2;

@required
-(void)downloadManager:(id)arg1 willRemoveDownload:(id)arg2;
-(void)downloadManager:(id)arg1 didRemoveDownloads:(id)arg2;
-(void)downloadManager:(id)arg1 didUpdateDownload:(id)arg2;
-(void)downloadManager:(id)arg1 didAddDownload:(id)arg2;

@end

