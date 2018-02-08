/*
 * Copyright (c) 2011, 2014, Oracle and/or its affiliates. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.  Oracle designates this
 * particular file as subject to the "Classpath" exception as provided
 * by Oracle in the LICENSE file that accompanied this code.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Please contact Oracle, 500 Oracle Parkway, Redwood Shores, CA 94065 USA
 * or visit www.oracle.com if you need additional information or have any
 * questions.
 */

package com.sun.webkit.plugin;

import java.io.IOError;
import java.net.URL;
import java.util.logging.Logger;

import com.sun.webkit.graphics.WCGraphicsContext;


final class DefaultPlugin implements Plugin {

    private final static Logger log =
        Logger.getLogger("com.sun.browser.plugin.DefaultPlugin");

    //private JLabel nullComp;

    private void init(final String pluginDetails) {
        //nullComp = new JLabel(pluginDetails);
        //nullComp.setHorizontalAlignment(JLabel.CENTER);
        //nullComp.setVisible(true);
    }

    DefaultPlugin(URL url, String type, String[] pNames, String[] pValues) {
        init("Default Plugin for: " + (null==url ? "(null)" : url.toExternalForm()));
    }

    @Override
    public void paint(WCGraphicsContext g, int intX, int intY, int intWidth, int intHeight)
    {
        //if(g instanceof  WCGraphics2DContext){
            //nullComp.paint( ((WCGraphics2DContext)g).getImageGraphics() );
        //}
        g.fillRect(x, y, w, h, 0x11aaffff);
    }

    public void activate(Object nativeContainer, PluginListener pl) {}

    public void destroy() {}

    public void setVisible(boolean isVisible) {}

    public void setEnabled(boolean enabled) {}

    private int x = 0;
    private int y = 0;
    private int w = 0;
    private int h = 0;
    public void setBounds(int x, int y, int width, int height) {
        this.x = x;
        this.y = y;
        this.w = width;
        this.h = height;
        //nullComp.setBounds(new Rectangle(x, y, width, height) ) ;
    }

    public Object invoke(String subObjectId, String methodName, Object[] args) throws IOError {
        return null;
    }

    public boolean handleMouseEvent(
            String type,
            int offsetX,
            int offsetY,
            int screenX,
            int screenY,
            int button,
            boolean buttonDown,
            boolean altKey,
            boolean metaKey,
            boolean ctrlKey,
            boolean shiftKey,
            long timeStamp)
    {
        return false;
    }

    public void requestFocus() {}

    public void setNativeContainerBounds(int x, int y, int width, int height) {}
}

