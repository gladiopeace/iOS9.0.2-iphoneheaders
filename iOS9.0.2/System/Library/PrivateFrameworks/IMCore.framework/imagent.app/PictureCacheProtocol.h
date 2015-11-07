/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/imagent.app/imagent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PictureCacheProtocol
@required
-(void)syncMapFile;
-(id)pictureCachePath;
-(id)picturePathForKey:(id)arg1;
-(void)addKey:(id)arg1 toName:(id)arg2 inService:(id)arg3;
-(id)keyForName:(id)arg1 inService:(id)arg2;
-(void)markName:(id)arg1 asDirty:(char)arg2;
-(id)hashForCustomKey:(id)arg1;
-(id)pictureForKey:(id)arg1;
-(char)hasPictureForKey:(id)arg1;
-(id)addPicture:(id)arg1 toName:(id)arg2 inService:(id)arg3;
-(void)removeName:(id)arg1 inService:(id)arg2;
-(void)addCustomKey:(id)arg1 forHash:(id)arg2;
-(id)pictureForCustomKey:(id)arg1;
-(char)nameIsDirty:(id)arg1;
-(void)flushCache;
-(void)writePictureCache;
-(void)pruneCache;

@end

