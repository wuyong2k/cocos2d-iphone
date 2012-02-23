#import "cocos2d.h"

#import "BaseAppController.h"

@interface AppController : BaseAppController
@end

@interface AtlasDemo: CCLayer
{
}
-(NSString*) title;
-(NSString*) subtitle;
@end

@interface Atlas1 : AtlasDemo
{
	CCTextureAtlas *textureAtlas;
}
@end

@interface LabelAtlasTest : AtlasDemo
{
	ccTime		time;
}
@end

@interface LabelAtlasColorTest : AtlasDemo
{
	ccTime		time;
}
@end


@interface Atlas3 : AtlasDemo
{
	ccTime		time;
}
@end

@interface Atlas4 : AtlasDemo
{
	ccTime		time;
}
@end

@interface Atlas5 : AtlasDemo
{}
@end

@interface Atlas6 : AtlasDemo
{}
@end

@interface AtlasBitmapColor : AtlasDemo
{}
@end


@interface AtlasFastBitmap : AtlasDemo
{}
@end

@interface BitmapFontMultiLine : AtlasDemo
{}
@end

@interface BitmapFontMultiLineAlignment : AtlasDemo
{
    CCLabelBMFont *label_;
    CCSprite *arrowsBar_;
    CCSprite *arrows_;
    CCMenuItemFont *lastSentenceItem_, *lastAlignmentItem_;

    BOOL drag_;
}
@property (nonatomic,retain) CCLabelBMFont *label;
@property (nonatomic,retain) CCSprite *arrowsBar;
@property (nonatomic,retain) CCSprite *arrows;
- (void)snapArrowsToEdge;
@end


@interface LabelsEmpty : AtlasDemo
{
	BOOL setEmpty;
}
@end

@interface LabelBMFontHD : AtlasDemo
{
}
@end

@interface LabelAtlasHD : AtlasDemo
{
}
@end

@interface LabelGlyphDesigner : AtlasDemo
{
}
@end

@interface LabelTTFTest : AtlasDemo
{
}
@end

@interface LabelTTFMultiline : AtlasDemo
{
}
@end


@interface LabelTTFA8Test : AtlasDemo
{
}
@end

@interface LabelTTFLineBreak : AtlasDemo
{
}
@end

@interface BMFontOneAtlas : AtlasDemo
{
}
@end
