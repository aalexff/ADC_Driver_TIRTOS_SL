/*
 * ADC_MSP432_CONFIG.h
 *
 *  Created on: Jun 16, 2022
 *      Author: Administrador
 */

//#define __MSP432P401R__
#include <ti/devices/msp432p4xx/inc/msp.h>
#ifndef DRIVERS_ADC_MSP432_CONFIG_H_
#define DRIVERS_ADC_MSP432_CONFIG_H_

/*7 pasos para la creacion de un Driver*/
/*
 * 1 - Definir la tabla de configuracion
 * 2 - Definir los canales perifericos
 * 3 - Completar la tabla de configuracion
 * 4 - Crear las matrices de punteros.
 * 5 - Crear funcion de inicializacion
 * 6 - Completar interfaz de configurador
 */


/*Tabla de configuracion*/
#define PERBASE                              ((uint32_t)0x40000000)          /*!< Peripherals start address */
#define ADC14BASE                            (PERBASE +0x00012000)          /*!< Base address of module ADC14 registers */
#define ADC_14                            ((ADC14_Tipo *) ADC14BASE)
#endif /* DRIVERS_ADC_MSP432_CONFIG_H_ */

/******************************************************************************
* ADC14 Registers
******************************************************************************/
/** @addtogroup ADC14 MSP432P401R (ADC14)
  @{
*/
typedef struct {
  __IO uint32_t CTL0;                                                            /*!< Control 0 Register */
  __IO uint32_t CTL1;                                                            /*!< Control 1 Register */
  __IO uint32_t LO0;                                                             /*!< Window Comparator Low Threshold 0 Register */
  __IO uint32_t HI0;                                                             /*!< Window Comparator High Threshold 0 Register */
  __IO uint32_t LO1;                                                             /*!< Window Comparator Low Threshold 1 Register */
  __IO uint32_t HI1;                                                             /*!< Window Comparator High Threshold 1 Register */
  __IO uint32_t MCTL[32];                                                        /*!< Conversion Memory Control Register */
  __IO uint32_t MEM[32];                                                         /*!< Conversion Memory Register */
       uint32_t RESERVED0[9];
  __IO uint32_t IER0;                                                            /*!< Interrupt Enable 0 Register */
  __IO uint32_t IER1;                                                            /*!< Interrupt Enable 1 Register */
  __I  uint32_t IFGR0;                                                           /*!< Interrupt Flag 0 Register */
  __I  uint32_t IFGR1;                                                           /*!< Interrupt Flag 1 Register */
  __O  uint32_t CLRIFGR0;                                                        /*!< Clear Interrupt Flag 0 Register */
  __IO uint32_t CLRIFGR1;                                                        /*!< Clear Interrupt Flag 1 Register */
  __IO uint32_t IV;                                                              /*!< Interrupt Vector Register */
} ADC14_Tipo;

/*@}*/ /* end of group ADC14 */

