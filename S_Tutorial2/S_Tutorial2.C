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
    This is the Tutorial2 from seeeeeeeeeeer.

\*---------------------------------------------------------------------------*/

#include "fvCFD.H"

int main(int argc, char *argv[])
{
    #include "setRootCase.H"
    #include "createTime.H"
    #include "createMesh.H"

    dictionary testDict;
    const word dictName("testProperties");

    IOobject yourDictObject
    (
        dictName,
        mesh.time().constant(), 
        mesh,
        IOobject::MUST_READ
    );

    testDict = IOdictionary(yourDictObject);

    word outputWord;

    testDict.lookup("channelName") >> outputWord;

    scalar outputScalar(testDict.lookupOrDefault<scalar>("yourScalar", 1900));
    scalar outputScalarB(testDict.lookupOrDefault<scalar>("herScalar", 1900));

    List<scalar> outputList (testDict.lookup("yourList"));

    Info << "What you got here:" << nl
         << nl
         << "channelName: " << outputWord << nl
         << "yourScalar: " << outputScalar << nl
         << "herScalar: " << outputScalarB << nl
         << "yourList: " << outputList << nl
         << endl;

    Info<< "End\n" << endl;

    return 0;
}


// ************************************************************************* //
