///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//  This file is part of DotA2Soundboard.                                    //
//                                                                           //
//  DotA2Soundboard is free software: you can redistribute it and/or modify  //
//  it under the terms of the GNU General Public License as published by     //
//  the Free Software Foundation, either version 3 of the License, or        //
//  any later version.                                                       //
//                                                                           //
//  DotA2Soundboard is distributed in the hope that it will be useful,       //
//  but WITHOUT ANY WARRANTY; without even the implied warranty of           //
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the            //
//  GNU General Public License for more details.                             //
//                                                                           //
//  You should have received a copy of the GNU General Public License        //
//  along with DotA2Soundboard.  If not, see <http://www.gnu.org/licenses/>. //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////

#import <UIKit/UIKit.h>

#import "D2SBMasterViewController.h"

@interface D2SBAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) IBOutlet D2SBMasterViewController *masterViewController;

@end
