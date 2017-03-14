#ifndef __USB_HID_HEADER__
#define __USB_HID_HEADER__ 

#include <fltKernel.h> 
#include "local.h"

NTSTATUS 
InitHidClientPdoList(
	PHID_DEVICE_LIST* device_object_list,
	PULONG size);

BOOLEAN IsHidDevicePipe(
	_In_ TChainListHeader* header,
	_In_ USBD_PIPE_HANDLE handle,
	_Out_ PHID_DEVICE_NODE* node);

NTSTATUS 
FreeHidClientPdoList();

NTSTATUS
ExtractKeyboardData(
	_In_	 PHIDP_COLLECTION_DESC collectionDesc,
	_In_	 HIDP_REPORT_TYPE type,
	_Inout_  EXTRACTDATA* ExtractedData
);

NTSTATUS
ExtractMouseData(
	PHIDP_COLLECTION_DESC collectionDesc,
	HIDP_REPORT_TYPE type,
	EXTRACTDATA* ExtractedData
);
 
VOID 
DumpChannel(
	PHIDP_COLLECTION_DESC collectionDesc, 
	HIDP_REPORT_TYPE type,
	ULONG Flags
);

VOID 
DumpReport(
	HIDP_DEVICE_DESC* report
);


#endif