#ifndef _ROBOTCAMPUS_MAIN_H
#define _ROBOTCAMPUS_MAIN_H

/**
 * Fonctions à implémenter pour utiliser le framework 
 * Robots War
 */
void setup();
void tick();
void loop();
void terminal_to_rc();
void terminal_to_usb();
void enable_terminal();
void disable_terminal();
#if defined(RHOCK)
bool is_rhock_mode();
#endif

#endif
