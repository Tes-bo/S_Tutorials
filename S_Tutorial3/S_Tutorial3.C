/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     | Website:  https://openfoam.org
    \\  /    A nd           | Copyright (C) 2011-2020 OpenFOAM Foundation
     \\/     M anipulation  |
-------------------------------------------------------------------------------
License
    This file is part of OpenFOAM.

    OpenFOAM is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with OpenFOAM.  If not, see <http://www.gnu.org/licenses/>.

Description
    This is the Tutorial3 from seeeeeeeeeeer.

\*---------------------------------------------------------------------------*/

#include "fvCFD.H"
#include <vector>

int main(int argc, char *argv[])
{
    #include "setRootCase.H"
    #include "createTime.H"
    #include "createMesh.H"

    fileName yourFile = mesh.time().path()/"yourDictionary";
    mkDir(yourFile);

    autoPtr<OFstream> yourFilePtr;
    yourFilePtr.reset(new OFstream(yourFile/"yourPaper.md"));

    word yourWord = "This channel is from seeeeeer";

    std::vector<int> yourVector = {1,2,3,4,5};
    yourVector.push_back(0);

    yourFilePtr() << "This is S_Tutorial3" << endl;
    yourFilePtr() << yourWord << endl;

    int length = yourVector.size();
    for(int ix = 0; ix < length; ++ix)
        yourFilePtr() << yourVector[ix] << endl;


    Info<< "End\n" << endl;
    return 0;
}


// ************************************************************************* //
