#ifndef RBC_CONST_H_7YXZF39S33__
#define RBC_CONST_H_7YXZF39S33__

#include <spc2_const.h>

/* SCSI operation codes */
/* Additional commands for RBC */

#define SCSI_CMD_FORMAT_UNIT			0x04
#define SCSI_CMD_READ_10			0x28
#define SCSI_CMD_READ_CAPACITY			0x25
#define SCSI_CMD_START_STOP_UNIT		0x1B
#define SCSI_CMD_SYNCHRONIZE_CACHE		0x35
#define SCSI_CMD_TEST_UNIT_READY		0x00
#define SCSI_CMD_VERIFY_10			0x2F
#define SCSI_CMD_WRITE_10			0x2A

/* Status codes */
/* From SAM-2 */
#define SCSI_STATUS_GOOD			0x00
#define SCSI_STATUS_CHECK_CONDITION		0x02
#define SCSI_STATUS_CONDITION _MET		0x04
#define SCSI_STATUS_BUSY			0x08 
#define SCSI_STATUS_INTERMEDIATE		0x10 
#define SCSI_STATUS_INTERMEDIATE_CONDITION_MET	0x14
#define SCSI_STATUS_RESERVATION_CONFLICT	0x18
#define SCSI_STATUS_TASK_SET_FULL		0x28
#define SCSI_STATUS_ACA_ACTIVE			0x30
#define SCSI_STATUS_TASK_ABORTED		0x40

/* Sense keys */
#define SCSI_SENSE_KEY_NO_SENSE		0x0
#define SCSI_SENSE_KEY_RECOVERED_ERROR	0x1
#define SCSI_SENSE_KEY_NOT_READY	0x2
#define SCSI_SENSE_KEY_MEDIUM_ERROR	0x3
#define SCSI_SENSE_KEY_HARDWARE_ERROR	0x4
#define SCSI_SENSE_KEY_ILLEGAL_REQUEST	0x5
#define SCSI_SENSE_KEY_UNIT_ATTENTION	0x6
#define SCSI_SENSE_KEY_DATA_PROTECT	0x7
#define SCSI_SENSE_KEY_BLANK_CHECK	0x8
#define SCSI_SENSE_KEY_VENDOR_SPECIFIC	0x9
#define SCSI_SENSE_KEY_COPY_ABORTED	0xA
#define SCSI_SENSE_KEY_ABORTED_COMMAND	0xB
#define SCSI_SENSE_KEY_VOLUME_OVERFLOW	0xD
#define SCSI_SENSE_KEY_MISCOMPARE	0xE

/* Additional sense codes */
#define SCSI_ASC_NO_SENSE 0x0000
#define SCSI_ASC_INVALID_COMMAND_OPERATION 0x2000
#define SCSI_ASC_INVALID_FIELD_IN_PARAMETER_LIST 0x2600

#define SCSI_ASC_INVALID_FIELD_IN_CDB 0x2400

/* RBC mode page */
#define SCSI_MODE_RBC_DEVICE_PAGE 0x06
#define SCSI_MODE_WCD 0x01
#define SCSI_MODE_READD 0x08
#define SCSI_MODE_WRITED 0x04
#define SCSI_MODE_FORMATD 0x02
#define SCSI_MODE_LOCKD 0x01

/* WRITE(10) command flags */

#define SCSI_WRITE_FUA 0x08

#endif /* RBC_CONST_H_7YXZF39S33__ */
