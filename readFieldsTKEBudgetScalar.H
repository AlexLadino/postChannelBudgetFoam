// TURBULENT KINETIC ENERGY BUDGET TERMS

    volScalarField productionMean
    (
        IOobject
        (
            "productionMean",
            runTime.timeName(),
            mesh,
            IOobject::MUST_READ
        ),
        mesh
    );

// ----------------------------------------------------------------------------

    volScalarField transportViscousDiffusionMean
    (
        IOobject
        (
            "transportViscousDiffusionMean",
            runTime.timeName(),
            mesh,
            IOobject::MUST_READ
        ),
        mesh
    );
    
// ----------------------------------------------------------------------------

    volScalarField transportVelocityPressureMean
    (
        IOobject
        (
            "transportVelocityPressureMean",
            runTime.timeName(),
            mesh,
            IOobject::MUST_READ
        ),
        mesh
    );
    
// ----------------------------------------------------------------------------

    volScalarField transportTurbulenceMean
    (
        IOobject
        (
            "transportTurbulenceMean",
            runTime.timeName(),
            mesh,
            IOobject::MUST_READ
        ),
        mesh
    ); 
    
// ----------------------------------------------------------------------------

    volScalarField convectionMean
    (
        IOobject
        (
            "convectionMean",
            runTime.timeName(),
            mesh,
            IOobject::MUST_READ
        ),
        mesh
    );
    
// ----------------------------------------------------------------------------

    volScalarField viscousDissipationMean
    (
        IOobject
        (
            "viscousDissipationMean",
            runTime.timeName(),
            mesh,
            IOobject::MUST_READ
        ),
        mesh
    );
    
