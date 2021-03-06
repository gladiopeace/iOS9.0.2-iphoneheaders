/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/XBSnapshotDataProvider.h>

@class UIImage, SBSnapshotDataProviderContext, NSString, XBSnapshotDataProviderContext;

@interface SBUIImageDataProvider : NSObject <XBSnapshotDataProvider> {

	UIImage* _image;
	SBSnapshotDataProviderContext* _context;
	float _scaleFactor;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) XBSnapshotDataProviderContext * context;              //@synthesize context=_context - In the implementation block
-(id)initWithImage:(id)arg1 context:(id)arg2 scaleFactor:(float)arg3 ;
-(void)dealloc;
-(XBSnapshotDataProviderContext *)context;
-(id)fetchImageData:(out CGAffineTransform*)arg1 ;
@end

