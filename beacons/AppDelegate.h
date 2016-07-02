//
//  AppDelegate.h
//  beacons
//
//  Created by Ivan F Garcia S on 7/2/16.
//  Copyright © 2016 Ivan F Garcia S. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AprilBeaconSDK.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>


@property (strong, nonatomic) UIWindow *window;
@property (nonatomic, strong) ABBeaconManager *beaconManger;


@end

