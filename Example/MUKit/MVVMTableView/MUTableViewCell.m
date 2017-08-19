//
//  MUTableViewCell.m
//  elmsc
//
//  Created by zeng ping on 2017/7/7.
//  Copyright © 2017年 Jekity. All rights reserved.
//

#import "MUTableViewCell.h"
#import "MUView.h"
#import "MUTempModel.h"

@interface MUTableViewCell()

@property (weak, nonatomic) IBOutlet UILabel *label;

@property (nonatomic ,strong)MUView *infoView;
@end
@implementation MUTableViewCell

- (void)awakeFromNib {
    [super awakeFromNib];
    // Initialization code
    self.label.userInteractionEnabled = YES;
//    _infoView = [[MUView alloc]initWithFrame:_redView.bounds];
//    [_redView addSubview:_infoView];
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

-(void)setModel:(MUTempModel *)model{
    _model = model;
    _label.text = model.name;
}

@end

