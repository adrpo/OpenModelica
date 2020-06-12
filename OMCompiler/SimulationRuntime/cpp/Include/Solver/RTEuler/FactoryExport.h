#pragma once
/** @defgroup solverRteuler Solver.RTEuler
 *  Module for Euler integration methods for real-time simulation
 *  @{
 */
#if defined(__vxworks) || defined(__TRICORE__)

#define BOOST_EXTENSION_SOLVER_DECL
#define BOOST_EXTENSION_SOLVERSETTINGS_DECL

#elif defined(RUNTIME_STATIC_LINKING) && (defined(OMC_BUILD) || defined(SIMSTER_BUILD))

#define BOOST_EXTENSION_SOLVER_DECL
#define BOOST_EXTENSION_STATESELECT_DECL
#define BOOST_EXTENSION_SOLVERSETTINGS_DECL
#define BOOST_EXTENSION_MONITOR_DECL

#elif defined(OMC_BUILD) || defined(SIMSTER_BUILD)

#define BOOST_EXTENSION_SOLVER_DECL BOOST_EXTENSION_IMPORT_DECL
#define BOOST_EXTENSION_STATESELECT_DECL BOOST_EXTENSION_IMPORT_DECL
#define BOOST_EXTENSION_SOLVERSETTINGS_DECL BOOST_EXTENSION_IMPORT_DECL
#define BOOST_EXTENSION_MONITOR_DECL BOOST_EXTENSION_IMPORT_DECL
#else
    error "operating system not supported"
#endif
/** @} */ // end of solverRteuler