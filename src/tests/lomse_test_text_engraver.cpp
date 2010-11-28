//---------------------------------------------------------------------------------------
//  This file is part of the Lomse library.
//  Copyright (c) 2010 Lomse project
//
//  Lomse is free software; you can redistribute it and/or modify it under the
//  terms of the GNU General Public License as published by the Free Software Foundation,
//  either version 3 of the License, or (at your option) any later version.
//
//  Lomse is distributed in the hope that it will be useful, but WITHOUT ANY
//  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
//  PARTICULAR PURPOSE.  See the GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License along
//  with Lomse; if not, see <http://www.gnu.org/licenses/>.
//
//  For any comment, suggestion or feature request, please contact the manager of
//  the project at cecilios@users.sourceforge.net
//
//---------------------------------------------------------------------------------------

#include <UnitTest++.h>
#include <sstream>
#include "lomse_config.h"

//classes related to these tests
#include "lomse_injectors.h"
#include "lomse_internal_model.h"
#include "lomse_calligrapher.h"
#include "lomse_text_engraver.h"
#include "lomse_document.h"

using namespace UnitTest;
using namespace std;
using namespace lomse;


class TextEngraverTestFixture
{
public:
    LibraryScope m_libraryScope;

    TextEngraverTestFixture()     //SetUp fixture
        : m_libraryScope(cout)
    {
    }

    ~TextEngraverTestFixture()    //TearDown fixture
    {
    }

};

SUITE(TextEngraverTest)
{

    TEST_FIXTURE(TextEngraverTestFixture, TextEngraver_MeasureWidth)
    {
        ImoTextStyleInfo style;
        style.set_name("titles");
        style.set_font_name("Times New Roman");
        style.set_font_size(18.0f);
        ImoScoreText text("This is a test");
        text.set_style(&style);
        ImoScore* pScore = NULL;
        TextEngraver engraver(m_libraryScope, text, pScore);

        LUnits width = engraver.measure_width();
        CHECK( width > 0.0f );
    }

    TEST_FIXTURE(TextEngraverTestFixture, TextEngraver_MeasureWidthDefaultStyle)
    {
        Document doc(m_libraryScope);
        doc.from_string("(lenmusdoc (vers 0.0) (content (score (vers 1.6) "
            "(instrument (name ''Violin'')(musicData (n c4 q))))))");
        ImoScore* pScore = doc.get_score();
        ImoInstrument* pInstr = pScore->get_instrument(0);
        ImoScoreText& text = pInstr->get_name();
        TextEngraver engraver(m_libraryScope, text, pScore);

        LUnits width = engraver.measure_width();
        CHECK( width > 0.0f );
    }

}

