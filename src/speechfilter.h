#ifndef SPEECHFILTER_H
#define SPEECHFILTER_H

#include <obs-module.h>

#ifdef __cplusplus
extern "C" {
#endif

const char *speechfilter_getname(void *unused_data);
void *speechfilter_on_create(obs_data_t *settings, obs_source_t *source);
void speechfilter_on_destroy(void *data);
void speechfilter_get_defaults(obs_data_t *settings);
obs_properties_t *speechfilter_get_properties(void *data);
void speechfilter_on_update(void *data, obs_data_t *settings);
void speechfilter_activate(void *data);
void speechfilter_deactivate(void *data);
struct obs_audio_data *speechfilter_filter_audio(void *data, struct obs_audio_data *audio);
#ifdef __cplusplus
}
#endif

#endif // SPEECHFILTER_H
