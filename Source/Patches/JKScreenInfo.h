//
//  JKScreenInfo.h
//  QCDemos
//
//  Created by Joris Kluivers on 6/1/13.
//  Copyright (c) 2013 Joris Kluivers. All rights reserved.
//

#import "JKPatch.h"

@interface JKScreenInfo : JKPatch

@property(nonatomic, readonly) NSNumber *outputHeight;
@property(nonatomic, readonly) NSNumber *outputWidth;
@property(nonatomic, readonly) NSNumber *outputPixelsWide;
@property(nonatomic, readonly) NSNumber *outputPixelsHigh;
@property(nonatomic, readonly) NSNumber *outputRatio;
@property(nonatomic, readonly) NSNumber *outputResolution;

@end
