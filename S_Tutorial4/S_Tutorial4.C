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
    This is the Tutorial4 from seeeeeeeeeeer.

\*---------------------------------------------------------------------------*/

#include "fvCFD.H"

int main(int argc, char *argv[])
{
    #include "setRootCase.H"
    #include "createTime.H"
    #include "createMesh.H"

    Info << " There are " << mesh.C().size() << " cells here " << nl
         << "  and " << mesh.Cf().size() << " internal faces "
         << nl << endl;

    for (label cellI = 0; cellI < mesh.C().size(); cellI++)
        if (cellI == 50)
            Info << " Number " << cellI << " with the center point at " << mesh.C()[cellI] << nl << endl;

    for (label faceI = 0; faceI < mesh.Cf().size(); faceI++)
        if (faceI%100 == 0)
            Info << " The internal face Number " << faceI << " with the center point at " << mesh.Cf()[faceI] << nl
                 << " with the owner face Number " << mesh.owner()[faceI] << nl
                 << " with the neighbour face Number " << mesh.neighbour()[faceI] << nl
                 << endl;


    Info << "End\n" << endl;
    return 0;
}


// ************************************************************************* //
