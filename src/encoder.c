#include <logging/log.h>
LOG_MODULE_REGISTER(encoder);

void read_encoder_values() {
    int value = get_encoder_value();
    LOG_DBG("Current encoder value: %d", value);
}