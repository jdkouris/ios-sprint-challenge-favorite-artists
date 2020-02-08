//
//  JDKArtistController.h
//  FavoriteArtist
//
//  Created by John Kouris on 2/8/20.
//  Copyright © 2020 John Kouris. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JDKArtist.h"

NS_ASSUME_NONNULL_BEGIN

typedef (^JDKArtistSearchCompleted)(JDKArtist *, NSError *);

@interface JDKArtistController : NSObject

- (void)searchForArtist:(NSString *)name completed:(JDKArtistSearchCompleted)completed;
- (void)saveArtist:(JDKArtist *)artist;
- (JDKArtist *)fetchSavedArtist:(JDKArtist *)artist;
- (NSMutableArray *)fetchAllSavedArtists;

@end

NS_ASSUME_NONNULL_END
