#include "speechfilter.h"
#include "plugin-support.h"
#include <libobs/media-io/audio-io.h>
#include <libobs/obs.h>

// Function to return the name of the filter
const char *speechfilter_getname(void *unused_data) {
    (void)unused_data;  // Suppress unused parameter warning
    return "SpeechFilter Audio Filter";
}

// Function called when the filter is created
void *speechfilter_on_create(obs_data_t *settings, obs_source_t *source) {
    (void)settings;  // Suppress unused parameter warning
    (void)source;    // Suppress unused parameter warning
    // Initialize and return filter data
    // Replace 'nullptr' with actual data initialization
    return malloc(1); 
}

// Function called when the filter is destroyed
void speechfilter_on_destroy(void *data) {
    (void)data;  // Suppress unused parameter warning
    // Clean up any allocated resources
}

// Function to return the default settings of the filter
void speechfilter_get_defaults(obs_data_t *settings) {
    (void)settings;  // Suppress unused parameter warning
    // Set default values for the filter settings
}

// Function to return the properties of the filter
obs_properties_t *speechfilter_get_properties(void *data) {
    (void)data;  // Suppress unused parameter warning
    // Create and return a properties list for the filter
    obs_properties_t *props = obs_properties_create();
    // Add properties as needed
    return props;
}

// Function called when the filter settings are updated
void speechfilter_on_update(void *data, obs_data_t *settings) {
    (void)data;      // Suppress unused parameter warning
    (void)settings;  // Suppress unused parameter warning
    // Update the filter with the new settings
}

// Function called when the filter is activated
void speechfilter_activate(void *data) {
    (void)data;  // Suppress unused parameter warning
    // Code to execute when the filter is activated
}

// Function called when the filter is deactivated
void speechfilter_deactivate(void *data) {
    (void)data;  // Suppress unused parameter warning
    // Code to execute when the filter is deactivated
}

struct obs_audio_data *speechfilter_filter_audio(void *data, struct obs_audio_data *audio) {
    (void)data;
    obs_log(LOG_INFO, "speechfilter_filter_audio()");
    size_t channels = audio_output_get_channels(obs_get_audio());
    obs_log(LOG_INFO, "speechfilter_filter_audio() # of channels: %i", channels);
    float **adata = (float **)audio->data;
    for (size_t c = 0; c < channels; ++c) {
        for (uint32_t i = 0; i < audio->frames; ++i) {
            adata[c][i] = .0f;
        }
    }
    obs_log(LOG_INFO, "speechfilter_filter_audio() finished");
    return audio;
};










