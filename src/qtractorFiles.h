// qtractorFiles.h
//
/****************************************************************************
   Copyright (C) 2005, rncbc aka Rui Nuno Capela. All rights reserved.

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public License
   as published by the Free Software Foundation; either version 2
   of the License, or (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.

*****************************************************************************/

#ifndef __qtractorFiles_h
#define __qtractorFiles_h

#include "qtractorAudioListView.h"
#include "qtractorMidiListView.h"

#include <qdockwindow.h>


// Forward declarations.
class QTabWidget;


//-------------------------------------------------------------------------
// qtractorFiles - File/Groups dockable window.
//

class qtractorFiles : public QDockWindow
{
	Q_OBJECT

public:

	// Constructor.
	qtractorFiles(QWidget *pParent, const char *pszName = 0);
	// Destructor.
	~qtractorFiles();

	// The fixed tab page indexes.
	enum PageIndex { Audio = 0, Midi = 1 };

	// File list view accessors.
	qtractorAudioListView *audioListView() const;
	qtractorMidiListView  *midiListView()  const;

	// Clear evrything on sight.
	void clear();

	// Convenience helper methods.
	void addAudioFile (const QString& sFilename);
	void addMidiFile  (const QString& sFilename);

private:

	// File type selection tab widget.
	QTabWidget *m_pTabWidget;
	// Specific file type widgets.
	qtractorAudioListView *m_pAudioListView;
	qtractorMidiListView  *m_pMidiListView;
};


#endif  // __qtractorFiles_h


// end of qtractorFiles.h
