/* -*- c++ -*- ----------------------------------------------------------
   LAMMPS - Large-scale Atomic/Molecular Massively Parallel Simulator
   http://lammps.sandia.gov, Sandia National Laboratories
   Steve Plimpton, sjplimp@sandia.gov

   Copyright (2003) Sandia Corporation.  Under the terms of Contract
   DE-AC04-94AL85000 with Sandia Corporation, the U.S. Government retains
   certain rights in this software.  This software is distributed under 
   the GNU General Public License.

   See the README file in the top-level LAMMPS directory.
------------------------------------------------------------------------- */

#ifdef DIHEDRAL_CLASS

DihedralStyle(bend,DihedralBend)

#else

#ifndef LMP_DIHEDRAL_BEND_H
#define LMP_DIHEDRAL_BEND_H

#include "stdio.h"
#include "dihedral.h"

namespace LAMMPS_NS {

class DihedralBend : public Dihedral {
 public:
  DihedralBend(class LAMMPS *);
  ~DihedralBend();
  void compute(int, int);
  void coeff(int, char **);
  void write_restart(FILE *);
  void read_restart(FILE *);

 protected:
  double *k,*phi0;

  void allocate();
};

}

#endif
#endif