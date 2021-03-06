//
//  ProjectDetailObservationsViewController.h
//  iNaturalist
//
//  Created by Alex Shepard on 2/23/16.
//  Copyright © 2016 iNaturalist. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ProjectDetailV2ViewController.h"

@interface ProjectDetailObservationsViewController : UICollectionViewController

@property (assign) NSInteger totalCount;
@property NSArray *observations;
@property BOOL hasFetchedObservations;

@property (assign) id <ProjectDetailV2Delegate> projectDetailDelegate;

- (void)reloadDataViews;

@end
