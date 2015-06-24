//
//  ServerRPCPath.h
//  TransmissionRPCClient
//
//  Created by Alexey Chechetkin on 23.06.15.
//  Copyright (c) 2015 Alexey Chechetkin. All rights reserved.
//

#import <UIKit/UIKit.h>

#define CELL_ID_RPCPATH_CELL    @"rpcPathCell"

@interface ServerRPCPathCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *label;
@property (weak, nonatomic) IBOutlet UITextField *path;

@end