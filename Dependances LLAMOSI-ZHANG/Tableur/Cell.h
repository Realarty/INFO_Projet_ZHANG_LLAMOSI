// Import/Export Pattern
#ifdef APPLICATION2DLL_EXPORTS
#define ExportedByDLL __declspec(dllexport)
#else
#define ExportedByDLL __declspec(dllimport)
#endif


// Include Guard
#ifndef CELL_H
#define CELL_H

ExportedByDLL double Value();

#endif