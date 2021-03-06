/*
Copyright (c) 2015 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#pragma once
#include "kernel/expr.h"

namespace lean {
class parser;
expr parse_with_attributes_tactic(parser & p);
void initialize_with_attributes_tactic();
void finalize_with_attributes_tactic();
}
