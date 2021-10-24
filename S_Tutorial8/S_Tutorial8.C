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
    This is the Tutorial8 from seeeeeeeeeeer.

\*---------------------------------------------------------------------------*/

#include "fvCFD.H"

int main(int argc, char *argv[])
{
    #include "setRootCaseLists.H"
    #include "createTime.H"
    #include "createMesh.H"

    // * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

    Pout<< "Processor Number: " << Pstream::myProcNo()
        << " | cells: " << mesh.C().size()
        << " | internal faces: " << mesh.Cf().size()
        << " | boundary: " << mesh.boundary().size()
        << endl;

    forAll(mesh.boundary(),patchI)
        Pout<< "Patch " << patchI << " " 
            << mesh.boundary()[patchI].name()
            << endl;


    return 0;

}


// ************************************************************************* //
