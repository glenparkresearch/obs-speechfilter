#include "speechfilter.h"

struct obs_source_info speechfilter = {
	.id = "speechfilter_audio_filter",
	.type = OBS_SOURCE_TYPE_FILTER,
	.output_flags = OBS_SOURCE_AUDIO,
	.get_name = speechfilter_getname,
	.create = speechfilter_on_create,
	.destroy = speechfilter_on_destroy,
	.get_defaults = speechfilter_get_defaults,
	.get_properties = speechfilter_get_properties,
	.update = speechfilter_on_update,
	.activate = speechfilter_activate,
	.deactivate = speechfilter_deactivate,
	.filter_audio = speechfilter_filter_audio
};
