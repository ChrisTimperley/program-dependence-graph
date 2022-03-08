#include "ControlDependencyGraph.hh"
#include "DataDependencyGraph.hh"
#include "ProgramDependencyGraph.hh"

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