/******************************************************************************
* ADC14 Bits
******************************************************************************/
/* ADC14_CTL0[SC] Bits */
#define ADC14_CTL0_SC_OFS                        ( 0)                            /*!< ADC14SC Bit Offset */
#define ADC14_CTL0_SC                            ((uint32_t)0x00000001)          /*!< ADC14 start conversion */
/* ADC14_CTL0[ENC] Bits */
#define ADC14_CTL0_ENC_OFS                       ( 1)                            /*!< ADC14ENC Bit Offset */
#define ADC14_CTL0_ENC                           ((uint32_t)0x00000002)          /*!< ADC14 enable conversion */
/* ADC14_CTL0[ON] Bits */
#define ADC14_CTL0_ON_OFS                        ( 4)                            /*!< ADC14ON Bit Offset */
#define ADC14_CTL0_ON                            ((uint32_t)0x00000010)          /*!< ADC14 on */
/* ADC14_CTL0[MSC] Bits */
#define ADC14_CTL0_MSC_OFS                       ( 7)                            /*!< ADC14MSC Bit Offset */
#define ADC14_CTL0_MSC                           ((uint32_t)0x00000080)          /*!< ADC14 multiple sample and conversion */
/* ADC14_CTL0[SHT0] Bits */
#define ADC14_CTL0_SHT0_OFS                      ( 8)                            /*!< ADC14SHT0 Bit Offset */
#define ADC14_CTL0_SHT0_MASK                     ((uint32_t)0x00000F00)          /*!< ADC14SHT0 Bit Mask */
#define ADC14_CTL0_SHT00                         ((uint32_t)0x00000100)          /*!< SHT0 Bit 0 */
#define ADC14_CTL0_SHT01                         ((uint32_t)0x00000200)          /*!< SHT0 Bit 1 */
#define ADC14_CTL0_SHT02                         ((uint32_t)0x00000400)          /*!< SHT0 Bit 2 */
#define ADC14_CTL0_SHT03                         ((uint32_t)0x00000800)          /*!< SHT0 Bit 3 */
#define ADC14_CTL0_SHT0_0                        ((uint32_t)0x00000000)          /*!< 4 */
#define ADC14_CTL0_SHT0_1                        ((uint32_t)0x00000100)          /*!< 8 */
#define ADC14_CTL0_SHT0_2                        ((uint32_t)0x00000200)          /*!< 16 */
#define ADC14_CTL0_SHT0_3                        ((uint32_t)0x00000300)          /*!< 32 */
#define ADC14_CTL0_SHT0_4                        ((uint32_t)0x00000400)          /*!< 64 */
#define ADC14_CTL0_SHT0_5                        ((uint32_t)0x00000500)          /*!< 96 */
#define ADC14_CTL0_SHT0_6                        ((uint32_t)0x00000600)          /*!< 128 */
#define ADC14_CTL0_SHT0_7                        ((uint32_t)0x00000700)          /*!< 192 */
#define ADC14_CTL0_SHT0__4                       ((uint32_t)0x00000000)          /*!< 4 */
#define ADC14_CTL0_SHT0__8                       ((uint32_t)0x00000100)          /*!< 8 */
#define ADC14_CTL0_SHT0__16                      ((uint32_t)0x00000200)          /*!< 16 */
#define ADC14_CTL0_SHT0__32                      ((uint32_t)0x00000300)          /*!< 32 */
#define ADC14_CTL0_SHT0__64                      ((uint32_t)0x00000400)          /*!< 64 */
#define ADC14_CTL0_SHT0__96                      ((uint32_t)0x00000500)          /*!< 96 */
#define ADC14_CTL0_SHT0__128                     ((uint32_t)0x00000600)          /*!< 128 */
#define ADC14_CTL0_SHT0__192                     ((uint32_t)0x00000700)          /*!< 192 */
/* ADC14_CTL0[SHT1] Bits */
#define ADC14_CTL0_SHT1_OFS                      (12)                            /*!< ADC14SHT1 Bit Offset */
#define ADC14_CTL0_SHT1_MASK                     ((uint32_t)0x0000F000)          /*!< ADC14SHT1 Bit Mask */
#define ADC14_CTL0_SHT10                         ((uint32_t)0x00001000)          /*!< SHT1 Bit 0 */
#define ADC14_CTL0_SHT11                         ((uint32_t)0x00002000)          /*!< SHT1 Bit 1 */
#define ADC14_CTL0_SHT12                         ((uint32_t)0x00004000)          /*!< SHT1 Bit 2 */
#define ADC14_CTL0_SHT13                         ((uint32_t)0x00008000)          /*!< SHT1 Bit 3 */
#define ADC14_CTL0_SHT1_0                        ((uint32_t)0x00000000)          /*!< 4 */
#define ADC14_CTL0_SHT1_1                        ((uint32_t)0x00001000)          /*!< 8 */
#define ADC14_CTL0_SHT1_2                        ((uint32_t)0x00002000)          /*!< 16 */
#define ADC14_CTL0_SHT1_3                        ((uint32_t)0x00003000)          /*!< 32 */
#define ADC14_CTL0_SHT1_4                        ((uint32_t)0x00004000)          /*!< 64 */
#define ADC14_CTL0_SHT1_5                        ((uint32_t)0x00005000)          /*!< 96 */
#define ADC14_CTL0_SHT1_6                        ((uint32_t)0x00006000)          /*!< 128 */
#define ADC14_CTL0_SHT1_7                        ((uint32_t)0x00007000)          /*!< 192 */
#define ADC14_CTL0_SHT1__4                       ((uint32_t)0x00000000)          /*!< 4 */
#define ADC14_CTL0_SHT1__8                       ((uint32_t)0x00001000)          /*!< 8 */
#define ADC14_CTL0_SHT1__16                      ((uint32_t)0x00002000)          /*!< 16 */
#define ADC14_CTL0_SHT1__32                      ((uint32_t)0x00003000)          /*!< 32 */
#define ADC14_CTL0_SHT1__64                      ((uint32_t)0x00004000)          /*!< 64 */
#define ADC14_CTL0_SHT1__96                      ((uint32_t)0x00005000)          /*!< 96 */
#define ADC14_CTL0_SHT1__128                     ((uint32_t)0x00006000)          /*!< 128 */
#define ADC14_CTL0_SHT1__192                     ((uint32_t)0x00007000)          /*!< 192 */
/* ADC14_CTL0[BUSY] Bits */
#define ADC14_CTL0_BUSY_OFS                      (16)                            /*!< ADC14BUSY Bit Offset */
#define ADC14_CTL0_BUSY                          ((uint32_t)0x00010000)          /*!< ADC14 busy */
/* ADC14_CTL0[CONSEQ] Bits */
#define ADC14_CTL0_CONSEQ_OFS                    (17)                            /*!< ADC14CONSEQ Bit Offset */
#define ADC14_CTL0_CONSEQ_MASK                   ((uint32_t)0x00060000)          /*!< ADC14CONSEQ Bit Mask */
#define ADC14_CTL0_CONSEQ0                       ((uint32_t)0x00020000)          /*!< CONSEQ Bit 0 */
#define ADC14_CTL0_CONSEQ1                       ((uint32_t)0x00040000)          /*!< CONSEQ Bit 1 */
#define ADC14_CTL0_CONSEQ_0                      ((uint32_t)0x00000000)          /*!< Single-channel, single-conversion */
#define ADC14_CTL0_CONSEQ_1                      ((uint32_t)0x00020000)          /*!< Sequence-of-channels */
#define ADC14_CTL0_CONSEQ_2                      ((uint32_t)0x00040000)          /*!< Repeat-single-channel */
#define ADC14_CTL0_CONSEQ_3                      ((uint32_t)0x00060000)          /*!< Repeat-sequence-of-channels */
/* ADC14_CTL0[SSEL] Bits */
#define ADC14_CTL0_SSEL_OFS                      (19)                            /*!< ADC14SSEL Bit Offset */
#define ADC14_CTL0_SSEL_MASK                     ((uint32_t)0x00380000)          /*!< ADC14SSEL Bit Mask */
#define ADC14_CTL0_SSEL0                         ((uint32_t)0x00080000)          /*!< SSEL Bit 0 */
#define ADC14_CTL0_SSEL1                         ((uint32_t)0x00100000)          /*!< SSEL Bit 1 */
#define ADC14_CTL0_SSEL2                         ((uint32_t)0x00200000)          /*!< SSEL Bit 2 */
#define ADC14_CTL0_SSEL_0                        ((uint32_t)0x00000000)          /*!< MODCLK */
#define ADC14_CTL0_SSEL_1                        ((uint32_t)0x00080000)          /*!< SYSCLK */
#define ADC14_CTL0_SSEL_2                        ((uint32_t)0x00100000)          /*!< ACLK */
#define ADC14_CTL0_SSEL_3                        ((uint32_t)0x00180000)          /*!< MCLK */
#define ADC14_CTL0_SSEL_4                        ((uint32_t)0x00200000)          /*!< SMCLK */
#define ADC14_CTL0_SSEL_5                        ((uint32_t)0x00280000)          /*!< HSMCLK */
#define ADC14_CTL0_SSEL__MODCLK                  ((uint32_t)0x00000000)          /*!< MODCLK */
#define ADC14_CTL0_SSEL__SYSCLK                  ((uint32_t)0x00080000)          /*!< SYSCLK */
#define ADC14_CTL0_SSEL__ACLK                    ((uint32_t)0x00100000)          /*!< ACLK */
#define ADC14_CTL0_SSEL__MCLK                    ((uint32_t)0x00180000)          /*!< MCLK */
#define ADC14_CTL0_SSEL__SMCLK                   ((uint32_t)0x00200000)          /*!< SMCLK */
#define ADC14_CTL0_SSEL__HSMCLK                  ((uint32_t)0x00280000)          /*!< HSMCLK */
/* ADC14_CTL0[DIV] Bits */
#define ADC14_CTL0_DIV_OFS                       (22)                            /*!< ADC14DIV Bit Offset */
#define ADC14_CTL0_DIV_MASK                      ((uint32_t)0x01C00000)          /*!< ADC14DIV Bit Mask */
#define ADC14_CTL0_DIV0                          ((uint32_t)0x00400000)          /*!< DIV Bit 0 */
#define ADC14_CTL0_DIV1                          ((uint32_t)0x00800000)          /*!< DIV Bit 1 */
#define ADC14_CTL0_DIV2                          ((uint32_t)0x01000000)          /*!< DIV Bit 2 */
#define ADC14_CTL0_DIV_0                         ((uint32_t)0x00000000)          /*!< /1 */
#define ADC14_CTL0_DIV_1                         ((uint32_t)0x00400000)          /*!< /2 */
#define ADC14_CTL0_DIV_2                         ((uint32_t)0x00800000)          /*!< /3 */
#define ADC14_CTL0_DIV_3                         ((uint32_t)0x00C00000)          /*!< /4 */
#define ADC14_CTL0_DIV_4                         ((uint32_t)0x01000000)          /*!< /5 */
#define ADC14_CTL0_DIV_5                         ((uint32_t)0x01400000)          /*!< /6 */
#define ADC14_CTL0_DIV_6                         ((uint32_t)0x01800000)          /*!< /7 */
#define ADC14_CTL0_DIV_7                         ((uint32_t)0x01C00000)          /*!< /8 */
#define ADC14_CTL0_DIV__1                        ((uint32_t)0x00000000)          /*!< /1 */
#define ADC14_CTL0_DIV__2                        ((uint32_t)0x00400000)          /*!< /2 */
#define ADC14_CTL0_DIV__3                        ((uint32_t)0x00800000)          /*!< /3 */
#define ADC14_CTL0_DIV__4                        ((uint32_t)0x00C00000)          /*!< /4 */
#define ADC14_CTL0_DIV__5                        ((uint32_t)0x01000000)          /*!< /5 */
#define ADC14_CTL0_DIV__6                        ((uint32_t)0x01400000)          /*!< /6 */
#define ADC14_CTL0_DIV__7                        ((uint32_t)0x01800000)          /*!< /7 */
#define ADC14_CTL0_DIV__8                        ((uint32_t)0x01C00000)          /*!< /8 */
/* ADC14_CTL0[ISSH] Bits */
#define ADC14_CTL0_ISSH_OFS                      (25)                            /*!< ADC14ISSH Bit Offset */
#define ADC14_CTL0_ISSH                          ((uint32_t)0x02000000)          /*!< ADC14 invert signal sample-and-hold */
/* ADC14_CTL0[SHP] Bits */
#define ADC14_CTL0_SHP_OFS                       (26)                            /*!< ADC14SHP Bit Offset */
#define ADC14_CTL0_SHP                           ((uint32_t)0x04000000)          /*!< ADC14 sample-and-hold pulse-mode select */
/* ADC14_CTL0[SHS] Bits */
#define ADC14_CTL0_SHS_OFS                       (27)                            /*!< ADC14SHS Bit Offset */
#define ADC14_CTL0_SHS_MASK                      ((uint32_t)0x38000000)          /*!< ADC14SHS Bit Mask */
#define ADC14_CTL0_SHS0                          ((uint32_t)0x08000000)          /*!< SHS Bit 0 */
#define ADC14_CTL0_SHS1                          ((uint32_t)0x10000000)          /*!< SHS Bit 1 */
#define ADC14_CTL0_SHS2                          ((uint32_t)0x20000000)          /*!< SHS Bit 2 */
#define ADC14_CTL0_SHS_0                         ((uint32_t)0x00000000)          /*!< ADC14SC bit */
#define ADC14_CTL0_SHS_1                         ((uint32_t)0x08000000)          /*!< See device-specific data sheet for source */
#define ADC14_CTL0_SHS_2                         ((uint32_t)0x10000000)          /*!< See device-specific data sheet for source */
#define ADC14_CTL0_SHS_3                         ((uint32_t)0x18000000)          /*!< See device-specific data sheet for source */
#define ADC14_CTL0_SHS_4                         ((uint32_t)0x20000000)          /*!< See device-specific data sheet for source */
#define ADC14_CTL0_SHS_5                         ((uint32_t)0x28000000)          /*!< See device-specific data sheet for source */
#define ADC14_CTL0_SHS_6                         ((uint32_t)0x30000000)          /*!< See device-specific data sheet for source */
#define ADC14_CTL0_SHS_7                         ((uint32_t)0x38000000)          /*!< See device-specific data sheet for source */
/* ADC14_CTL0[PDIV] Bits */
#define ADC14_CTL0_PDIV_OFS                      (30)                            /*!< ADC14PDIV Bit Offset */
#define ADC14_CTL0_PDIV_MASK                     ((uint32_t)0xC0000000)          /*!< ADC14PDIV Bit Mask */
#define ADC14_CTL0_PDIV0                         ((uint32_t)0x40000000)          /*!< PDIV Bit 0 */
#define ADC14_CTL0_PDIV1                         ((uint32_t)0x80000000)          /*!< PDIV Bit 1 */
#define ADC14_CTL0_PDIV_0                        ((uint32_t)0x00000000)          /*!< Predivide by 1 */
#define ADC14_CTL0_PDIV_1                        ((uint32_t)0x40000000)          /*!< Predivide by 4 */
#define ADC14_CTL0_PDIV_2                        ((uint32_t)0x80000000)          /*!< Predivide by 32 */
#define ADC14_CTL0_PDIV_3                        ((uint32_t)0xC0000000)          /*!< Predivide by 64 */
#define ADC14_CTL0_PDIV__1                       ((uint32_t)0x00000000)          /*!< Predivide by 1 */
#define ADC14_CTL0_PDIV__4                       ((uint32_t)0x40000000)          /*!< Predivide by 4 */
#define ADC14_CTL0_PDIV__32                      ((uint32_t)0x80000000)          /*!< Predivide by 32 */
#define ADC14_CTL0_PDIV__64                      ((uint32_t)0xC0000000)          /*!< Predivide by 64 */
/* ADC14_CTL1[PWRMD] Bits */
#define ADC14_CTL1_PWRMD_OFS                     ( 0)                            /*!< ADC14PWRMD Bit Offset */
#define ADC14_CTL1_PWRMD_MASK                    ((uint32_t)0x00000003)          /*!< ADC14PWRMD Bit Mask */
#define ADC14_CTL1_PWRMD0                        ((uint32_t)0x00000001)          /*!< PWRMD Bit 0 */
#define ADC14_CTL1_PWRMD1                        ((uint32_t)0x00000002)          /*!< PWRMD Bit 1 */
#define ADC14_CTL1_PWRMD_0                       ((uint32_t)0x00000000)          /*!< Regular power mode for use with any resolution setting. Sample rate can be  */
                                                                                 /* up to 1 Msps. */
