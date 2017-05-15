/*********************************************************************************

    FFmpegGUI: filter graph editor based on Qt and FFmpeg
    Copyright (C) 2017 Roman Sichkaruk <romansichkaruk@gmail.com>

    This file is part of FFmpegGUI

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA

***********************************************************************************/

#ifndef FILTERSLIST_H
#define FILTERSLIST_H

#include "ui_filtersList.h"
#include <filter.h>
#include <QHash>
#include <QObject>
#include <QEvent>
#include <QFileDialog>
#include "filterButton.h"
extern "C"{
#define __STDC_FORMAT_MACROS
#include "libavcodec/avcodec.h"
#include "libavformat/avformat.h"
#include "libavfilter/avfiltergraph.h"
#include "libavfilter/buffersink.h"
#include "libavfilter/buffersrc.h"
#include "libavutil/opt.h"
#include "libavutil/pixdesc.h"
#include "libavutil/timestamp.h"
    
#include "libavutil/channel_layout.h"
#include "libavutil/common.h"
#include "libavutil/imgutils.h"
#include "libavutil/mathematics.h"
#include "libavutil/samplefmt.h"
    
#include "libswscale/swscale.h"
    
}
class FiltersList : public QDockWidget {
    Q_OBJECT
public:
    FiltersList();
    FiltersList(const FiltersList& orig);
    virtual ~FiltersList();
public slots:
    void changedEdit(QString text);
    void changedLocation(Qt::DockWidgetArea area);
    void toHorizontalChange();
    void toVerticalChange();
private:
    bool vert;
    Ui::DockWidgetL ui;
};

#endif /* FILTERSWIDGET_H */
