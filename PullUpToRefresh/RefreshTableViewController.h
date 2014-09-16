//
//  RefreshTableViewController.h
//  PullUpToRefresh
//
//  Created by Qa Infotech on 16/09/14.
//  Copyright (c) 2014 QA. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MNMBottomPullToRefreshManager.h"

@interface RefreshTableViewController : UITableViewController<MNMBottomPullToRefreshManagerClient>
{
    /**
     * Pull to refresh manager
     */
    MNMBottomPullToRefreshManager *pullToRefreshManager_;
    
    /**
     * Reloads (for testing purposes)
     */
    NSUInteger reloads_;

}
@end
