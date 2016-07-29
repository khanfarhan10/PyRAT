/*
** iorat.h: declarations for I/O of SAR images in RAT formats
**
** This file is part of NL-SAR Toolbox version 0.6.
**
** Copyright Charles-Alban Deledalle (2013)
** Email charles-alban.deledalle@math.u-bordeaux1.fr
**
** This software is a computer program whose purpose is to provide a
** suite of tools to manipulate SAR images.
**
** This software is governed by the CeCILL license under French law and
** abiding by the rules of distribution of free software. You can use,
** modify and/ or redistribute the software under the terms of the CeCILL
** license as circulated by CEA, CNRS and INRIA at the following URL
** "http://www.cecill.info".
**
** As a counterpart to the access to the source code and rights to copy,
** modify and redistribute granted by the license, users are provided only
** with a limited warranty and the software's author, the holder of the
** economic rights, and the successive licensors have only limited
** liability.
**
** In this respect, the user's attention is drawn to the risks associated
** with loading, using, modifying and/or developing or reproducing the
** software by the user in light of its specific status of free software,
** that may mean that it is complicated to manipulate, and that also
** therefore means that it is reserved for developers and experienced
** professionals having in-depth computer knowledge. Users are therefore
** encouraged to load and test the software's suitability as regards their
** requirements in conditions enabling the security of their systems and/or
** data to be ensured and, more generally, to use and operate it in the
** same conditions as regards security.
**
** The fact that you are presently reading this means that you have had
** knowledge of the CeCILL license and that you accept its terms.
**
**
** Started on  Wed Jul 24 15:50:00 2013 Charles-Alban Deledalle
** Last update Mon Aug 19 14:16:42 2013 Charles-Alban Deledalle
*/

#ifndef IORAT_H_
# define IORAT_H_

#include "sardata.h"

sardata*	ratread(const char* filename, sardata* sar);
sardata*	ratread_header(const char* filename, sardata* sar);
sardata*	ratread_extract(const char* filename, sardata* sar,
				long int xoffset, long int yoffset,
				long int width, long int height);
int		ratwrite(const sardata* sar, const char* filename);

#endif //!IORAT_H_
