
#include "mcc_generated_files/mcc.h"
typedef enum 
{
    L,
    U,
    neutre
}etat_1;

etat_1 etat;
int i = 0;
char verif;
void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();
   
    INTERRUPT_GlobalInterruptEnable();
    INTERRUPT_PeripheralInterruptEnable();
    
    while (1)
    {
        if (EUSART1_is_rx_ready())
        { 
            printf("%c option 1 : barrage(L) \n\r" );
            printf("%c option 2 : debarrage(U) \n\r" );
        } 
        
        switch (etat) 
        {
        case 1:
            if (EUSART1_is_rx_ready)
                {
                    verif = EUSART1_Read();
                
                    if (verif == 'L') // VERIFIE LE CARACTERE
                    {  
                        printf("%c barrage réussi" );                         
                    }   
                }       
                break;
            
        case 2:
            if (EUSART1_is_rx_ready)
                {
                    verif = EUSART1_Read();
                
                    if (verif == 'U')
                    {    
                        printf("%c débarrage réussi" );                         
                    }   
                }       
                break; 
            
        default:
            etat == neutre;
        
        }

    
    }
}
/**
 End of File
*/