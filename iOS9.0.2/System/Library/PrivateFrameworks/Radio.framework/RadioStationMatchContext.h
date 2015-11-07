/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class RadioStationMatchMetadata;

@interface RadioStationMatchContext : NSObject {

	char _shouldMatchArtist;
	RadioStationMatchMetadata* _matchMetadata;

}

@property (nonatomic,retain) RadioStationMatchMetadata * matchMetadata;              //@synthesize matchMetadata=_matchMetadata - In the implementation block
@property (assign,nonatomic) char shouldMatchArtist;                                 //@synthesize shouldMatchArtist=_shouldMatchArtist - In the implementation block
-(void)setMatchMetadata:(RadioStationMatchMetadata *)arg1 ;
-(void)setShouldMatchArtist:(char)arg1 ;
-(id)copyMatchDictionary;
-(char)shouldMatchArtist;
-(RadioStationMatchMetadata *)matchMetadata;
@end

