/*
 * This file and its contents are licensed under the Timescale License.
 * Please see the included NOTICE for copyright information and
 * LICENSE-TIMESCALE for a copy of the license.
 */
#ifndef TIMESCALEDB_TSL_SERVER_H
#define TIMESCALEDB_TSL_SERVER_H

#include "catalog.h"

extern Datum server_add(PG_FUNCTION_ARGS);
extern Datum server_delete(PG_FUNCTION_ARGS);
extern Datum server_attach(PG_FUNCTION_ARGS);
extern Datum server_detach(PG_FUNCTION_ARGS);
extern Datum server_set_block_new_chunks(PG_FUNCTION_ARGS, bool block);
extern List *server_get_servername_list(void);
extern Datum server_ping(PG_FUNCTION_ARGS);
extern Datum server_set_chunk_default_server(PG_FUNCTION_ARGS);

/* This should only be used for testing */
extern Datum server_add_without_dist_id(PG_FUNCTION_ARGS);

#endif /* TIMESCALEDB_TSL_SERVER_H */
