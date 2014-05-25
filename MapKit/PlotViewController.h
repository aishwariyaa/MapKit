//
//  PlotViewController.h
//  MapKit
//
//  Created by Lokesh Subramani on 5/24/14.
//  Copyright (c) 2014 CMPE277. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@interface PlotViewController : UIViewController
@property (weak, nonatomic) IBOutlet MKMapView *mapView;
@property (strong, nonatomic) NSString *addressString;
@end
