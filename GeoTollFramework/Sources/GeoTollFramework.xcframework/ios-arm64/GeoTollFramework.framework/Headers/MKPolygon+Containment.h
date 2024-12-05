//
//  MKPolygon+Containment.h
//  Pods
//
//  Created by Robin Goos on 28/04/15.
//
//

#import <MapKit/MapKit.h>

@interface MKPolygon (Containment)

- (BOOL)containsPoint:(MKMapPoint)point;
- (BOOL)containsCoordinate:(CLLocationCoordinate2D)coordinate;

@end
