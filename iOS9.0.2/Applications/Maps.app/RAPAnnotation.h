/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class MKMapItem, NSString;

@interface RAPAnnotation : NSObject <MKAnnotation> {

	MKMapItem* _item;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_RA7 coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
-(SCD_Struct_RA7)coordinate;
-(id)init;
-(NSString *)title;
-(id)initWithMapItem:(id)arg1 ;
@end

