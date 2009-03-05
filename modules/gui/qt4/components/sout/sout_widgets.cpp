/*****************************************************************************
 * profile_selector.cpp : A small profile selector and editor
 ****************************************************************************
 * Copyright (C) 2009 the VideoLAN team
 * $Id$
 *
 * Authors: Jean-Baptiste Kempf <jb@videolan.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
 *****************************************************************************/

#include "components/sout/sout_widgets.hpp"

#include <QGroupBox>
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>

SoutInputBox::SoutInputBox( QWidget *_parent ) : QWidget( _parent )
{
    /**
     * Source Block
     **/
    QGroupBox *sourceBox = new QGroupBox( qtr( "Source" ) );
    QGridLayout *sourceLayout = new QGridLayout( sourceBox );

    QLabel *sourceLabel = new QLabel( qtr( "Source:" ) );
    sourceLayout->addWidget( sourceLabel, 0, 0 );

    QLineEdit *sourceLine = new QLineEdit;
    sourceLine->setReadOnly( true );
    sourceLabel->setBuddy( sourceLine );
    sourceLayout->addWidget( sourceLine, 0, 1 );

    QLabel *sourceTypeLabel = new QLabel( qtr( "Type:" ) );
    sourceLayout->addWidget( sourceTypeLabel, 1, 0 );
    QLabel *sourceValueLabel = new QLabel;
    sourceLayout->addWidget( sourceValueLabel, 1, 1 );

    /* Line */
    QFrame *line = new QFrame;
    line->setFrameStyle( QFrame::HLine |QFrame::Sunken );
    sourceLayout->addWidget( line, 2, 0, 1, -1 );
}

