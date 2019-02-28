//
//  PopoverView_Configuration.h
//  popover
//
//  Created by Bas Pellis on 12/25/12.
//  Copyright (c) 2012 Oliver Rickard. All rights reserved.
//

#pragma mark Constants - Configure look/feel

// BOX GEOMETRY

//Height/width of the actual arrow
#define kArrowHeight 6.f

//padding within the box for the contentView
#define kBoxPadding 4.f

//control point offset for rounding corners of the main popover box
#define kCPOffset 1.8f

//radius for the rounded corners of the main popover box
#define kBoxRadius 3.f

//Curvature value for the arrow.  Set to 0.f to make it linear.
#define kArrowCurvature 3.f

//Minimum distance from the side of the arrow to the beginning of curvature for the box
#define kArrowHorizontalPadding 3.f

//Alpha value for the shadow behind the PopoverView
#define kShadowAlpha 0.2f

//Blur for the shadow behind the PopoverView
#define kShadowBlur 3.f;

//Box gradient bg alpha
#define kBoxAlpha 0.95f

//Padding along top of screen to allow for any nav/status bars
#define kTopMargin 50.f

//margin along the left and right of the box
#define kHorizontalMargin 2.f

//padding along top of icons/images
#define kImageTopPadding 3.f

//padding along bottom of icons/images
#define kImageBottomPadding 3.f

//padding along bottom of icons/images
#define kLeftPadding 8.f

//padding along bottom of icons/images
#define kRightPadding 8.f

#define kSpacingHorizontal 4.f
#define kSpacingVertical 13.f

// DIVIDERS BETWEEN VIEWS

//Bool that turns off/on the dividers
#define kShowDividersBetweenViews NO

//color for the divider fill
#define kDividerColor [UIColor colorWithRed:156/255.0f green:203/255.0f blue:255/255.0f alpha:1]


// BACKGROUND GRADIENT

//bottom color white in gradient bg
#define kGradientBottomColor [UIColor whiteColor]

//top color white value in gradient bg
#define kGradientTopColor [UIColor whiteColor]


// TITLE GRADIENT

//bool that turns off/on title gradient
#define kDrawTitleGradient NO

//bottom color white value in title gradient bg
#define kGradientTitleBottomColor [UIColor colorWithRed:0.93f green:0.93f blue:0.93f alpha:kBoxAlpha]

//top color white value in title gradient bg
#define kGradientTitleTopColor [UIColor colorWithRed:1.f green:1.f blue:1.f alpha:kBoxAlpha]


// FONTS

//normal text font
#define kTextFont [UIFont fontWithName:@"HelveticaNeue" size:13.f]

//normal text color
#define kTextColor [UIColor colorWithHexString:@"#666666"]
// highlighted text color
#define kTextHighlightColor [UIColor colorWithRed:0.098 green:0.102 blue:0.106 alpha:1.000]

//normal text alignment
#define kTextAlignment UIControlContentHorizontalAlignmentLeft

//title font
#define kTitleFont [UIFont fontWithName:@"HelveticaNeue-Bold" size:16.f]

//title text color
#define kTitleColor [UIColor colorWithRed:0.329 green:0.341 blue:0.353 alpha:1]


// BORDER

//bool that turns off/on the border
#define kDrawBorder NO

//border color
#define kBorderColor [UIColor blackColor]

//border width
#define kBorderWidth 1.f

