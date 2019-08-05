#ifndef SATURN_ENGINE_CORE_CONTROLLER
#define SATURN_ENGINE_CORE_CONTROLLER

void saten_pad_input_refresh(int i);
void saten_pad_input_refresh_controller(int i);
void saten_pad_input_refresh_joystick(int i);
void saten_pad_input_update(int i, bool b, int j);
void saten_pad_axis_update(int i, int16_t k, int j);
void saten_pad_stick_angle(int i);
void saten_pad_filter_deadzone(int i);
uint32_t saten_btn(uint8_t i, int j);
void saten_btn_lock(int i);
void saten_btn_unlock(int i);
void saten_controller_add(int i);
void saten_controller_remove(int i);

void saten_controller_set_deadzone(int16_t dz, int i);
float saten_lstickang_get(int i);
float saten_rstickang_get(int i);

#endif /* SATURN_ENGINE_CORE_CONTROLLER */
