/*
 * Copyright (C) 2016 Apple Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#pragma once


#include "GraphicsLayer.h"
#include <wtf/HashMap.h>
#include <wtf/RetainPtr.h>
#include <wtf/text/StringHash.h>

namespace WebCore {

namespace DisplayList {
class DisplayList;
}

class FloatRoundedRect;
class Image;
class TransformState;

class GraphicsLayerDirect2D : public GraphicsLayer {
public:

    WEBCORE_EXPORT explicit GraphicsLayerDirect2D(Type, GraphicsLayerClient&);
    WEBCORE_EXPORT virtual ~GraphicsLayerDirect2D();

private:
    WEBCORE_EXPORT void initialize(Type) override;

    WEBCORE_EXPORT void setNeedsDisplay() override;
    WEBCORE_EXPORT void setNeedsDisplayInRect(const FloatRect&, ShouldClipToLayer = ClipToLayer) override;

    bool isGraphicsLayerCA() const override { return false; }
};

} // namespace WebCore

SPECIALIZE_TYPE_TRAITS_GRAPHICSLAYER(WebCore::GraphicsLayerDirect2D, isGraphicsLayerCA())
