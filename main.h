/*created a header file which can be used in different source code for multiple reusability*/

#ifndef MAIN_H_
#define MAIN_H_
#include<stdint.h>

typedef struct main
{
    uint32_t gpioa_en:1;     
    uint32_t gpiob_en:1;     
    uint32_t gpioc_en:1;    
    uint32_t gpiod_en:1;  
    uint32_t gpioe_en:1;
    uint32_t gpiof_en:1;
    uint32_t gpiog_en:1;
    uint32_t gpioh_en:1;
    uint32_t gpioi_en:1;
    uint32_t reserved1:3;
    uint32_t crc_en:1;
    uint32_t reserved2:3;
    uint32_t reserved3:2;
    uint32_t bkpsr:1;
    uint32_t ccmdat:1;
    uint32_t dma1_en:1;
    uint32_t dma2_en:1;
    uint32_t reserved4:2;
    uint32_t ethmac_en:1;
    uint32_t ethmactx_en:1;
    uint32_t ethmacrx_en:1;
    uint32_t ethmacptp_en:1;
    uint32_t otghs_en:1;
    uint32_t otghsulpi_en:1;
    uint32_t reserved:1;
    
    
}RCC_AHB1ENR_;  //type alias





#endif /* MAIN_H_ */