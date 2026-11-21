; FUN_005ebf80  005ebf80
005ebf80  PUSH EBP
005ebf81  MOV EBP,ESP
005ebf83  SUB ESP,0x24
005ebf86  MOV dword ptr [EBP + -0x24],ECX
005ebf89  LEA EAX,[EBP + -0x4]
005ebf8c  PUSH EAX
005ebf8d  LEA ECX,[EBP + -0x20]
005ebf90  PUSH ECX
005ebf91  LEA EDX,[EBP + -0xc]
005ebf94  PUSH EDX
005ebf95  LEA EAX,[EBP + -0x8]
005ebf98  PUSH EAX
005ebf99  MOV ECX,dword ptr [EBP + -0x24]
005ebf9c  CALL 0x005ec060
005ebfa1  MOV ECX,dword ptr [EBP + -0x8]
005ebfa4  MOV dword ptr [EBP + -0x1c],ECX
005ebfa7  MOV EDX,dword ptr [EBP + -0xc]
005ebfaa  MOV dword ptr [EBP + -0x18],EDX
005ebfad  MOV EAX,dword ptr [EBP + -0x24]
005ebfb0  MOV ECX,dword ptr [EBP + -0x24]
005ebfb3  MOV EDX,dword ptr [EAX + 0x18]
005ebfb6  SUB EDX,dword ptr [ECX + 0x10]
005ebfb9  SUB EDX,dword ptr [EBP + -0x20]
005ebfbc  MOV dword ptr [EBP + -0x14],EDX
005ebfbf  MOV EAX,dword ptr [EBP + -0x24]
005ebfc2  MOV ECX,dword ptr [EBP + -0x24]
005ebfc5  MOV EDX,dword ptr [EAX + 0x1c]
005ebfc8  SUB EDX,dword ptr [ECX + 0x14]
005ebfcb  SUB EDX,dword ptr [EBP + -0x4]
005ebfce  MOV dword ptr [EBP + -0x10],EDX
005ebfd1  MOV EAX,dword ptr [EBP + 0x8]
005ebfd4  MOV ECX,dword ptr [EBP + -0x1c]
005ebfd7  MOV dword ptr [EAX],ECX
005ebfd9  MOV EDX,dword ptr [EBP + -0x18]
005ebfdc  MOV dword ptr [EAX + 0x4],EDX
005ebfdf  MOV ECX,dword ptr [EBP + -0x14]
005ebfe2  MOV dword ptr [EAX + 0x8],ECX
005ebfe5  MOV EDX,dword ptr [EBP + -0x10]
005ebfe8  MOV dword ptr [EAX + 0xc],EDX
005ebfeb  MOV EAX,dword ptr [EBP + 0x8]
005ebfee  MOV ESP,EBP
005ebff0  POP EBP
005ebff1  RET 0x4
