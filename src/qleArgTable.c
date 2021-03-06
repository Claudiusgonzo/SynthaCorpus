// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT license.

// Table of command line argument definitions for the corpus
// property extractor.  The functions in argParser.c operate
// on this array.

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

#include "definitions.h"
#include "utils/dahash.h"
#include "queryLogEmulator.h"
#include "utils/argParser.h"

arg_t args[] = {
  { "baseStem", ASTRING, (void *)&(params.baseStem), "The names of all the files containing extracted properties and the query file (.q) for the base collection will share this prefix."},
  { "emuStem", ASTRING, (void *)&(params.emuStem), "The names of all the files containing extracted properties and the output query file (.q) for the emulated collection will share this prefix."},
  { "obfuscate", ABOOL, (void *)&(params.obfuscate), "If TRUE, word ranks will be randomly perturbed ."},
  { "preserveNoExists", ABOOL, (void *)&(params.preserveNoExists), "If TRUE non-existent words will be replaced with made-up non-exists.  Othewise a random word form emuStem will be emitted."},
  { "verbose", ABOOL, (void *)&(params.verbose), "If TRUE, each action taken will be reported."},

  { "", AEOL, NULL, "" }
  };


void initialiseParams() {
  params.baseStem = NULL;
  params.emuStem = NULL;
  params.verbose = FALSE;
  params.preserveNoExists = FALSE;
  params.obfuscate = FALSE;
}



