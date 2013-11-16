//
//  ViewController.h
//  MyLocationMap
//
//  Created by Alain Malenfant on 11/14/2013.
//  Copyright (c) 2013 Alain Malenfant. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@interface ViewController : UIViewController <MKMapViewDelegate>
@property (strong, nonatomic) IBOutlet MKMapView *mapView;

@end
