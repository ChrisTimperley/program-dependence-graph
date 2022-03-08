#include "ControlDependencyGraph.hh"
#include "DataDependencyGraph.hh"
#include "ProgramDependencyGraph.hh"

using namespace llvm;

static llvm::RegisterPass<pdg::ProgramDependencyGraph> PDG(
  "pdg",
  "Program Dependency Graph Construction",
  false,
  true);

static llvm::RegisterPass<pdg::DataDependencyGraph> DDG(
  "ddg",
  "Data Dependency Graph Construction",
  false,
  true);

static llvm::RegisterPass<pdg::ControlDependencyGraph> CDG(
  "cdg",
  "Control Dependency Graph Construction",
  false,
  true);

// static llvm::RegisterPass<pdg::ProgramDependencyPrinter> PDGPrinter(
//   "dot-pdg",
//   "Print instruction-level program dependency graph of "
//   "function to 'dot' file",
//   false,
//   false);

// cl::opt<bool, true> DOTDDG("dot-only-ddg", cl::desc("Only print ddg dependencies"), cl::value_desc("dot print ddg deps"), cl::location(pdg::DOTONLYDDG), cl::init(false));
// cl::opt<bool, true> DOTCDG("dot-only-cdg", cl::desc("Only print cdg dependencies"), cl::value_desc("dot print cdg deps"), cl::location(pdg::DOTONLYCDG), cl::init(false));
// cl::opt<bool, true> DEBUG("pdg-debug", cl::desc("print debug messages"), cl::value_desc("print debug messages"), cl::location(pdg::DEBUG), cl::init(false));


