//
//  OCKEvaluationViewController.h
//  CareKit
//
//  Created by Umer Khan on 2/2/16.
//  Copyright © 2016 carekit.org. All rights reserved.
//


#import <UIKit/UIKit.h>


NS_ASSUME_NONNULL_BEGIN

@class OCKCarePlanStore, OCKCarePlanEvent;

@protocol OCKEvaluationTableViewDelegate <NSObject>

- (void)tableViewDidSelectRowWithEvaluationEvent:(OCKCarePlanEvent *)evaluationEvent;

@end


@interface OCKEvaluationViewController : UINavigationController

+ (instancetype)evaluationViewControllerWithCarePlanStore:(OCKCarePlanStore *)store
                                                 delegate:(id<OCKEvaluationTableViewDelegate>)delegate;

- (instancetype)initWithCarePlanStore:(OCKCarePlanStore *)store
                             delegate:(id<OCKEvaluationTableViewDelegate>)delegate;

@property (nonatomic, readonly) OCKCarePlanStore *store;
@property (nonatomic, readonly) OCKCarePlanEvent *lastSelectedEvaluationEvent;

@end

NS_ASSUME_NONNULL_END