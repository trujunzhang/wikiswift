//
//  WMFBlockDefinitions.h
//  Wikipedia
//
//  Created by Corey Floyd on 7/9/15.
//  Copyright (c) 2015 Wikimedia Foundation. All rights reserved.
//

#ifndef Wikipedia_WMFBlockDefinitions_h
#define Wikipedia_WMFBlockDefinitions_h

@class MWKArticle;

typedef void (^ WMFArticleHandler)(MWKArticle* article);
// TODO: djzhang
typedef void (^ WMFProgressHandler)(int progress);
typedef void (^ WMFErrorHandler)(NSError* error);

#endif