#define ADC14_CTL1_PWRMD_2                       ((uint32_t)0x00000002)          /*!< Low-power mode for 12-bit, 10-bit, and 8-bit resolution settings. Sample  */
                                                                                 /* rate must not exceed 200 ksps. */
/* ADC14_CTL1[REFBURST] Bits */
#define ADC14_CTL1_REFBURST_OFS                  ( 2)                            /*!< ADC14REFBURST Bit Offset */
#define ADC14_CTL1_REFBURST                      ((uint32_t)0x00000004)          /*!< ADC14 reference buffer burst */
/* ADC14_CTL1[DF] Bits */
#define ADC14_CTL1_DF_OFS                        ( 3)                            /*!< ADC14DF Bit Offset */
#define ADC14_CTL1_DF                            ((uint32_t)0x00000008)          /*!< ADC14 data read-back format */
/* ADC14_CTL1[RES] Bits */
#define ADC14_CTL1_RES_OFS                       ( 4)                            /*!< ADC14RES Bit Offset */
#define ADC14_CTL1_RES_MASK                      ((uint32_t)0x00000030)          /*!< ADC14RES Bit Mask */
#define ADC14_CTL1_RES0                          ((uint32_t)0x00000010)          /*!< RES Bit 0 */
#define ADC14_CTL1_RES1                          ((uint32_t)0x00000020)          /*!< RES Bit 1 */
#define ADC14_CTL1_RES_0                         ((uint32_t)0x00000000)          /*!< 8 bit (9 clock cycle conversion time) */
#define ADC14_CTL1_RES_1                         ((uint32_t)0x00000010)          /*!< 10 bit (11 clock cycle conversion time) */
#define ADC14_CTL1_RES_2                         ((uint32_t)0x00000020)          /*!< 12 bit (14 clock cycle conversion time) */
#define ADC14_CTL1_RES_3                         ((uint32_t)0x00000030)          /*!< 14 bit (16 clock cycle conversion time) */
#define ADC14_CTL1_RES__8BIT                     ((uint32_t)0x00000000)          /*!< 8 bit (9 clock cycle conversion time) */
#define ADC14_CTL1_RES__10BIT                    ((uint32_t)0x00000010)          /*!< 10 bit (11 clock cycle conversion time) */
#define ADC14_CTL1_RES__12BIT                    ((uint32_t)0x00000020)          /*!< 12 bit (14 clock cycle conversion time) */
#define ADC14_CTL1_RES__14BIT                    ((uint32_t)0x00000030)          /*!< 14 bit (16 clock cycle conversion time) */
/* ADC14_CTL1[CSTARTADD] Bits */
#define ADC14_CTL1_CSTARTADD_OFS                 (16)                            /*!< ADC14CSTARTADD Bit Offset */
#define ADC14_CTL1_CSTARTADD_MASK                ((uint32_t)0x001F0000)          /*!< ADC14CSTARTADD Bit Mask */
/* ADC14_CTL1[BATMAP] Bits */
#define ADC14_CTL1_BATMAP_OFS                    (22)                            /*!< ADC14BATMAP Bit Offset */
#define ADC14_CTL1_BATMAP                        ((uint32_t)0x00400000)          /*!< Controls 1/2 AVCC ADC input channel selection */
/* ADC14_CTL1[TCMAP] Bits */
#define ADC14_CTL1_TCMAP_OFS                     (23)                            /*!< ADC14TCMAP Bit Offset */
#define ADC14_CTL1_TCMAP                         ((uint32_t)0x00800000)          /*!< Controls temperature sensor ADC input channel selection */
/* ADC14_CTL1[CH0MAP] Bits */
#define ADC14_CTL1_CH0MAP_OFS                    (24)                            /*!< ADC14CH0MAP Bit Offset */
#define ADC14_CTL1_CH0MAP                        ((uint32_t)0x01000000)          /*!< Controls internal channel 0 selection to ADC input channel MAX-2 */
/* ADC14_CTL1[CH1MAP] Bits */
#define ADC14_CTL1_CH1MAP_OFS                    (25)                            /*!< ADC14CH1MAP Bit Offset */
#define ADC14_CTL1_CH1MAP                        ((uint32_t)0x02000000)          /*!< Controls internal channel 1 selection to ADC input channel MAX-3 */
/* ADC14_CTL1[CH2MAP] Bits */
#define ADC14_CTL1_CH2MAP_OFS                    (26)                            /*!< ADC14CH2MAP Bit Offset */
#define ADC14_CTL1_CH2MAP                        ((uint32_t)0x04000000)          /*!< Controls internal channel 2 selection to ADC input channel MAX-4 */
/* ADC14_CTL1[CH3MAP] Bits */
#define ADC14_CTL1_CH3MAP_OFS                    (27)                            /*!< ADC14CH3MAP Bit Offset */
#define ADC14_CTL1_CH3MAP                        ((uint32_t)0x08000000)          /*!< Controls internal channel 3 selection to ADC input channel MAX-5 */
/* ADC14_LO0[LO0] Bits */
#define ADC14_LO0_LO0_OFS                        ( 0)                            /*!< ADC14LO0 Bit Offset */
#define ADC14_LO0_LO0_MASK                       ((uint32_t)0x0000FFFF)          /*!< ADC14LO0 Bit Mask */
/* ADC14_HI0[HI0] Bits */
#define ADC14_HI0_HI0_OFS                        ( 0)                            /*!< ADC14HI0 Bit Offset */
#define ADC14_HI0_HI0_MASK                       ((uint32_t)0x0000FFFF)          /*!< ADC14HI0 Bit Mask */
/* ADC14_LO1[LO1] Bits */
#define ADC14_LO1_LO1_OFS                        ( 0)                            /*!< ADC14LO1 Bit Offset */
#define ADC14_LO1_LO1_MASK                       ((uint32_t)0x0000FFFF)          /*!< ADC14LO1 Bit Mask */
/* ADC14_HI1[HI1] Bits */
#define ADC14_HI1_HI1_OFS                        ( 0)                            /*!< ADC14HI1 Bit Offset */
#define ADC14_HI1_HI1_MASK                       ((uint32_t)0x0000FFFF)          /*!< ADC14HI1 Bit Mask */
/* ADC14_MCTLN[INCH] Bits */
#define ADC14_MCTLN_INCH_OFS                     ( 0)                            /*!< ADC14INCH Bit Offset */
#define ADC14_MCTLN_INCH_MASK                    ((uint32_t)0x0000001F)          /*!< ADC14INCH Bit Mask */
#define ADC14_MCTLN_INCH0                        ((uint32_t)0x00000001)          /*!< INCH Bit 0 */
#define ADC14_MCTLN_INCH1                        ((uint32_t)0x00000002)          /*!< INCH Bit 1 */
#define ADC14_MCTLN_INCH2                        ((uint32_t)0x00000004)          /*!< INCH Bit 2 */
#define ADC14_MCTLN_INCH3                        ((uint32_t)0x00000008)          /*!< INCH Bit 3 */
#define ADC14_MCTLN_INCH4                        ((uint32_t)0x00000010)          /*!< INCH Bit 4 */
#define ADC14_MCTLN_INCH_0                       ((uint32_t)0x00000000)          /*!< If ADC14DIF = 0: A0; If ADC14DIF = 1: Ain+ = A0, Ain- = A1 */
#define ADC14_MCTLN_INCH_1                       ((uint32_t)0x00000001)          /*!< If ADC14DIF = 0: A1; If ADC14DIF = 1: Ain+ = A0, Ain- = A1 */
#define ADC14_MCTLN_INCH_2                       ((uint32_t)0x00000002)          /*!< If ADC14DIF = 0: A2; If ADC14DIF = 1: Ain+ = A2, Ain- = A3 */
#define ADC14_MCTLN_INCH_3                       ((uint32_t)0x00000003)          /*!< If ADC14DIF = 0: A3; If ADC14DIF = 1: Ain+ = A2, Ain- = A3 */
#define ADC14_MCTLN_INCH_4                       ((uint32_t)0x00000004)          /*!< If ADC14DIF = 0: A4; If ADC14DIF = 1: Ain+ = A4, Ain- = A5 */
#define ADC14_MCTLN_INCH_5                       ((uint32_t)0x00000005)          /*!< If ADC14DIF = 0: A5; If ADC14DIF = 1: Ain+ = A4, Ain- = A5 */
#define ADC14_MCTLN_INCH_6                       ((uint32_t)0x00000006)          /*!< If ADC14DIF = 0: A6; If ADC14DIF = 1: Ain+ = A6, Ain- = A7 */
#define ADC14_MCTLN_INCH_7                       ((uint32_t)0x00000007)          /*!< If ADC14DIF = 0: A7; If ADC14DIF = 1: Ain+ = A6, Ain- = A7 */
#define ADC14_MCTLN_INCH_8                       ((uint32_t)0x00000008)          /*!< If ADC14DIF = 0: A8; If ADC14DIF = 1: Ain+ = A8, Ain- = A9 */
#define ADC14_MCTLN_INCH_9                       ((uint32_t)0x00000009)          /*!< If ADC14DIF = 0: A9; If ADC14DIF = 1: Ain+ = A8, Ain- = A9 */
#define ADC14_MCTLN_INCH_10                      ((uint32_t)0x0000000A)          /*!< If ADC14DIF = 0: A10; If ADC14DIF = 1: Ain+ = A10, Ain- = A11 */
#define ADC14_MCTLN_INCH_11                      ((uint32_t)0x0000000B)          /*!< If ADC14DIF = 0: A11; If ADC14DIF = 1: Ain+ = A10, Ain- = A11 */
#define ADC14_MCTLN_INCH_12                      ((uint32_t)0x0000000C)          /*!< If ADC14DIF = 0: A12; If ADC14DIF = 1: Ain+ = A12, Ain- = A13 */
#define ADC14_MCTLN_INCH_13                      ((uint32_t)0x0000000D)          /*!< If ADC14DIF = 0: A13; If ADC14DIF = 1: Ain+ = A12, Ain- = A13 */
#define ADC14_MCTLN_INCH_14                      ((uint32_t)0x0000000E)          /*!< If ADC14DIF = 0: A14; If ADC14DIF = 1: Ain+ = A14, Ain- = A15 */
#define ADC14_MCTLN_INCH_15                      ((uint32_t)0x0000000F)          /*!< If ADC14DIF = 0: A15; If ADC14DIF = 1: Ain+ = A14, Ain- = A15 */
#define ADC14_MCTLN_INCH_16                      ((uint32_t)0x00000010)          /*!< If ADC14DIF = 0: A16; If ADC14DIF = 1: Ain+ = A16, Ain- = A17 */
#define ADC14_MCTLN_INCH_17                      ((uint32_t)0x00000011)          /*!< If ADC14DIF = 0: A17; If ADC14DIF = 1: Ain+ = A16, Ain- = A17 */
#define ADC14_MCTLN_INCH_18                      ((uint32_t)0x00000012)          /*!< If ADC14DIF = 0: A18; If ADC14DIF = 1: Ain+ = A18, Ain- = A19 */
#define ADC14_MCTLN_INCH_19                      ((uint32_t)0x00000013)          /*!< If ADC14DIF = 0: A19; If ADC14DIF = 1: Ain+ = A18, Ain- = A19 */
#define ADC14_MCTLN_INCH_20                      ((uint32_t)0x00000014)          /*!< If ADC14DIF = 0: A20; If ADC14DIF = 1: Ain+ = A20, Ain- = A21 */
#define ADC14_MCTLN_INCH_21                      ((uint32_t)0x00000015)          /*!< If ADC14DIF = 0: A21; If ADC14DIF = 1: Ain+ = A20, Ain- = A21 */
#define ADC14_MCTLN_INCH_22                      ((uint32_t)0x00000016)          /*!< If ADC14DIF = 0: A22; If ADC14DIF = 1: Ain+ = A22, Ain- = A23 */
#define ADC14_MCTLN_INCH_23                      ((uint32_t)0x00000017)          /*!< If ADC14DIF = 0: A23; If ADC14DIF = 1: Ain+ = A22, Ain- = A23 */
#define ADC14_MCTLN_INCH_24                      ((uint32_t)0x00000018)          /*!< If ADC14DIF = 0: A24; If ADC14DIF = 1: Ain+ = A24, Ain- = A25 */
#define ADC14_MCTLN_INCH_25                      ((uint32_t)0x00000019)          /*!< If ADC14DIF = 0: A25; If ADC14DIF = 1: Ain+ = A24, Ain- = A25 */
#define ADC14_MCTLN_INCH_26                      ((uint32_t)0x0000001A)          /*!< If ADC14DIF = 0: A26; If ADC14DIF = 1: Ain+ = A26, Ain- = A27 */
#define ADC14_MCTLN_INCH_27                      ((uint32_t)0x0000001B)          /*!< If ADC14DIF = 0: A27; If ADC14DIF = 1: Ain+ = A26, Ain- = A27 */
#define ADC14_MCTLN_INCH_28                      ((uint32_t)0x0000001C)          /*!< If ADC14DIF = 0: A28; If ADC14DIF = 1: Ain+ = A28, Ain- = A29 */
#define ADC14_MCTLN_INCH_29                      ((uint32_t)0x0000001D)          /*!< If ADC14DIF = 0: A29; If ADC14DIF = 1: Ain+ = A28, Ain- = A29 */
#define ADC14_MCTLN_INCH_30                      ((uint32_t)0x0000001E)          /*!< If ADC14DIF = 0: A30; If ADC14DIF = 1: Ain+ = A30, Ain- = A31 */
#define ADC14_MCTLN_INCH_31                      ((uint32_t)0x0000001F)          /*!< If ADC14DIF = 0: A31; If ADC14DIF = 1: Ain+ = A30, Ain- = A31 */
/* ADC14_MCTLN[EOS] Bits */
#define ADC14_MCTLN_EOS_OFS                      ( 7)                            /*!< ADC14EOS Bit Offset */
#define ADC14_MCTLN_EOS                          ((uint32_t)0x00000080)          /*!< End of sequence */
/* ADC14_MCTLN[VRSEL] Bits */
#define ADC14_MCTLN_VRSEL_OFS                    ( 8)                            /*!< ADC14VRSEL Bit Offset */
#define ADC14_MCTLN_VRSEL_MASK                   ((uint32_t)0x00000F00)          /*!< ADC14VRSEL Bit Mask */
#define ADC14_MCTLN_VRSEL0                       ((uint32_t)0x00000100)          /*!< VRSEL Bit 0 */
#define ADC14_MCTLN_VRSEL1                       ((uint32_t)0x00000200)          /*!< VRSEL Bit 1 */
#define ADC14_MCTLN_VRSEL2                       ((uint32_t)0x00000400)          /*!< VRSEL Bit 2 */
#define ADC14_MCTLN_VRSEL3                       ((uint32_t)0x00000800)          /*!< VRSEL Bit 3 */
#define ADC14_MCTLN_VRSEL_0                      ((uint32_t)0x00000000)          /*!< V(R+) = AVCC, V(R-) = AVSS */
#define ADC14_MCTLN_VRSEL_1                      ((uint32_t)0x00000100)          /*!< V(R+) = VREF buffered, V(R-) = AVSS */
#define ADC14_MCTLN_VRSEL_14                     ((uint32_t)0x00000E00)          /*!< V(R+) = VeREF+, V(R-) = VeREF- */
#define ADC14_MCTLN_VRSEL_15                     ((uint32_t)0x00000F00)          /*!< V(R+) = VeREF+ buffered, V(R-) = VeREF */
/* ADC14_MCTLN[DIF] Bits */
#define ADC14_MCTLN_DIF_OFS                      (13)                            /*!< ADC14DIF Bit Offset */
#define ADC14_MCTLN_DIF                          ((uint32_t)0x00002000)          /*!< Differential mode */
/* ADC14_MCTLN[WINC] Bits */
#define ADC14_MCTLN_WINC_OFS                     (14)                            /*!< ADC14WINC Bit Offset */
#define ADC14_MCTLN_WINC                         ((uint32_t)0x00004000)          /*!< Comparator window enable */
/* ADC14_MCTLN[WINCTH] Bits */
#define ADC14_MCTLN_WINCTH_OFS                   (15)                            /*!< ADC14WINCTH Bit Offset */
#define ADC14_MCTLN_WINCTH                       ((uint32_t)0x00008000)          /*!< Window comparator threshold register selection */
/* ADC14_MEMN[CONVRES] Bits */
#define ADC14_MEMN_CONVRES_OFS                   ( 0)                            /*!< Conversion_Results Bit Offset */
#define ADC14_MEMN_CONVRES_MASK                  ((uint32_t)0x0000FFFF)          /*!< Conversion_Results Bit Mask */
/* ADC14_IER0[IE0] Bits */
#define ADC14_IER0_IE0_OFS                       ( 0)                            /*!< ADC14IE0 Bit Offset */
#define ADC14_IER0_IE0                           ((uint32_t)0x00000001)          /*!< Interrupt enable */
/* ADC14_IER0[IE1] Bits */
#define ADC14_IER0_IE1_OFS                       ( 1)                            /*!< ADC14IE1 Bit Offset */
#define ADC14_IER0_IE1                           ((uint32_t)0x00000002)          /*!< Interrupt enable */
/* ADC14_IER0[IE2] Bits */
#define ADC14_IER0_IE2_OFS                       ( 2)                            /*!< ADC14IE2 Bit Offset */
#define ADC14_IER0_IE2                           ((uint32_t)0x00000004)          /*!< Interrupt enable */
/* ADC14_IER0[IE3] Bits */
#define ADC14_IER0_IE3_OFS                       ( 3)                            /*!< ADC14IE3 Bit Offset */
#define ADC14_IER0_IE3                           ((uint32_t)0x00000008)          /*!< Interrupt enable */
/* ADC14_IER0[IE4] Bits */
#define ADC14_IER0_IE4_OFS                       ( 4)                            /*!< ADC14IE4 Bit Offset */
#define ADC14_IER0_IE4                           ((uint32_t)0x00000010)          /*!< Interrupt enable */
/* ADC14_IER0[IE5] Bits */
#define ADC14_IER0_IE5_OFS                       ( 5)                            /*!< ADC14IE5 Bit Offset */
#define ADC14_IER0_IE5                           ((uint32_t)0x00000020)          /*!< Interrupt enable */
/* ADC14_IER0[IE6] Bits */
#define ADC14_IER0_IE6_OFS                       ( 6)                            /*!< ADC14IE6 Bit Offset */
#define ADC14_IER0_IE6                           ((uint32_t)0x00000040)          /*!< Interrupt enable */
/* ADC14_IER0[IE7] Bits */
#define ADC14_IER0_IE7_OFS                       ( 7)                            /*!< ADC14IE7 Bit Offset */
#define ADC14_IER0_IE7                           ((uint32_t)0x00000080)          /*!< Interrupt enable */
/* ADC14_IER0[IE8] Bits */
#define ADC14_IER0_IE8_OFS                       ( 8)                            /*!< ADC14IE8 Bit Offset */
#define ADC14_IER0_IE8                           ((uint32_t)0x00000100)          /*!< Interrupt enable */
/* ADC14_IER0[IE9] Bits */
#define ADC14_IER0_IE9_OFS                       ( 9)                            /*!< ADC14IE9 Bit Offset */
#define ADC14_IER0_IE9                           ((uint32_t)0x00000200)          /*!< Interrupt enable */
/* ADC14_IER0[IE10] Bits */
#define ADC14_IER0_IE10_OFS                      (10)                            /*!< ADC14IE10 Bit Offset */
#define ADC14_IER0_IE10                          ((uint32_t)0x00000400)          /*!< Interrupt enable */
/* ADC14_IER0[IE11] Bits */
#define ADC14_IER0_IE11_OFS                      (11)                            /*!< ADC14IE11 Bit Offset */
#define ADC14_IER0_IE11                          ((uint32_t)0x00000800)          /*!< Interrupt enable */
/* ADC14_IER0[IE12] Bits */
#define ADC14_IER0_IE12_OFS                      (12)                            /*!< ADC14IE12 Bit Offset */
#define ADC14_IER0_IE12                          ((uint32_t)0x00001000)          /*!< Interrupt enable */
/* ADC14_IER0[IE13] Bits */
#define ADC14_IER0_IE13_OFS                      (13)                            /*!< ADC14IE13 Bit Offset */
#define ADC14_IER0_IE13                          ((uint32_t)0x00002000)          /*!< Interrupt enable */
/* ADC14_IER0[IE14] Bits */
#define ADC14_IER0_IE14_OFS                      (14)                            /*!< ADC14IE14 Bit Offset */
#define ADC14_IER0_IE14                          ((uint32_t)0x00004000)          /*!< Interrupt enable */
/* ADC14_IER0[IE15] Bits */
#define ADC14_IER0_IE15_OFS                      (15)                            /*!< ADC14IE15 Bit Offset */
#define ADC14_IER0_IE15                          ((uint32_t)0x00008000)          /*!< Interrupt enable */
/* ADC14_IER0[IE16] Bits */
#define ADC14_IER0_IE16_OFS                      (16)                            /*!< ADC14IE16 Bit Offset */
#define ADC14_IER0_IE16                          ((uint32_t)0x00010000)          /*!< Interrupt enable */
/* ADC14_IER0[IE17] Bits */
#define ADC14_IER0_IE17_OFS                      (17)                            /*!< ADC14IE17 Bit Offset */
#define ADC14_IER0_IE17                          ((uint32_t)0x00020000)          /*!< Interrupt enable */
/* ADC14_IER0[IE19] Bits */
#define ADC14_IER0_IE19_OFS                      (19)                            /*!< ADC14IE19 Bit Offset */
#define ADC14_IER0_IE19                          ((uint32_t)0x00080000)          /*!< Interrupt enable */
/* ADC14_IER0[IE18] Bits */
#define ADC14_IER0_IE18_OFS                      (18)                            /*!< ADC14IE18 Bit Offset */
#define ADC14_IER0_IE18                          ((uint32_t)0x00040000)          /*!< Interrupt enable */
/* ADC14_IER0[IE20] Bits */
#define ADC14_IER0_IE20_OFS                      (20)                            /*!< ADC14IE20 Bit Offset */
#define ADC14_IER0_IE20                          ((uint32_t)0x00100000)          /*!< Interrupt enable */
/* ADC14_IER0[IE21] Bits */
#define ADC14_IER0_IE21_OFS                      (21)                            /*!< ADC14IE21 Bit Offset */
#define ADC14_IER0_IE21                          ((uint32_t)0x00200000)          /*!< Interrupt enable */
/* ADC14_IER0[IE22] Bits */
#define ADC14_IER0_IE22_OFS                      (22)                            /*!< ADC14IE22 Bit Offset */
#define ADC14_IER0_IE22                          ((uint32_t)0x00400000)          /*!< Interrupt enable */
/* ADC14_IER0[IE23] Bits */
#define ADC14_IER0_IE23_OFS                      (23)                            /*!< ADC14IE23 Bit Offset */
#define ADC14_IER0_IE23                          ((uint32_t)0x00800000)          /*!< Interrupt enable */
/* ADC14_IER0[IE24] Bits */
#define ADC14_IER0_IE24_OFS                      (24)                            /*!< ADC14IE24 Bit Offset */
#define ADC14_IER0_IE24                          ((uint32_t)0x01000000)          /*!< Interrupt enable */
/* ADC14_IER0[IE25] Bits */
#define ADC14_IER0_IE25_OFS                      (25)                            /*!< ADC14IE25 Bit Offset */
#define ADC14_IER0_IE25                          ((uint32_t)0x02000000)          /*!< Interrupt enable */
/* ADC14_IER0[IE26] Bits */
#define ADC14_IER0_IE26_OFS                      (26)                            /*!< ADC14IE26 Bit Offset */
#define ADC14_IER0_IE26                          ((uint32_t)0x04000000)          /*!< Interrupt enable */
/* ADC14_IER0[IE27] Bits */
#define ADC14_IER0_IE27_OFS                      (27)                            /*!< ADC14IE27 Bit Offset */
#define ADC14_IER0_IE27                          ((uint32_t)0x08000000)          /*!< Interrupt enable */
/* ADC14_IER0[IE28] Bits */
#define ADC14_IER0_IE28_OFS                      (28)                            /*!< ADC14IE28 Bit Offset */
#define ADC14_IER0_IE28                          ((uint32_t)0x10000000)          /*!< Interrupt enable */
/* ADC14_IER0[IE29] Bits */
#define ADC14_IER0_IE29_OFS                      (29)                            /*!< ADC14IE29 Bit Offset */
#define ADC14_IER0_IE29                          ((uint32_t)0x20000000)          /*!< Interrupt enable */
/* ADC14_IER0[IE30] Bits */
#define ADC14_IER0_IE30_OFS                      (30)                            /*!< ADC14IE30 Bit Offset */
#define ADC14_IER0_IE30                          ((uint32_t)0x40000000)          /*!< Interrupt enable */
/* ADC14_IER0[IE31] Bits */
#define ADC14_IER0_IE31_OFS                      (31)                            /*!< ADC14IE31 Bit Offset */
#define ADC14_IER0_IE31                          ((uint32_t)0x80000000)          /*!< Interrupt enable */
/* ADC14_IER1[INIE] Bits */
#define ADC14_IER1_INIE_OFS                      ( 1)                            /*!< ADC14INIE Bit Offset */
#define ADC14_IER1_INIE                          ((uint32_t)0x00000002)          /*!< Interrupt enable for ADC14MEMx within comparator window */
/* ADC14_IER1[LOIE] Bits */
#define ADC14_IER1_LOIE_OFS                      ( 2)                            /*!< ADC14LOIE Bit Offset */
#define ADC14_IER1_LOIE                          ((uint32_t)0x00000004)          /*!< Interrupt enable for ADC14MEMx below comparator window */
/* ADC14_IER1[HIIE] Bits */
#define ADC14_IER1_HIIE_OFS                      ( 3)                            /*!< ADC14HIIE Bit Offset */
#define ADC14_IER1_HIIE                          ((uint32_t)0x00000008)          /*!< Interrupt enable for ADC14MEMx above comparator window */
/* ADC14_IER1[OVIE] Bits */
#define ADC14_IER1_OVIE_OFS                      ( 4)                            /*!< ADC14OVIE Bit Offset */
#define ADC14_IER1_OVIE                          ((uint32_t)0x00000010)          /*!< ADC14MEMx overflow-interrupt enable */
/* ADC14_IER1[TOVIE] Bits */
#define ADC14_IER1_TOVIE_OFS                     ( 5)                            /*!< ADC14TOVIE Bit Offset */
#define ADC14_IER1_TOVIE                         ((uint32_t)0x00000020)          /*!< ADC14 conversion-time-overflow interrupt enable */
/* ADC14_IER1[RDYIE] Bits */
#define ADC14_IER1_RDYIE_OFS                     ( 6)                            /*!< ADC14RDYIE Bit Offset */
#define ADC14_IER1_RDYIE                         ((uint32_t)0x00000040)          /*!< ADC14 local buffered reference ready interrupt enable */
/* ADC14_IFGR0[IFG0] Bits */
#define ADC14_IFGR0_IFG0_OFS                     ( 0)                            /*!< ADC14IFG0 Bit Offset */
#define ADC14_IFGR0_IFG0                         ((uint32_t)0x00000001)          /*!< ADC14MEM0 interrupt flag */
/* ADC14_IFGR0[IFG1] Bits */
#define ADC14_IFGR0_IFG1_OFS                     ( 1)                            /*!< ADC14IFG1 Bit Offset */
#define ADC14_IFGR0_IFG1                         ((uint32_t)0x00000002)          /*!< ADC14MEM1 interrupt flag */
/* ADC14_IFGR0[IFG2] Bits */
#define ADC14_IFGR0_IFG2_OFS                     ( 2)                            /*!< ADC14IFG2 Bit Offset */
#define ADC14_IFGR0_IFG2                         ((uint32_t)0x00000004)          /*!< ADC14MEM2 interrupt flag */
/* ADC14_IFGR0[IFG3] Bits */
#define ADC14_IFGR0_IFG3_OFS                     ( 3)                            /*!< ADC14IFG3 Bit Offset */
#define ADC14_IFGR0_IFG3                         ((uint32_t)0x00000008)          /*!< ADC14MEM3 interrupt flag */
/* ADC14_IFGR0[IFG4] Bits */
#define ADC14_IFGR0_IFG4_OFS                     ( 4)                            /*!< ADC14IFG4 Bit Offset */
#define ADC14_IFGR0_IFG4                         ((uint32_t)0x00000010)          /*!< ADC14MEM4 interrupt flag */
/* ADC14_IFGR0[IFG5] Bits */
#define ADC14_IFGR0_IFG5_OFS                     ( 5)                            /*!< ADC14IFG5 Bit Offset */
#define ADC14_IFGR0_IFG5                         ((uint32_t)0x00000020)          /*!< ADC14MEM5 interrupt flag */
/* ADC14_IFGR0[IFG6] Bits */
#define ADC14_IFGR0_IFG6_OFS                     ( 6)                            /*!< ADC14IFG6 Bit Offset */
#define ADC14_IFGR0_IFG6                         ((uint32_t)0x00000040)          /*!< ADC14MEM6 interrupt flag */
/* ADC14_IFGR0[IFG7] Bits */
#define ADC14_IFGR0_IFG7_OFS                     ( 7)                            /*!< ADC14IFG7 Bit Offset */
#define ADC14_IFGR0_IFG7                         ((uint32_t)0x00000080)          /*!< ADC14MEM7 interrupt flag */
/* ADC14_IFGR0[IFG8] Bits */
#define ADC14_IFGR0_IFG8_OFS                     ( 8)                            /*!< ADC14IFG8 Bit Offset */
#define ADC14_IFGR0_IFG8                         ((uint32_t)0x00000100)          /*!< ADC14MEM8 interrupt flag */
/* ADC14_IFGR0[IFG9] Bits */
#define ADC14_IFGR0_IFG9_OFS                     ( 9)                            /*!< ADC14IFG9 Bit Offset */
#define ADC14_IFGR0_IFG9                         ((uint32_t)0x00000200)          /*!< ADC14MEM9 interrupt flag */
/* ADC14_IFGR0[IFG10] Bits */
#define ADC14_IFGR0_IFG10_OFS                    (10)                            /*!< ADC14IFG10 Bit Offset */
#define ADC14_IFGR0_IFG10                        ((uint32_t)0x00000400)          /*!< ADC14MEM10 interrupt flag */
/* ADC14_IFGR0[IFG11] Bits */
#define ADC14_IFGR0_IFG11_OFS                    (11)                            /*!< ADC14IFG11 Bit Offset */
#define ADC14_IFGR0_IFG11                        ((uint32_t)0x00000800)          /*!< ADC14MEM11 interrupt flag */
/* ADC14_IFGR0[IFG12] Bits */
#define ADC14_IFGR0_IFG12_OFS                    (12)                            /*!< ADC14IFG12 Bit Offset */
#define ADC14_IFGR0_IFG12                        ((uint32_t)0x00001000)          /*!< ADC14MEM12 interrupt flag */
/* ADC14_IFGR0[IFG13] Bits */
#define ADC14_IFGR0_IFG13_OFS                    (13)                            /*!< ADC14IFG13 Bit Offset */
#define ADC14_IFGR0_IFG13                        ((uint32_t)0x00002000)          /*!< ADC14MEM13 interrupt flag */
/* ADC14_IFGR0[IFG14] Bits */
#define ADC14_IFGR0_IFG14_OFS                    (14)                            /*!< ADC14IFG14 Bit Offset */
#define ADC14_IFGR0_IFG14                        ((uint32_t)0x00004000)          /*!< ADC14MEM14 interrupt flag */
/* ADC14_IFGR0[IFG15] Bits */
#define ADC14_IFGR0_IFG15_OFS                    (15)                            /*!< ADC14IFG15 Bit Offset */
#define ADC14_IFGR0_IFG15                        ((uint32_t)0x00008000)          /*!< ADC14MEM15 interrupt flag */
/* ADC14_IFGR0[IFG16] Bits */
#define ADC14_IFGR0_IFG16_OFS                    (16)                            /*!< ADC14IFG16 Bit Offset */
#define ADC14_IFGR0_IFG16                        ((uint32_t)0x00010000)          /*!< ADC14MEM16 interrupt flag */
/* ADC14_IFGR0[IFG17] Bits */
#define ADC14_IFGR0_IFG17_OFS                    (17)                            /*!< ADC14IFG17 Bit Offset */
#define ADC14_IFGR0_IFG17                        ((uint32_t)0x00020000)          /*!< ADC14MEM17 interrupt flag */
/* ADC14_IFGR0[IFG18] Bits */
#define ADC14_IFGR0_IFG18_OFS                    (18)                            /*!< ADC14IFG18 Bit Offset */
#define ADC14_IFGR0_IFG18                        ((uint32_t)0x00040000)          /*!< ADC14MEM18 interrupt flag */
/* ADC14_IFGR0[IFG19] Bits */
#define ADC14_IFGR0_IFG19_OFS                    (19)                            /*!< ADC14IFG19 Bit Offset */
#define ADC14_IFGR0_IFG19                        ((uint32_t)0x00080000)          /*!< ADC14MEM19 interrupt flag */
/* ADC14_IFGR0[IFG20] Bits */
#define ADC14_IFGR0_IFG20_OFS                    (20)                            /*!< ADC14IFG20 Bit Offset */
#define ADC14_IFGR0_IFG20                        ((uint32_t)0x00100000)          /*!< ADC14MEM20 interrupt flag */
/* ADC14_IFGR0[IFG21] Bits */
#define ADC14_IFGR0_IFG21_OFS                    (21)                            /*!< ADC14IFG21 Bit Offset */
#define ADC14_IFGR0_IFG21                        ((uint32_t)0x00200000)          /*!< ADC14MEM21 interrupt flag */
/* ADC14_IFGR0[IFG22] Bits */
#define ADC14_IFGR0_IFG22_OFS                    (22)                            /*!< ADC14IFG22 Bit Offset */
#define ADC14_IFGR0_IFG22                        ((uint32_t)0x00400000)          /*!< ADC14MEM22 interrupt flag */
/* ADC14_IFGR0[IFG23] Bits */
#define ADC14_IFGR0_IFG23_OFS                    (23)                            /*!< ADC14IFG23 Bit Offset */
#define ADC14_IFGR0_IFG23                        ((uint32_t)0x00800000)          /*!< ADC14MEM23 interrupt flag */
/* ADC14_IFGR0[IFG24] Bits */
#define ADC14_IFGR0_IFG24_OFS                    (24)                            /*!< ADC14IFG24 Bit Offset */
#define ADC14_IFGR0_IFG24                        ((uint32_t)0x01000000)          /*!< ADC14MEM24 interrupt flag */
/* ADC14_IFGR0[IFG25] Bits */
#define ADC14_IFGR0_IFG25_OFS                    (25)                            /*!< ADC14IFG25 Bit Offset */
#define ADC14_IFGR0_IFG25                        ((uint32_t)0x02000000)          /*!< ADC14MEM25 interrupt flag */
/* ADC14_IFGR0[IFG26] Bits */
#define ADC14_IFGR0_IFG26_OFS                    (26)                            /*!< ADC14IFG26 Bit Offset */
#define ADC14_IFGR0_IFG26                        ((uint32_t)0x04000000)          /*!< ADC14MEM26 interrupt flag */
/* ADC14_IFGR0[IFG27] Bits */
#define ADC14_IFGR0_IFG27_OFS                    (27)                            /*!< ADC14IFG27 Bit Offset */
#define ADC14_IFGR0_IFG27                        ((uint32_t)0x08000000)          /*!< ADC14MEM27 interrupt flag */
/* ADC14_IFGR0[IFG28] Bits */
#define ADC14_IFGR0_IFG28_OFS                    (28)                            /*!< ADC14IFG28 Bit Offset */
#define ADC14_IFGR0_IFG28                        ((uint32_t)0x10000000)          /*!< ADC14MEM28 interrupt flag */
/* ADC14_IFGR0[IFG29] Bits */
#define ADC14_IFGR0_IFG29_OFS                    (29)                            /*!< ADC14IFG29 Bit Offset */
#define ADC14_IFGR0_IFG29                        ((uint32_t)0x20000000)          /*!< ADC14MEM29 interrupt flag */
/* ADC14_IFGR0[IFG30] Bits */
#define ADC14_IFGR0_IFG30_OFS                    (30)                            /*!< ADC14IFG30 Bit Offset */
#define ADC14_IFGR0_IFG30                        ((uint32_t)0x40000000)          /*!< ADC14MEM30 interrupt flag */
/* ADC14_IFGR0[IFG31] Bits */
#define ADC14_IFGR0_IFG31_OFS                    (31)                            /*!< ADC14IFG31 Bit Offset */
#define ADC14_IFGR0_IFG31                        ((uint32_t)0x80000000)          /*!< ADC14MEM31 interrupt flag */
/* ADC14_IFGR1[INIFG] Bits */
#define ADC14_IFGR1_INIFG_OFS                    ( 1)                            /*!< ADC14INIFG Bit Offset */
#define ADC14_IFGR1_INIFG                        ((uint32_t)0x00000002)          /*!< Interrupt flag for ADC14MEMx within comparator window */
/* ADC14_IFGR1[LOIFG] Bits */
#define ADC14_IFGR1_LOIFG_OFS                    ( 2)                            /*!< ADC14LOIFG Bit Offset */
#define ADC14_IFGR1_LOIFG                        ((uint32_t)0x00000004)          /*!< Interrupt flag for ADC14MEMx below comparator window */
/* ADC14_IFGR1[HIIFG] Bits */
#define ADC14_IFGR1_HIIFG_OFS                    ( 3)                            /*!< ADC14HIIFG Bit Offset */
#define ADC14_IFGR1_HIIFG                        ((uint32_t)0x00000008)          /*!< Interrupt flag for ADC14MEMx above comparator window */
/* ADC14_IFGR1[OVIFG] Bits */
#define ADC14_IFGR1_OVIFG_OFS                    ( 4)                            /*!< ADC14OVIFG Bit Offset */
#define ADC14_IFGR1_OVIFG                        ((uint32_t)0x00000010)          /*!< ADC14MEMx overflow interrupt flag */
/* ADC14_IFGR1[TOVIFG] Bits */
#define ADC14_IFGR1_TOVIFG_OFS                   ( 5)                            /*!< ADC14TOVIFG Bit Offset */
#define ADC14_IFGR1_TOVIFG                       ((uint32_t)0x00000020)          /*!< ADC14 conversion time overflow interrupt flag */
/* ADC14_IFGR1[RDYIFG] Bits */
#define ADC14_IFGR1_RDYIFG_OFS                   ( 6)                            /*!< ADC14RDYIFG Bit Offset */
#define ADC14_IFGR1_RDYIFG                       ((uint32_t)0x00000040)          /*!< ADC14 local buffered reference ready interrupt flag */
/* ADC14_CLRIFGR0[CLRIFG0] Bits */
#define ADC14_CLRIFGR0_CLRIFG0_OFS               ( 0)                            /*!< CLRADC14IFG0 Bit Offset */
#define ADC14_CLRIFGR0_CLRIFG0                   ((uint32_t)0x00000001)          /*!< clear ADC14IFG0 */
/* ADC14_CLRIFGR0[CLRIFG1] Bits */
#define ADC14_CLRIFGR0_CLRIFG1_OFS               ( 1)                            /*!< CLRADC14IFG1 Bit Offset */
#define ADC14_CLRIFGR0_CLRIFG1                   ((uint32_t)0x00000002)          /*!< clear ADC14IFG1 */
/* ADC14_CLRIFGR0[CLRIFG2] Bits */
#define ADC14_CLRIFGR0_CLRIFG2_OFS               ( 2)                            /*!< CLRADC14IFG2 Bit Offset */
#define ADC14_CLRIFGR0_CLRIFG2                   ((uint32_t)0x00000004)          /*!< clear ADC14IFG2 */
/* ADC14_CLRIFGR0[CLRIFG3] Bits */
#define ADC14_CLRIFGR0_CLRIFG3_OFS               ( 3)                            /*!< CLRADC14IFG3 Bit Offset */
#define ADC14_CLRIFGR0_CLRIFG3                   ((uint32_t)0x00000008)          /*!< clear ADC14IFG3 */
/* ADC14_CLRIFGR0[CLRIFG4] Bits */
#define ADC14_CLRIFGR0_CLRIFG4_OFS               ( 4)                            /*!< CLRADC14IFG4 Bit Offset */
#define ADC14_CLRIFGR0_CLRIFG4                   ((uint32_t)0x00000010)          /*!< clear ADC14IFG4 */
/* ADC14_CLRIFGR0[CLRIFG5] Bits */
#define ADC14_CLRIFGR0_CLRIFG5_OFS               ( 5)                            /*!< CLRADC14IFG5 Bit Offset */
#define ADC14_CLRIFGR0_CLRIFG5                   ((uint32_t)0x00000020)          /*!< clear ADC14IFG5 */
/* ADC14_CLRIFGR0[CLRIFG6] Bits */
#define ADC14_CLRIFGR0_CLRIFG6_OFS               ( 6)                            /*!< CLRADC14IFG6 Bit Offset */
#define ADC14_CLRIFGR0_CLRIFG6                   ((uint32_t)0x00000040)          /*!< clear ADC14IFG6 */
/* ADC14_CLRIFGR0[CLRIFG7] Bits */
#define ADC14_CLRIFGR0_CLRIFG7_OFS               ( 7)                            /*!< CLRADC14IFG7 Bit Offset */
#define ADC14_CLRIFGR0_CLRIFG7                   ((uint32_t)0x00000080)          /*!< clear ADC14IFG7 */
/* ADC14_CLRIFGR0[CLRIFG8] Bits */
#define ADC14_CLRIFGR0_CLRIFG8_OFS               ( 8)                            /*!< CLRADC14IFG8 Bit Offset */
#define ADC14_CLRIFGR0_CLRIFG8                   ((uint32_t)0x00000100)          /*!< clear ADC14IFG8 */
/* ADC14_CLRIFGR0[CLRIFG9] Bits */
#define ADC14_CLRIFGR0_CLRIFG9_OFS               ( 9)                            /*!< CLRADC14IFG9 Bit Offset */
#define ADC14_CLRIFGR0_CLRIFG9                   ((uint32_t)0x00000200)          /*!< clear ADC14IFG9 */
/* ADC14_CLRIFGR0[CLRIFG10] Bits */
#define ADC14_CLRIFGR0_CLRIFG10_OFS              (10)                            /*!< CLRADC14IFG10 Bit Offset */
#define ADC14_CLRIFGR0_CLRIFG10                  ((uint32_t)0x00000400)          /*!< clear ADC14IFG10 */
/* ADC14_CLRIFGR0[CLRIFG11] Bits */
#define ADC14_CLRIFGR0_CLRIFG11_OFS              (11)                            /*!< CLRADC14IFG11 Bit Offset */
#define ADC14_CLRIFGR0_CLRIFG11                  ((uint32_t)0x00000800)          /*!< clear ADC14IFG11 */
/* ADC14_CLRIFGR0[CLRIFG12] Bits */
#define ADC14_CLRIFGR0_CLRIFG12_OFS              (12)                            /*!< CLRADC14IFG12 Bit Offset */
#define ADC14_CLRIFGR0_CLRIFG12                  ((uint32_t)0x00001000)          /*!< clear ADC14IFG12 */
/* ADC14_CLRIFGR0[CLRIFG13] Bits */
#define ADC14_CLRIFGR0_CLRIFG13_OFS              (13)                            /*!< CLRADC14IFG13 Bit Offset */
#define ADC14_CLRIFGR0_CLRIFG13                  ((uint32_t)0x00002000)          /*!< clear ADC14IFG13 */
/* ADC14_CLRIFGR0[CLRIFG14] Bits */
#define ADC14_CLRIFGR0_CLRIFG14_OFS              (14)                            /*!< CLRADC14IFG14 Bit Offset */
#define ADC14_CLRIFGR0_CLRIFG14                  ((uint32_t)0x00004000)          /*!< clear ADC14IFG14 */
/* ADC14_CLRIFGR0[CLRIFG15] Bits */
#define ADC14_CLRIFGR0_CLRIFG15_OFS              (15)                            /*!< CLRADC14IFG15 Bit Offset */
#define ADC14_CLRIFGR0_CLRIFG15                  ((uint32_t)0x00008000)          /*!< clear ADC14IFG15 */
/* ADC14_CLRIFGR0[CLRIFG16] Bits */
#define ADC14_CLRIFGR0_CLRIFG16_OFS              (16)                            /*!< CLRADC14IFG16 Bit Offset */
#define ADC14_CLRIFGR0_CLRIFG16                  ((uint32_t)0x00010000)          /*!< clear ADC14IFG16 */
/* ADC14_CLRIFGR0[CLRIFG17] Bits */
#define ADC14_CLRIFGR0_CLRIFG17_OFS              (17)                            /*!< CLRADC14IFG17 Bit Offset */
#define ADC14_CLRIFGR0_CLRIFG17                  ((uint32_t)0x00020000)          /*!< clear ADC14IFG17 */
/* ADC14_CLRIFGR0[CLRIFG18] Bits */
#define ADC14_CLRIFGR0_CLRIFG18_OFS              (18)                            /*!< CLRADC14IFG18 Bit Offset */
#define ADC14_CLRIFGR0_CLRIFG18                  ((uint32_t)0x00040000)          /*!< clear ADC14IFG18 */
/* ADC14_CLRIFGR0[CLRIFG19] Bits */
#define ADC14_CLRIFGR0_CLRIFG19_OFS              (19)                            /*!< CLRADC14IFG19 Bit Offset */
#define ADC14_CLRIFGR0_CLRIFG19                  ((uint32_t)0x00080000)          /*!< clear ADC14IFG19 */
/* ADC14_CLRIFGR0[CLRIFG20] Bits */
#define ADC14_CLRIFGR0_CLRIFG20_OFS              (20)                            /*!< CLRADC14IFG20 Bit Offset */
#define ADC14_CLRIFGR0_CLRIFG20                  ((uint32_t)0x00100000)          /*!< clear ADC14IFG20 */
/* ADC14_CLRIFGR0[CLRIFG21] Bits */
#define ADC14_CLRIFGR0_CLRIFG21_OFS              (21)                            /*!< CLRADC14IFG21 Bit Offset */
#define ADC14_CLRIFGR0_CLRIFG21                  ((uint32_t)0x00200000)          /*!< clear ADC14IFG21 */
/* ADC14_CLRIFGR0[CLRIFG22] Bits */
#define ADC14_CLRIFGR0_CLRIFG22_OFS              (22)                            /*!< CLRADC14IFG22 Bit Offset */
#define ADC14_CLRIFGR0_CLRIFG22                  ((uint32_t)0x00400000)          /*!< clear ADC14IFG22 */
/* ADC14_CLRIFGR0[CLRIFG23] Bits */
#define ADC14_CLRIFGR0_CLRIFG23_OFS              (23)                            /*!< CLRADC14IFG23 Bit Offset */
#define ADC14_CLRIFGR0_CLRIFG23                  ((uint32_t)0x00800000)          /*!< clear ADC14IFG23 */
/* ADC14_CLRIFGR0[CLRIFG24] Bits */
#define ADC14_CLRIFGR0_CLRIFG24_OFS              (24)                            /*!< CLRADC14IFG24 Bit Offset */
#define ADC14_CLRIFGR0_CLRIFG24                  ((uint32_t)0x01000000)          /*!< clear ADC14IFG24 */
/* ADC14_CLRIFGR0[CLRIFG25] Bits */
#define ADC14_CLRIFGR0_CLRIFG25_OFS              (25)                            /*!< CLRADC14IFG25 Bit Offset */
#define ADC14_CLRIFGR0_CLRIFG25                  ((uint32_t)0x02000000)          /*!< clear ADC14IFG25 */
/* ADC14_CLRIFGR0[CLRIFG26] Bits */
#define ADC14_CLRIFGR0_CLRIFG26_OFS              (26)                            /*!< CLRADC14IFG26 Bit Offset */
#define ADC14_CLRIFGR0_CLRIFG26                  ((uint32_t)0x04000000)          /*!< clear ADC14IFG26 */
/* ADC14_CLRIFGR0[CLRIFG27] Bits */
#define ADC14_CLRIFGR0_CLRIFG27_OFS              (27)                            /*!< CLRADC14IFG27 Bit Offset */
#define ADC14_CLRIFGR0_CLRIFG27                  ((uint32_t)0x08000000)          /*!< clear ADC14IFG27 */
/* ADC14_CLRIFGR0[CLRIFG28] Bits */
#define ADC14_CLRIFGR0_CLRIFG28_OFS              (28)                            /*!< CLRADC14IFG28 Bit Offset */
#define ADC14_CLRIFGR0_CLRIFG28                  ((uint32_t)0x10000000)          /*!< clear ADC14IFG28 */
/* ADC14_CLRIFGR0[CLRIFG29] Bits */
#define ADC14_CLRIFGR0_CLRIFG29_OFS              (29)                            /*!< CLRADC14IFG29 Bit Offset */
#define ADC14_CLRIFGR0_CLRIFG29                  ((uint32_t)0x20000000)          /*!< clear ADC14IFG29 */
/* ADC14_CLRIFGR0[CLRIFG30] Bits */
#define ADC14_CLRIFGR0_CLRIFG30_OFS              (30)                            /*!< CLRADC14IFG30 Bit Offset */
#define ADC14_CLRIFGR0_CLRIFG30                  ((uint32_t)0x40000000)          /*!< clear ADC14IFG30 */
/* ADC14_CLRIFGR0[CLRIFG31] Bits */
#define ADC14_CLRIFGR0_CLRIFG31_OFS              (31)                            /*!< CLRADC14IFG31 Bit Offset */
#define ADC14_CLRIFGR0_CLRIFG31                  ((uint32_t)0x80000000)          /*!< clear ADC14IFG31 */
/* ADC14_CLRIFGR1[CLRINIFG] Bits */
#define ADC14_CLRIFGR1_CLRINIFG_OFS              ( 1)                            /*!< CLRADC14INIFG Bit Offset */
#define ADC14_CLRIFGR1_CLRINIFG                  ((uint32_t)0x00000002)          /*!< clear ADC14INIFG */
/* ADC14_CLRIFGR1[CLRLOIFG] Bits */
#define ADC14_CLRIFGR1_CLRLOIFG_OFS              ( 2)                            /*!< CLRADC14LOIFG Bit Offset */
#define ADC14_CLRIFGR1_CLRLOIFG                  ((uint32_t)0x00000004)          /*!< clear ADC14LOIFG */
/* ADC14_CLRIFGR1[CLRHIIFG] Bits */
#define ADC14_CLRIFGR1_CLRHIIFG_OFS              ( 3)                            /*!< CLRADC14HIIFG Bit Offset */
#define ADC14_CLRIFGR1_CLRHIIFG                  ((uint32_t)0x00000008)          /*!< clear ADC14HIIFG */
/* ADC14_CLRIFGR1[CLROVIFG] Bits */
#define ADC14_CLRIFGR1_CLROVIFG_OFS              ( 4)                            /*!< CLRADC14OVIFG Bit Offset */
#define ADC14_CLRIFGR1_CLROVIFG                  ((uint32_t)0x00000010)          /*!< clear ADC14OVIFG */
/* ADC14_CLRIFGR1[CLRTOVIFG] Bits */
#define ADC14_CLRIFGR1_CLRTOVIFG_OFS             ( 5)                            /*!< CLRADC14TOVIFG Bit Offset */
#define ADC14_CLRIFGR1_CLRTOVIFG                 ((uint32_t)0x00000020)          /*!< clear ADC14TOVIFG */
/* ADC14_CLRIFGR1[CLRRDYIFG] Bits */
#define ADC14_CLRIFGR1_CLRRDYIFG_OFS             ( 6)                            /*!< CLRADC14RDYIFG Bit Offset */
#define ADC14_CLRIFGR1_CLRRDYIFG                 ((uint32_t)0x00000040)          /*!< clear ADC14RDYIFG */
