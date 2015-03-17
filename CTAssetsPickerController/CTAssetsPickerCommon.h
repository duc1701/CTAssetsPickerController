/*
 CTAssetsPickerCommon.h
 
 The MIT License (MIT)
 
 Copyright (c) 2013 Clement CN Tsang
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 
 */

#define CTScreenSize [[UIScreen mainScreen] bounds].size
#define CTScreenHeight MAX(CTScreenSize.width, CTScreenSize.height)
#define CTIPhone4 (CTScreenHeight == 480)
#define CTIPhone6 (CTScreenHeight == 667)
#define CTIPhone6Plus (CTScreenHeight == 736)
#define CTIPad (CTScreenHeight == 1024)

#define CTAssetThumbnailLength (CTIPad) ? 103.0 : (CTIPhone6Plus) ? 102.75f : ( (CTIPhone6) ? 93.0f : (CTIPhone4) ? 78.0 : 79.25f )
#define CTAssetThumbnailSize CGSizeMake(CTAssetThumbnailLength, CTAssetThumbnailLength)
#define CTAssetPickerPopoverContentSize CGSizeMake(415, 600)