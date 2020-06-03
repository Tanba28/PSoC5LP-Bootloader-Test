/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"

CY_ISR(boot){
    Bootloadable_Load();
}

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    isr_EnterBootloader_StartEx(boot);
    
    for(;;)
    {
        /* Place your application code here. */
        LED_Write(~LED_Read());
        CyDelay(1000);
    }
}

/* [] END OF FILE */
