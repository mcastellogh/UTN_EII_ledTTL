/*********************************************************************************
 * 
 *                       ELECTRONICA II UTN - FRRO                                *
 * 
 * *******************************************************************************/

//===================[File header]================================================
// File:                app.cpp
// Author:              Marcelo Castello (https://github.com/mcastellogh)
// Licence:             GPLV3+
// Version:             1.0.0
// Date:                Mayo 2024
// Info:                Proyect template for Electrónica II

//====================[Use & storage]============================================
// PCB:                 NodeMCU 
// Plataforma:          ESP8266  
// Use:                 Template
// Folder:              template_EII_V1
// Proyect name:        template_EII_V1

//====================[ToDo]=====================================================     
//        
//
//
//====================[Bugs]=====================================================     
//     
//                   
//
//====================[Commits]==================================================     
//
// Last commit:
//
//===================[End file header]===========================================


//--Includes
#include "app.h"

uint16_t led_delay=200;

//--Functions
void App_loop(void){
    blink_led(led_delay,LED_PIN);
}