//
//  ANTorrentCell.h
//  iRTorrent
//
//  Created by Alex Nichol on 10/28/12.
//  Copyright (c) 2012 Alex Nichol. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ANTorrentCellView.h"

@interface ANTorrentCell : UITableViewCell {
    ANTorrentCellView * cellView;
}

@property (readonly) ANTorrentCellView * cellView;

@end
