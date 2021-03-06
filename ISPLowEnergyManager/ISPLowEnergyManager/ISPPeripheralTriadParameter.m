//
//  ISPPeripheralTriadParameter.m
//  ISPLowEnergyManager
//
//  Created by Stephen M Moraco on 03/16/13.
//  Copyright (c) 2013 Iron Sheep Productions, LLC. All rights reserved.
//

#import "ISPPeripheralTriadParameter.h"

@interface ISPPeripheralTriadParameter () {

}

@property (strong, nonatomic) CBPeripheral *peripheral;
@property (strong, nonatomic) id parameter;
@property (strong, nonatomic) NSError *error;

@end


@implementation ISPPeripheralTriadParameter

-(id)initWithPeripheral:(CBPeripheral *)peripheral parameter:(id)parameter error:(NSError *)error
{
    self = [super init];
    if(self)
    {
        self.peripheral = peripheral;
        self.parameter = parameter;
        self.error = error;
    }
    return self;
}

-(CBService *)service
{
    return self.parameter;
}

-(CBCharacteristic *)characteristic
{
    return self.parameter;
}

-(CBDescriptor *)descriptor
{
    return self.parameter;
}

- (NSString *)description
{
    NSString *strDescription = [NSString stringWithFormat:@"<%@ 0x%.8x> [periph=(%@), param=(%@), error=(%ld)[%@]]",
                                NSStringFromClass([self class]),
                                (unsigned int)self,
                                self.peripheral,
                                self.parameter,
                                (long)self.error.code,
                                self.error.localizedDescription];
    return strDescription;
}

@end
