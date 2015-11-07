/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/MTLLibrary.h>

@protocol MTLDevice;
@class NSString, NSArray, NSMutableDictionary;

@interface _MTLLibrary : NSObject <MTLLibrary> {

	NSString* _label;
	id<MTLDevice> _device;
	NSArray* _functionNames;
	MTLLibraryData* _libraryData;
	NSMutableDictionary* _functionDictionary;

}

@property (copy) NSString * label;                                                           //@synthesize label=_label - In the implementation block
@property (readonly) id<MTLDevice> device;                                                   //@synthesize device=_device - In the implementation block
@property (retain,readonly) NSArray * functionNames;                                         //@synthesize functionNames=_functionNames - In the implementation block
@property (readonly) MTLLibraryData* libraryData;                                            //@synthesize libraryData=_libraryData - In the implementation block
@property (nonatomic,retain,readonly) NSMutableDictionary * functionDictionary;              //@synthesize functionDictionary=_functionDictionary - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)functionNames;
-(id)initWithFile:(id)arg1 device:(id)arg2 error:(id*)arg3 ;
-(id)initWithDefaultBundle:(id)arg1 ;
-(id)initWithData:(id)arg1 device:(id)arg2 error:(id*)arg3 ;
-(id)initWithSource:(id)arg1 options:(id)arg2 device:(id)arg3 error:(id*)arg4 ;
-(id)initWithSource:(id)arg1 options:(id)arg2 device:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithCIFilters:(id)arg1 imageFilterFunctionInfo:(const SCD_Struct_MT7*)arg2 device:(id)arg3 error:(id*)arg4 ;
-(MTLLibraryData*)libraryData;
-(id)initWithRequestData:(void*)arg1 requestSize:(unsigned long)arg2 requestType:(int)arg3 device:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)initWithSharedLibrary:(id)arg1 device:(id)arg2 ;
-(NSMutableDictionary *)functionDictionary;
-(id)newFunctionWithName:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id<MTLDevice>)device;
@end

