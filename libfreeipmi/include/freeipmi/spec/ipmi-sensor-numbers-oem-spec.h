/*
 * Copyright (C) 2003-2014 FreeIPMI Core Team
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * 
 */

#ifndef IPMI_SENSOR_NUMBERS_OEM_SPEC_H
#define IPMI_SENSOR_NUMBERS_OEM_SPEC_H

#ifdef __cplusplus
extern "C" {
#endif

/*******************************************
 * Dell                                    *
 *******************************************/

/*
 * Dell Poweredge R610
 * Dell Poweredge R710
 */

#define IPMI_SENSOR_NUMBER_OEM_DELL_ECC_CORRECTABLE_ERRORS                              0x01
#define IPMI_SENSOR_NUMBER_OEM_DELL_ECC_UNCORRECTABLE_ERRORS                            0x02
#define IPMI_SENSOR_NUMBER_OEM_DELL_IO_CHANNEL_CHECK                                    0x03
#define IPMI_SENSOR_NUMBER_OEM_DELL_PCI_PARITY_ERROR                                    0x04
#define IPMI_SENSOR_NUMBER_OEM_DELL_PCI_SYSTEM_ERROR                                    0x05
#define IPMI_SENSOR_NUMBER_OEM_DELL_EVENT_LOGGING_FOR_CORRECTABLE_ECC_EVENTS_DISABLED   0x06
#define IPMI_SENSOR_NUMBER_OEM_DELL_EVENT_LOGGING_DISABLED                              0x07
#define IPMI_SENSOR_NUMBER_OEM_DELL_UNKNOWN_ERROR                                       0x08
#define IPMI_SENSOR_NUMBER_OEM_DELL_CPU_INTERNAL_ERROR                                  0x09
#define IPMI_SENSOR_NUMBER_OEM_DELL_CPU_PROTOCOL_ERROR                                  0x0A
#define IPMI_SENSOR_NUMBER_OEM_DELL_CPU_BUS_PERR                                        0x0B
#define IPMI_SENSOR_NUMBER_OEM_DELL_CPU_BUS_INITIALIZATION_ERROR                        0x0C
#define IPMI_SENSOR_NUMBER_OEM_DELL_CPU_MACHINE_CHECK_ERROR                             0x0D
#define IPMI_SENSOR_NUMBER_OEM_DELL_MEMORY_SPARE                                        0x11
#define IPMI_SENSOR_NUMBER_OEM_DELL_MEMORY_MIRROR                                       0x12
#define IPMI_SENSOR_NUMBER_OEM_DELL_MEMORY_RAID                                         0x13
#define IPMI_SENSOR_NUMBER_OEM_DELL_MEMORY_HOT_ADD                                      0x14
#define IPMI_SENSOR_NUMBER_OEM_DELL_MEMORY_HOT_REMOVE                                   0x15
#define IPMI_SENSOR_NUMBER_OEM_DELL_MEMORY_HOT_FAILURE                                  0x16
#define IPMI_SENSOR_NUMBER_OEM_DELL_MEMORY_REDUNDANCY_REGAINED                          0x17
#define IPMI_SENSOR_NUMBER_OEM_DELL_FATAL_PCI_EXPRESS_ERRORS                            0x18
#define IPMI_SENSOR_NUMBER_OEM_DELL_CHIPSET_ERROR                                       0x19
#define IPMI_SENSOR_NUMBER_OEM_DELL_ERROR_REGISTER_POINTER                              0x1A
#define IPMI_SENSOR_NUMBER_OEM_DELL_MEMORY_CORRECTABLE_ECC_WARNING_OR_CRITICAL_EXCEEDED 0x1B
#define IPMI_SENSOR_NUMBER_OEM_DELL_CRC_MEMORY_ERROR                                    0x1C
#define IPMI_SENSOR_NUMBER_OEM_DELL_USB_OVER_CURRENT                                    0x1D
#define IPMI_SENSOR_NUMBER_OEM_DELL_POST_FATAL_ERROR                                    0x1E
#define IPMI_SENSOR_NUMBER_OEM_DELL_INCOMPATIBLE_BMC_FIRMWARE                           0x1F
#define IPMI_SENSOR_NUMBER_OEM_DELL_MEM_OVERTEMP                                        0x20
#define IPMI_SENSOR_NUMBER_OEM_DELL_MEM_FATAL_SB_CRC                                    0x21
#define IPMI_SENSOR_NUMBER_OEM_DELL_MEM_FATAL_NB_CRC                                    0x22
#define IPMI_SENSOR_NUMBER_OEM_DELL_OS_WATCHDOG_TIMER                                   0x23
#define IPMI_SENSOR_NUMBER_OEM_DELL_LINK_TUNING_ERROR                                   0x24
#define IPMI_SENSOR_NUMBER_OEM_DELL_LT_FLEXADDR                                         0x25
#define IPMI_SENSOR_NUMBER_OEM_DELL_NON_FATAL_PCI_EXPRESS_ERRORS                        0x26
#define IPMI_SENSOR_NUMBER_OEM_DELL_FATAL_IO_ERROR                                      0x27
#define IPMI_SENSOR_NUMBER_OEM_DELL_MSR_INFO_LOG                                        0x28
#define IPMI_SENSOR_NUMBER_OEM_DELL_QPI_LINK_ERROR_SENSOR                               0x29
#define IPMI_SENSOR_NUMBER_OEM_DELL_TXT_SX_SENTER_COMMAND_ERROR                         0x2A
#define IPMI_SENSOR_NUMBER_OEM_DELL_IDPT_MEMORY_ONLINE_FAILURE                          0x2B

/*
 * Dell Poweredge C410x
 */

#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_FB_TEMP      0x17
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_BOARD_TEMP_1 0x01
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_BOARD_TEMP_2 0x02
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_BOARD_TEMP_3 0x03
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_BOARD_TEMP_4 0x04
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_BOARD_TEMP_5 0x05
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_BOARD_TEMP_6 0x06
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_PCIE_1_TEMP  0x07
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_PCIE_2_TEMP  0x08
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_PCIE_3_TEMP  0x09
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_PCIE_4_TEMP  0x0A
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_PCIE_5_TEMP  0x0B
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_PCIE_6_TEMP  0x0C
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_PCIE_7_TEMP  0x0D
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_PCIE_8_TEMP  0x0E
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_PCIE_9_TEMP  0x0F
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_PCIE_10_TEMP 0x10
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_PCIE_11_TEMP 0x11
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_PCIE_12_TEMP 0x12
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_PCIE_13_TEMP 0x13
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_PCIE_14_TEMP 0x14
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_PCIE_15_TEMP 0x15
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_PCIE_16_TEMP 0x16
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_PCIE_1_WATT  0x50
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_PCIE_2_WATT  0x51
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_PCIE_3_WATT  0x52
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_PCIE_4_WATT  0x53
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_PCIE_5_WATT  0x54
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_PCIE_6_WATT  0x55
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_PCIE_7_WATT  0x56
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_PCIE_8_WATT  0x57
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_PCIE_9_WATT  0x58
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_PCIE_10_WATT 0x59
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_PCIE_11_WATT 0x5A
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_PCIE_12_WATT 0x5B
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_PCIE_13_WATT 0x5C
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_PCIE_14_WATT 0x5D
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_PCIE_15_WATT 0x5E
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_PCIE_16_WATT 0x5F
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_PSU_1_WATT   0x60
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_PSU_2_WATT   0x61
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_PSU_3_WATT   0x62
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_PSU_4_WATT   0x63
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_FAN_1        0x80
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_FAN_2        0x81
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_FAN_3        0x82
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_FAN_4        0x83
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_FAN_5        0x84
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_FAN_6        0x85
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_FAN_7        0x86
#define IPMI_SENSOR_NUMBER_OEM_DELL_C410X_FAN_8        0x87

/*******************************************
 * Intel                                   *
 *******************************************/

/*
 * Intel S5500WB/Penguin Computing Relion 700
 */

#define IPMI_SENSOR_NUMBER_OEM_INTEL_PCI_SENSOR              0x03
#define IPMI_SENSOR_NUMBER_OEM_INTEL_PCIE_FATAL_SENSOR       0x04
#define IPMI_SENSOR_NUMBER_OEM_INTEL_PCIE_CORRECTABLE_SENSOR 0x05

#define IPMI_SENSOR_NUMBER_OEM_INTEL_QPI_CORRECTABLE_SENSOR  0x06
#define IPMI_SENSOR_NUMBER_OEM_INTEL_QPI_NON_FATAL_SENSOR    0x07
/* QPI_FATAL_SENSOR_A and QPI_FATAL_SENSOR_B are identical, they are
 * logical extensions to provide additional offset values
 */
#define IPMI_SENSOR_NUMBER_OEM_INTEL_QPI_FATAL_SENSOR_A      0x17
#define IPMI_SENSOR_NUMBER_OEM_INTEL_QPI_FATAL_SENSOR_B      0x18

#define IPMI_SENSOR_NUMBER_OEM_INTEL_BIOS_POST_ERROR         0x06

#define IPMI_SENSOR_NUMBER_OEM_INTEL_RAS_STATUS_INFORMATION_FOR_MEMORY_MIRRORING_MIRRORING_MODE  0x01
#define IPMI_SENSOR_NUMBER_OEM_INTEL_MEMORY_ECC_ERROR                                            0x02
#define IPMI_SENSOR_NUMBER_OEM_INTEL_RAS_STATUS_INFORMATION_FOR_MEMORY_MIRRORING_SPARING_MODE    0x11
#define IPMI_SENSOR_NUMBER_OEM_INTEL_MEMORY_MIRRORING_RAS_CONFIGURATION_INFORMATION              0x12
#define IPMI_SENSOR_NUMBER_OEM_INTEL_MEMORY_SPARING_RAS_CONFIGURATION_INFORMATION                0x13
#define IPMI_SENSOR_NUMBER_OEM_INTEL_MEMORY_PARITY_ERROR                                         0x14

/*
 * Quanta QSSC-S4R/Appro GB812X-CN
 * (Quanta motherboard maintains Intel manufacturer ID)
 */
/* achu: Few same as above, but to clearly differentiate motherboards, duplicate them */

#define IPMI_SENSOR_NUMBER_OEM_INTEL_QUANTA_QSSC_S4R_PCI_SENSOR              0x03
#define IPMI_SENSOR_NUMBER_OEM_INTEL_QUANTA_QSSC_S4R_PCIE_FATAL_SENSOR       0x04
#define IPMI_SENSOR_NUMBER_OEM_INTEL_QUANTA_QSSC_S4R_PCIE_CORRECTABLE_SENSOR 0x05

#define IPMI_SENSOR_NUMBER_OEM_INTEL_QUANTA_QSSC_S4R_QPI_CORRECTABLE_SENSOR  0x06
#define IPMI_SENSOR_NUMBER_OEM_INTEL_QUANTA_QSSC_S4R_QPI_NON_FATAL_SENSOR    0x07
/* QPI_FATAL_SENSOR_A and QPI_FATAL_SENSOR_B are identical, they are
 * logical extensions to provide additional offset values
 */
#define IPMI_SENSOR_NUMBER_OEM_INTEL_QUANTA_QSSC_S4R_QPI_FATAL_SENSOR_A      0x17
#define IPMI_SENSOR_NUMBER_OEM_INTEL_QUANTA_QSSC_S4R_QPI_FATAL_SENSOR_B      0x18

#define IPMI_SENSOR_NUMBER_OEM_INTEL_QUANTA_QSSC_S4R_BIOS_POST_ERROR         0x06

#define IPMI_SENSOR_NUMBER_OEM_INTEL_QUANTA_QSSC_S4R_RAS_STATE_INFORMATION_FOR_MEMORY_MIRRORING_MIRRORING_MODE 0x01
#define IPMI_SENSOR_NUMBER_OEM_INTEL_QUANTA_QSSC_S4R_MEMORY_ECC_ERROR                                          0x02
#define IPMI_SENSOR_NUMBER_OEM_INTEL_QUANTA_QSSC_S4R_MEMORY_MISMATCH_CONFIGURATION_ERROR                       0x03
#define IPMI_SENSOR_NUMBER_OEM_INTEL_QUANTA_QSSC_S4R_SMI_LINK_CRC_ERROR_PERSISTENT                             0x05
#define IPMI_SENSOR_NUMBER_OEM_INTEL_QUANTA_QSSC_S4R_PATROL_SCRUB_ERROR                                        0x0B
#define IPMI_SENSOR_NUMBER_OEM_INTEL_QUANTA_QSSC_S4R_SMI_LINK_CRC_ERROR_UNCORRECTABLE                          0x0C
#define IPMI_SENSOR_NUMBER_OEM_INTEL_QUANTA_QSSC_S4R_RAS_STATE_INFORMATION_FOR_MEMORY_MIRRORING_SPARING_MODE   0x11
#define IPMI_SENSOR_NUMBER_OEM_INTEL_QUANTA_QSSC_S4R_MEMORY_MIRRORING_RAS_CONFIGURATION_INFORMATION            0x12
#define IPMI_SENSOR_NUMBER_OEM_INTEL_QUANTA_QSSC_S4R_MEMORY_SPARING_RAS_CONFIGURATION_INFORMATION              0x13
#define IPMI_SENSOR_NUMBER_OEM_INTEL_QUANTA_QSSC_S4R_MEMORY_BOARD_STATE                                        0x20

/*
 * Intel S2600JF/Appro 512X
 */
/* achu: Few same as above, but to clearly differentiate motherboards, duplicate them */
/* achu: note a typo, memory ras configuration status & memory ecc error both 2, not sure why in doc */
#define IPMI_SENSOR_NUMBER_OEM_INTEL_S2600JF_MIRRORING_REDUNDANCY_STATE      0x01
#define IPMI_SENSOR_NUMBER_OEM_INTEL_S2600JF_MEMORY_RAS_CONFIGURATION_STATUS 0x02
#define IPMI_SENSOR_NUMBER_OEM_INTEL_S2600JF_MEMORY_ECC_ERROR                0x02
#define IPMI_SENSOR_NUMBER_OEM_INTEL_S2600JF_LEGACY_PCI_ERROR                0x03
#define IPMI_SENSOR_NUMBER_OEM_INTEL_S2600JF_PCIE_FATAL_ERROR                0x04
#define IPMI_SENSOR_NUMBER_OEM_INTEL_S2600JF_PCIE_CORRECTABLE_ERROR          0x05
#define IPMI_SENSOR_NUMBER_OEM_INTEL_S2600JF_BIOS_POST_ERROR                 0x06
/* not a typo, also 0x06 */
#define IPMI_SENSOR_NUMBER_OEM_INTEL_S2600JF_QPI_CORRECTABLE_ERRORS          0x06
#define IPMI_SENSOR_NUMBER_OEM_INTEL_S2600JF_OPI_FATAL_ERROR                 0x07
#define IPMI_SENSOR_NUMBER_OEM_INTEL_S2600JF_CHIPSET_PROPRIETARY             0x08
#define IPMI_SENSOR_NUMBER_OEM_INTEL_S2600JF_QPI_LINK_WIDTH_REDUCED          0x09
#define IPMI_SENSOR_NUMBER_OEM_INTEL_S2600JF_MEMORY_ERROR_EXTENSION          0x10
#define IPMI_SENSOR_NUMBER_OEM_INTEL_S2600JF_SPARING_REDUNDANCY_STATE        0x11
#define IPMI_SENSOR_NUMBER_OEM_INTEL_S2600JF_MEMORY_RAS_MODE_SELECT          0x12
#define IPMI_SENSOR_NUMBER_OEM_INTEL_S2600JF_MEMORY_PARITY_ERROR             0x13
#define IPMI_SENSOR_NUMBER_OEM_INTEL_S2600JF_PCIE_FATAL_ERROR_2              0x14
/* not a typo, jumps to 0x17 */
#define IPMI_SENSOR_NUMBER_OEM_INTEL_S2600JF_OPI_FATAL_ERROR_2               0x17
#define IPMI_SENSOR_NUMBER_OEM_INTEL_S2600JF_SYSTEM_EVENT                    0x83

/*
 * Intel Windmill
 * (Quanta Winterfell)
 * (Wiwynn Windmill)
 */
#define IPMI_SENSOR_NUMBER_OEM_INTEL_WINDMILL_ME_FW_HEALTH_SENSOR                       0x17
#define IPMI_SENSOR_NUMBER_OEM_INTEL_WINDMILL_PROC_HOT_EXTENDED_SENSOR                  0x3C
#define IPMI_SENSOR_NUMBER_OEM_INTEL_WINDMILL_MEM_HOT_EXTENDED_SENSOR                   0x3D
#define IPMI_SENSOR_NUMBER_OEM_INTEL_WINDMILL_MACHINE_CHECK_ERROR_SENSOR                0x40
#define IPMI_SENSOR_NUMBER_OEM_INTEL_WINDMILL_PCIE_ERROR_SENSOR                         0x41
#define IPMI_SENSOR_NUMBER_OEM_INTEL_WINDMILL_POST_ERROR_SENSOR                         0x2B
#define IPMI_SENSOR_NUMBER_OEM_INTEL_WINDMILL_OTHER_IIO_ERROR_SENSOR                    0x43
#define IPMI_SENSOR_NUMBER_OEM_INTEL_WINDMILL_CPU_SEL_STATUS                            0x5F
#define IPMI_SENSOR_NUMBER_OEM_INTEL_WINDMILL_MEMORY_ECC_ERROR                          0x63
#define IPMI_SENSOR_NUMBER_OEM_INTEL_WINDMILL_CHASSIS_POWER_STATUS                      0x70
#define IPMI_SENSOR_NUMBER_OEM_INTEL_WINDMILL_HOT_SWAP_CONTROLLER_0_STATUS_LOW          0x28
#define IPMI_SENSOR_NUMBER_OEM_INTEL_WINDMILL_HOT_SWAP_CONTROLLER_0_STATUS_HIGH         0x42
#define IPMI_SENSOR_NUMBER_OEM_INTEL_WINDMILL_HOT_SWAP_CONTROLLER_0_STATUS_MFR_SPECIFIC 0x5E
#define IPMI_SENSOR_NUMBER_OEM_INTEL_WINDMILL_HOT_SWAP_CONTROLLER_0_STATUS_INPUT        0x9F

/* Intel S2600KP
 * Intel S2600WT2
 * Intel S2600WTT
 */

/* BMC owned sensors (GID = 0020h) */
#define IPMI_SENSOR_NUMBER_OEM_INTEL_POWER_UNIT_STATUS                                   0x01
#define IPMI_SENSOR_NUMBER_OEM_INTEL_POWER_UNIT_REDUNDANCY                               0x02
#define IPMI_SENSOR_NUMBER_OEM_INTEL_IPMI_WATCHDOG                                       0x03
#define IPMI_SENSOR_NUMBER_OEM_INTEL_PHYSICAL_SECURITY                                   0x04
#define IPMI_SENSOR_NUMBER_OEM_INTEL_FP_INTERRUPT                                        0x05
#define IPMI_SENSOR_NUMBER_OEM_INTEL_SMI_TIMEOUT                                         0x06
#define IPMI_SENSOR_NUMBER_OEM_INTEL_SYSTEM_EVENT_LOG                                    0x07
#define IPMI_SENSOR_NUMBER_OEM_INTEL_SYSTEM_EVENT                                        0x08
#define IPMI_SENSOR_NUMBER_OEM_INTEL_BUTTON_SENSOR                                       0x09
#define IPMI_SENSOR_NUMBER_OEM_INTEL_BMC_WATCHDOG                                        0x0A
#define IPMI_SENSOR_NUMBER_OEM_INTEL_VOLTAGE_REGULATOR_WATCHDOG                          0x0B
#define IPMI_SENSOR_NUMBER_OEM_INTEL_FAN_REDUNDANCY                                      0x0C
#define IPMI_SENSOR_NUMBER_OEM_INTEL_SSB_THERMAL_TRIP                                    0x0D
#define IPMI_SENSOR_NUMBER_OEM_INTEL_IO_MODULE_PRESENCE                                  0x0E
#define IPMI_SENSOR_NUMBER_OEM_INTEL_SAS_MODULE_PRESENCE                                 0x0F
#define IPMI_SENSOR_NUMBER_OEM_INTEL_BMC_FIRMWARE_HEALTH                                 0x10
#define IPMI_SENSOR_NUMBER_OEM_INTEL_SYSTEM_AIRFLOW                                      0x11
#define IPMI_SENSOR_NUMBER_OEM_INTEL_FIRMWARE_UPDATE_STATUS                              0x12
#define IPMI_SENSOR_NUMBER_OEM_INTEL_IO_MODULE2_PRESENCE                                 0x13
#define IPMI_SENSOR_NUMBER_OEM_INTEL_BASEBOARD_TEMPERATURE5                              0x14
#define IPMI_SENSOR_NUMBER_OEM_INTEL_BASEBOARD_TEMPERATURE6                              0x15
#define IPMI_SENSOR_NUMBER_OEM_INTEL_IO_MODULE2_TEMPERATURE                              0x16
#define IPMI_SENSOR_NUMBER_OEM_INTEL_PCI_RISER3_TEMPERATURE                              0x17
#define IPMI_SENSOR_NUMBER_OEM_INTEL_PCI_RISER4_TEMPERATURE                              0x18 
#define IPMI_SENSOR_NUMBER_OEM_INTEL_BASEBOARD_TEMPERATURE1                              0x20
#define IPMI_SENSOR_NUMBER_OEM_INTEL_FRONT_PANEL_TEMPERATURE                             0x21
#define IPMI_SENSOR_NUMBER_OEM_INTEL_SSB_TEMPERATURE                                     0x22
#define IPMI_SENSOR_NUMBER_OEM_INTEL_BASEBOARD_TEMPERATURE2                              0x23
#define IPMI_SENSOR_NUMBER_OEM_INTEL_BASEBOARD_TEMPERATURE3                              0x24
#define IPMI_SENSOR_NUMBER_OEM_INTEL_BASEBOARD_TEMPERATURE4                              0x25
#define IPMI_SENSOR_NUMBER_OEM_INTEL_IO_MODULE_TEMPERATURE                               0x26
#define IPMI_SENSOR_NUMBER_OEM_INTEL_PCI_RISER1_TEMPERATURE                              0x27
#define IPMI_SENSOR_NUMBER_OEM_INTEL_IO_RISER_TEMPERATURE                                0x28
#define IPMI_SENSOR_NUMBER_OEM_INTEL_HOT_SWAP_BACK_PLANE1_TEMPERATURE                    0x29  
#define IPMI_SENSOR_NUMBER_OEM_INTEL_HOT_SWAP_BACK_PLANE2_TEMPERATURE                    0x2A
#define IPMI_SENSOR_NUMBER_OEM_INTEL_HOT_SWAP_BACK_PLANE3_TEMPERATURE                    0x2B
#define IPMI_SENSOR_NUMBER_OEM_INTEL_PCI_RISER2_TEMPERATURE                              0x2C
#define IPMI_SENSOR_NUMBER_OEM_INTEL_SAS_MODULE_TEMPERATURE                              0x2D
#define IPMI_SENSOR_NUMBER_OEM_INTEL_EXIT_AIR_TEMPERATURE                                0x2E
#define IPMI_SENSOR_NUMBER_OEM_INTEL_NETWORK_INTERFACE_CONTROLLER_TEMPERATURE            0x2F
#define IPMI_SENSOR_NUMBER_OEM_INTEL_FAN_TACHOMETER_SENSORS_MIN                          0x30
#define IPMI_SENSOR_NUMBER_OEM_INTEL_FAN_TACHOMETER_SENSORS_MAX                          0x3F
#define IPMI_SENSOR_NUMBER_OEM_INTEL_FAN_PRESENT_SENSORS_MIN                             0x40
#define IPMI_SENSOR_NUMBER_OEM_INTEL_FAN_PRESENT_SENSORS_MAX                             0x4F
#define IPMI_SENSOR_NUMBER_OEM_INTEL_POWER_SUPPLY1_STATUS                                0x50
#define IPMI_SENSOR_NUMBER_OEM_INTEL_POWER_SUPPLY2_STATUS                                0x51
#define IPMI_SENSOR_NUMBER_OEM_INTEL_POWER_SUPPLY1_AC_POWER_INPUT                        0x54
#define IPMI_SENSOR_NUMBER_OEM_INTEL_POWER_SUPPLY2_AC_POWER_INPUT                        0x55
#define IPMI_SENSOR_NUMBER_OEM_INTEL_POWER_SUPPLY1_12V_PERCENT_OF_MAXIMUM_CURRENT_OUTPUT 0x58
#define IPMI_SENSOR_NUMBER_OEM_INTEL_POWER_SUPPLY2_12V_PERCENT_OF_MAXIMUM_CURRENT_OUTPUT 0x59
#define IPMI_SENSOR_NUMBER_OEM_INTEL_POWER_SUPPLY1_TEMPERATURE                           0x5C 
#define IPMI_SENSOR_NUMBER_OEM_INTEL_POWER_SUPPLY2_TEMPERATURE                           0x5D
#define IPMI_SENSOR_NUMBER_OEM_INTEL_HARD_DISK_DRIVE15                                   0x60
#define IPMI_SENSOR_NUMBER_OEM_INTEL_HARD_DISK_DRIVE16                                   0x61
#define IPMI_SENSOR_NUMBER_OEM_INTEL_HARD_DISK_DRIVE17                                   0x62
#define IPMI_SENSOR_NUMBER_OEM_INTEL_HARD_DISK_DRIVE18                                   0x63
#define IPMI_SENSOR_NUMBER_OEM_INTEL_HARD_DISK_DRIVE19                                   0x64
#define IPMI_SENSOR_NUMBER_OEM_INTEL_HARD_DISK_DRIVE20                                   0x65
#define IPMI_SENSOR_NUMBER_OEM_INTEL_HARD_DISK_DRIVE21                                   0x66
#define IPMI_SENSOR_NUMBER_OEM_INTEL_HARD_DISK_DRIVE22                                   0x67
#define IPMI_SENSOR_NUMBER_OEM_INTEL_HARD_DISK_DRIVE23                                   0x68
#define IPMI_SENSOR_NUMBER_OEM_INTEL_HOT_SWAP_CONTROLLER1_STATUS                         0x69
#define IPMI_SENSOR_NUMBER_OEM_INTEL_HOT_SWAP_CONTROLLER2_STATUS                         0x6A
#define IPMI_SENSOR_NUMBER_OEM_INTEL_HOT_SWAP_CONTROLLER3_STATUS                         0x6B
#define IPMI_SENSOR_NUMBER_OEM_INTEL_PROCESSOR1_STATUS                                   0x70
#define IPMI_SENSOR_NUMBER_OEM_INTEL_PROCESSOR2_STATUS                                   0x71
#define IPMI_SENSOR_NUMBER_OEM_INTEL_PROCESSOR3_STATUS                                   0x72
#define IPMI_SENSOR_NUMBER_OEM_INTEL_PROCESSOR4_STATUS                                   0x73
#define IPMI_SENSOR_NUMBER_OEM_INTEL_PROCESSOR1_THERMAL_MARGIN                           0x74
#define IPMI_SENSOR_NUMBER_OEM_INTEL_PROCESSOR2_THERMAL_MARGIN                           0x75
#define IPMI_SENSOR_NUMBER_OEM_INTEL_PROCESSOR3_THERMAL_MARGIN                           0x76
#define IPMI_SENSOR_NUMBER_OEM_INTEL_PROCESSOR4_THERMAL_MARGIN                           0x77
#define IPMI_SENSOR_NUMBER_OEM_INTEL_PROCESSOR1_THERMAL_CONTROL_PERCENT                  0x78
#define IPMI_SENSOR_NUMBER_OEM_INTEL_PROCESSOR2_THERMAL_CONTROL_PERCENT                  0x79
#define IPMI_SENSOR_NUMBER_OEM_INTEL_PROCESSOR3_THERMAL_CONTROL_PERCENT                  0x7A
#define IPMI_SENSOR_NUMBER_OEM_INTEL_PROCESSOR4_THERMAL_CONTROL_PERCENT                  0x7B
#define IPMI_SENSOR_NUMBER_OEM_INTEL_PROCESSOR_ERR2_TIMEOUT                              0x7C
#define IPMI_SENSOR_NUMBER_OEM_INTEL_IERR_RECOVERY_DUMP_INFO                             0x7D
#define IPMI_SENSOR_NUMBER_OEM_INTEL_INTERNAL_ERROR                                      0x80
#define IPMI_SENSOR_NUMBER_OEM_INTEL_PROCESSOR_POPULATION_FAULT                          0x82
#define IPMI_SENSOR_NUMBER_OEM_INTEL_PROCESSOR1_DTS_THERMAL_MARGIN                       0x83
#define IPMI_SENSOR_NUMBER_OEM_INTEL_PROCESSOR2_DTS_THERMAL_MARGIN                       0x84
#define IPMI_SENSOR_NUMBER_OEM_INTEL_PROCESSOR3_DTS_THERMAL_MARGIN                       0x85
#define IPMI_SENSOR_NUMBER_OEM_INTEL_PROCESSOR4_DTS_THERMAL_MARGIN                       0x86
#define IPMI_SENSOR_NUMBER_OEM_INTEL_AUTO_CONFIG_STATUS                                  0x87
#define IPMI_SENSOR_NUMBER_OEM_INTEL_VRD_OVER_TEMPERATURE                                0x90
#define IPMI_SENSOR_NUMBER_OEM_INTEL_POWER_SUPPLY1_FAN_TACHOMETER1                       0xA0
#define IPMI_SENSOR_NUMBER_OEM_INTEL_POWER_SUPPLY1_FAN_TACHOMETER2                       0xA1
#define IPMI_SENSOR_NUMBER_OEM_INTEL_INTEL_XEON_PHI_COPROCESSOR_STATUS1                  0xA2
#define IPMI_SENSOR_NUMBER_OEM_INTEL_INTEL_XEON_PHI_COPROCESSOR_STATUS2                  0xA3
#define IPMI_SENSOR_NUMBER_OEM_INTEL_POWER_SUPPLY2_FAN_TACHOMETER1                       0xA4
#define IPMI_SENSOR_NUMBER_OEM_INTEL_POWER_SUPPLY2_FAN_TACHOMETER2                       0xA5
#define IPMI_SENSOR_NUMBER_OEM_INTEL_INTEL_XEON_PHI_COPROCESSOR_STATUS3                  0xA6
#define IPMI_SENSOR_NUMBER_OEM_INTEL_INTEL_XEON_PHI_COPROCESSOR_STATUS4                  0xA7
#define IPMI_SENSOR_NUMBER_OEM_INTEL_PROCESSOR1_DIMM_AGGREGATE_THERMAL_MARGIN1           0xB0
#define IPMI_SENSOR_NUMBER_OEM_INTEL_PROCESSOR1_DIMM_AGGREGATE_THERMAL_MARGIN2           0xB1
#define IPMI_SENSOR_NUMBER_OEM_INTEL_PROCESSOR2_DIMM_AGGREGATE_THERMAL_MARGIN1           0xB2
#define IPMI_SENSOR_NUMBER_OEM_INTEL_PROCESSOR2_DIMM_AGGREGATE_THERMAL_MARGIN2           0xB3
#define IPMI_SENSOR_NUMBER_OEM_INTEL_PROCESSOR3_DIMM_AGGREGATE_THERMAL_MARGIN1           0xB4
#define IPMI_SENSOR_NUMBER_OEM_INTEL_PROCESSOR3_DIMM_AGGREGATE_THERMAL_MARGIN2           0xB5
#define IPMI_SENSOR_NUMBER_OEM_INTEL_PROCESSOR4_DIMM_AGGREGATE_THERMAL_MARGIN1           0xB6
#define IPMI_SENSOR_NUMBER_OEM_INTEL_PROCESSOR4_DIMM_AGGREGATE_THERMAL_MARGIN2           0xB7
#define IPMI_SENSOR_NUMBER_OEM_INTEL_NODE_AUTO_SHUTDOWN_SENSOR                           0xB8
#define IPMI_SENSOR_NUMBER_OEM_INTEL_FAN_TACHOMETER_SENSORS2_MIN                         0xBA
#define IPMI_SENSOR_NUMBER_OEM_INTEL_FAN_TACHOMETER_SENSORS2_MAX                         0xBF
#define IPMI_SENSOR_NUMBER_OEM_INTEL_PROCESSOR1_THERMAL_TRIP                             0xC0
#define IPMI_SENSOR_NUMBER_OEM_INTEL_PROCESSOR2_THERMAL_TRIP                             0xC1
#define IPMI_SENSOR_NUMBER_OEM_INTEL_PROCESSOR3_THERMAL_TRIP                             0xC2
#define IPMI_SENSOR_NUMBER_OEM_INTEL_PROCESSOR4_THERMAL_TRIP                             0xC3
#define IPMI_SENSOR_NUMBER_OEM_INTEL_INTEL_XEON_PHI_COPROCESSOR_THERMAL_MARGIN1          0xC4
#define IPMI_SENSOR_NUMBER_OEM_INTEL_INTEL_XEON_PHI_COPROCESSOR_THERMAL_MARGIN2          0xC5
#define IPMI_SENSOR_NUMBER_OEM_INTEL_INTEL_XEON_PHI_COPROCESSOR_THERMAL_MARGIN3          0xC6
#define IPMI_SENSOR_NUMBER_OEM_INTEL_INTEL_XEON_PHI_COPROCESSOR_THERMAL_MARGIN4          0xC7
#define IPMI_SENSOR_NUMBER_OEM_INTEL_GLOBAL_AGGREGATE_TEMPERATURE_MARGIN1                0xC8
#define IPMI_SENSOR_NUMBER_OEM_INTEL_GLOBAL_AGGREGATE_TEMPERATURE_MARGIN2                0xC9
#define IPMI_SENSOR_NUMBER_OEM_INTEL_GLOBAL_AGGREGATE_TEMPERATURE_MARGIN3                0xCA
#define IPMI_SENSOR_NUMBER_OEM_INTEL_GLOBAL_AGGREGATE_TEMPERATURE_MARGIN4                0xCB
#define IPMI_SENSOR_NUMBER_OEM_INTEL_GLOBAL_AGGREGATE_TEMPERATURE_MARGIN5                0xCC
#define IPMI_SENSOR_NUMBER_OEM_INTEL_GLOBAL_AGGREGATE_TEMPERATURE_MARGIN6                0xCD
#define IPMI_SENSOR_NUMBER_OEM_INTEL_GLOBAL_AGGREGATE_TEMPERATURE_MARGIN7                0xCE
#define IPMI_SENSOR_NUMBER_OEM_INTEL_GLOBAL_AGGREGATE_TEMPERATURE_MARGIN8                0xCF
#define IPMI_SENSOR_NUMBER_OEM_INTEL_BASEBOARD_12V                                       0xD0
#define IPMI_SENSOR_NUMBER_OEM_INTEL_VOLTAGE_FAULT                                       0xD1
#define IPMI_SENSOR_NUMBER_OEM_INTEL_BASEBOARD_TEMPERATURE7                              0xD5
#define IPMI_SENSOR_NUMBER_OEM_INTEL_BASEBOARD_TEMPERATURE8                              0xD6
#define IPMI_SENSOR_NUMBER_OEM_INTEL_BASEBOARD_CMOS_BATTERY                              0xDE
#define IPMI_SENSOR_NUMBER_OEM_INTEL_HOT_SWAP_BACKPLANE4_TEMPERATURE                     0xE0
#define IPMI_SENSOR_NUMBER_OEM_INTEL_REAR_HARD_DISK_DRIVE0_STATUS                        0xE2
#define IPMI_SENSOR_NUMBER_OEM_INTEL_REAR_HARD_DISK_DRIVE1_STATUS                        0xE3
#define IPMI_SENSOR_NUMBER_OEM_INTEL_HARD_DISK_DRIVE0_STATUS                             0xF0 
#define IPMI_SENSOR_NUMBER_OEM_INTEL_HARD_DISK_DRIVE1_STATUS                             0xF1
#define IPMI_SENSOR_NUMBER_OEM_INTEL_HARD_DISK_DRIVE2_STATUS                             0xF2
#define IPMI_SENSOR_NUMBER_OEM_INTEL_HARD_DISK_DRIVE3_STATUS                             0xF3
#define IPMI_SENSOR_NUMBER_OEM_INTEL_HARD_DISK_DRIVE4_STATUS                             0xF4
#define IPMI_SENSOR_NUMBER_OEM_INTEL_HARD_DISK_DRIVE5_STATUS                             0xF5
#define IPMI_SENSOR_NUMBER_OEM_INTEL_HARD_DISK_DRIVE6_STATUS                             0xF6
#define IPMI_SENSOR_NUMBER_OEM_INTEL_HARD_DISK_DRIVE7_STATUS                             0xF7
#define IPMI_SENSOR_NUMBER_OEM_INTEL_HARD_DISK_DRIVE8_STATUS                             0xF8
#define IPMI_SENSOR_NUMBER_OEM_INTEL_HARD_DISK_DRIVE9_STATUS                             0xF9
#define IPMI_SENSOR_NUMBER_OEM_INTEL_HARD_DISK_DRIVE10_STATUS                            0xFA
#define IPMI_SENSOR_NUMBER_OEM_INTEL_HARD_DISK_DRIVE11_STATUS                            0xFB
#define IPMI_SENSOR_NUMBER_OEM_INTEL_HARD_DISK_DRIVE12_STATUS                            0xFC
#define IPMI_SENSOR_NUMBER_OEM_INTEL_HARD_DISK_DRIVE13_STATUS                            0xFD
#define IPMI_SENSOR_NUMBER_OEM_INTEL_HARD_DISK_DRIVE14_STATUS                            0xFE

/* BIOS POST owned sensors (GID = 0001h) */
#define IPMI_SENSOR_NUMBER_OEM_INTEL_BIOS_POST_MEMORY_RAS_CONFIGURATION_STATUS               0x02
#define IPMI_SENSOR_NUMBER_OEM_INTEL_BIOS_POST_POST_ERROR                                    0x06
#define IPMI_SENSOR_NUMBER_OEM_INTEL_BIOS_POST_INTEL_QUICK_PATH_INTERFACE_LINK_WIDTH_REDUCED 0x09
#define IPMI_SENSOR_NUMBER_OEM_INTEL_BIOS_POST_MEMORY_RAS_MODE_SELECT                        0x12
#define IPMI_SENSOR_NUMBER_OEM_INTEL_BIOS_POST_SYSTEM_EVENT                                  0x83

/* BIOS SMI Handler owned sensors (GID = 0033h) */
#define IPMI_SENSOR_NUMBER_OEM_INTEL_BIOS_SMI_MIRRORING_REDUNDANCY_STATE                   0x01
#define IPMI_SENSOR_NUMBER_OEM_INTEL_BIOS_SMI_MEMORY_ECC_ERROR                             0x02
#define IPMI_SENSOR_NUMBER_OEM_INTEL_BIOS_SMI_LEGACY_PCI_ERROR                             0x03
#define IPMI_SENSOR_NUMBER_OEM_INTEL_BIOS_SMI_PCI_EXPRESS_FATAL_ERROR                      0x04
#define IPMI_SENSOR_NUMBER_OEM_INTEL_BIOS_SMI_PCI_EXPRESS_CORRECTABLE_ERROR                0x05
#define IPMI_SENSOR_NUMBER_OEM_INTEL_BIOS_SMI_INTEL_QUICK_PATH_INTERFACE_CORRECTABLE_ERROR 0x06
#define IPMI_SENSOR_NUMBER_OEM_INTEL_BIOS_SMI_INTEL_QUICK_PATH_INTERFACE_FATAL_ERROR       0x07
#define IPMI_SENSOR_NUMBER_OEM_INTEL_BIOS_SMI_SPARING_REDUNDANCY_STATE                     0x11
#define IPMI_SENSOR_NUMBER_OEM_INTEL_BIOS_SMI_MEMORY_PARITY_ERROR                          0x13
#define IPMI_SENSOR_NUMBER_OEM_INTEL_BIOS_SMI_PCI_EXPRESS_FATAL_ERROR2                     0x14
#define IPMI_SENSOR_NUMBER_OEM_INTEL_BIOS_SMI_BIOS_RECOVERY                                0x15
#define IPMI_SENSOR_NUMBER_OEM_INTEL_BIOS_SMI_INTEL_QUICKPATH_INTERFACE_FATAL_ERROR2       0x17

/*
 * Intel Node Manager
 *
 * For Intel Chips, not just Intel Motherboards.  Confirmed for:
 *
 * Intel S5500WB/Penguin Computing Relion 700
 * Intel S2600JF/Appro 512X
 * Inventec 5441/Dell Xanadu II
 * Inventec 5442/Dell Xanadu III
 * Quanta S99Q/Dell FS12-TY
 * Quanta QSSC-S4R/Appro GB812X-CN
 * Intel S2600KP
 * Intel S2600WT2
 * Intel S2600WTT
 */

#define IPMI_SENSOR_NUMBER_OEM_INTEL_ME_FIRMWARE_HEALTH_EVENT                 0x17
#define IPMI_SENSOR_NUMBER_OEM_INTEL_SERVER_PLATFORM_SERVICES_FIRMWARE_HEALTH IPMI_SENSOR_NUMBER_OEM_INTEL_ME_FIRMWARE_HEALTH_EVENT

/* Defined in Spec 2.0, but not in 1.5 */
#define IPMI_SENSOR_NUMBER_OEM_INTEL_NODE_MANAGER_HEALTH_EVENT_SENSOR                 0x19
#define IPMI_SENSOR_NUMBER_OEM_INTEL_NODE_MANAGER_EXCEPTION_EVENT_SENSOR              0x18
#define IPMI_SENSOR_NUMBER_OEM_INTEL_NODE_MANAGER_OPERATIONAL_CAPABILITIES_SENSOR     0x1A
#define IPMI_SENSOR_NUMBER_OEM_INTEL_NODE_MANAGER_ALERT_THRESHOLD_EXCEEDED_SENSOR     0x1B
#define IPMI_SENSOR_NUMBER_OEM_INTEL_NODE_MANAGER_THERMAL_SENSOR_ON_DIMM_SMBUS_STATUS 0x6E

/*******************************************
 * Inventec                                *
 *******************************************/

/*
 * Inventec 5441/Dell Xanadu II
 * Inventec 5442/Dell Xanadu III
 */
/* achu: not official names, named based on use context */
#define IPMI_SENSOR_NUMBER_OEM_INVENTEC_POST_START        0x81
#define IPMI_SENSOR_NUMBER_OEM_INVENTEC_POST_OK           0x85
#define IPMI_SENSOR_NUMBER_OEM_INVENTEC_POST_ERROR_CODE   0x06
#define IPMI_SENSOR_NUMBER_OEM_INVENTEC_PORT80_CODE_EVENT 0x55
#define IPMI_SENSOR_NUMBER_OEM_INVENTEC_MEMORY            0x60

/*******************************************
 * Quanta                                  *
 *******************************************/

/*
 * Quanta S99Q/Dell FS12-TY
 */
#define IPMI_SENSOR_NUMBER_OEM_QUANTA_MEMORY              0x60
#define IPMI_SENSOR_NUMBER_OEM_QUANTA_PCI_SENSORID        0x81
#define IPMI_SENSOR_NUMBER_OEM_QUANTA_QPI_SENSORID        0x82
#define IPMI_SENSOR_NUMBER_OEM_QUANTA_INT_SENSORID        0x83
#define IPMI_SENSOR_NUMBER_OEM_QUANTA_SOFTWARE_NMI        0xA5

/******************************************* 
 * Wistron                                 *
 *******************************************/

/*
 * Wistron / Dell Poweredge C6220
 */

#define IPMI_SENSOR_NUMBER_OEM_WISTRON_PROCESSOR          0x04
#define IPMI_SENSOR_NUMBER_OEM_WISTRON_MEMORY             0x60
#define IPMI_SENSOR_NUMBER_OEM_WISTRON_QPI_SENSOR_ID      0x71
#define IPMI_SENSOR_NUMBER_OEM_WISTRON_INT_SENSOR_ID      0x72
#define IPMI_SENSOR_NUMBER_OEM_WISTRON_PCI_SENSOR_ID      0x73
#define IPMI_SENSOR_NUMBER_OEM_WISTRON_SB_SENSOR_ID       0x77
#define IPMI_SENSOR_NUMBER_OEM_WISTRON_POST_START         0x81
#define IPMI_SENSOR_NUMBER_OEM_WISTRON_POST_END           0x85 
#define IPMI_SENSOR_NUMBER_OEM_WISTRON_POST_ERROR         0x86 
#define IPMI_SENSOR_NUMBER_OEM_WISTRON_BIOS_RECOVERY_FAIL 0x89
#define IPMI_SENSOR_NUMBER_OEM_WISTRON_ME_FAIL            0x8A

#ifdef __cplusplus
}
#endif

#endif /* IPMI_SENSOR_NUMBERS_OEM_SPEC_H */
