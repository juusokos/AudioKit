//
//  AKClarinetAudioUnit.h
//  AudioKit
//
//  Created by Aurelius Prochazka, revision history on Github.
//  Copyright (c) 2016 Aurelius Prochazka. All rights reserved.
//

#ifndef AKClarinetAudioUnit_h
#define AKClarinetAudioUnit_h

#import <AudioToolbox/AudioToolbox.h>
#import "AKAudioUnitType.h"

@interface AKClarinetAudioUnit : AUAudioUnit<AKAudioUnitType>
@property (nonatomic) float frequency;
@property (nonatomic) float amplitude;

- (void)triggerFrequency:(float)frequency amplitude:(float)amplitude;

@property double rampTime;

@end

#endif /* AKClarinetAudioUnit_h */
