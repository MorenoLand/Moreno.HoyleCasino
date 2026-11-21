; FUN_005bea69  005bea69
005bea69  MOV dword ptr [EBP + -0x4],0xffffffff
005bea70  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005bea76  CMP dword ptr [EAX + 0x4],0x0
005bea7a  JNZ 0x005bea88
005bea7c  MOV dword ptr [EBP + 0xfffffdd0],0x0
005bea86  JMP 0x005beaa3
005bea88  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005bea8e  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005bea94  MOV EAX,dword ptr [ECX + 0x8]
005bea97  SUB EAX,dword ptr [EDX + 0x4]
005bea9a  SAR EAX,0x2
005bea9d  MOV dword ptr [EBP + 0xfffffdd0],EAX
005beaa3  MOV ECX,dword ptr [EBP + 0x10]
005beaa6  ADD ECX,dword ptr [EBP + 0xfffffdd0]
005beaac  MOV dword ptr [EBP + 0x10],ECX
005beaaf  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005beab5  CMP dword ptr [EDX + 0x4],0x0
005beab9  JZ 0x005beb36
005beabb  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005beac1  MOV ECX,dword ptr [EAX + 0x8]
005beac4  MOV dword ptr [EBP + 0xffffff10],ECX
005beaca  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005bead0  MOV EAX,dword ptr [EDX + 0x4]
005bead3  MOV dword ptr [EBP + 0xffffff14],EAX
005bead9  MOV ECX,dword ptr [EBP + 0xffffff10]
005beadf  MOV dword ptr [EBP + 0xffffff18],ECX
005beae5  MOV EDX,dword ptr [EBP + 0xffffff14]
005beaeb  MOV dword ptr [EBP + 0xffffff1c],EDX
005beaf1  MOV AL,byte ptr [EBP + 0xffffff22]
005beaf7  MOV byte ptr [EBP + 0xffffff23],AL
005beafd  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005beb03  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005beb09  MOV EAX,dword ptr [ECX + 0xc]
005beb0c  SUB EAX,dword ptr [EDX + 0x4]
005beb0f  SAR EAX,0x2
005beb12  MOV dword ptr [EBP + 0xffffff08],EAX
005beb18  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005beb1e  MOV EDX,dword ptr [ECX + 0x4]
005beb21  MOV dword ptr [EBP + 0xffffff0c],EDX
005beb27  MOV EAX,dword ptr [EBP + 0xffffff0c]
005beb2d  PUSH EAX
005beb2e  CALL 0x00686cae
005beb33  ADD ESP,0x4
005beb36  MOV ECX,dword ptr [EBP + -0x18]
005beb39  MOV EDX,dword ptr [EBP + -0x20]
005beb3c  LEA EAX,[EDX + ECX*0x4]
005beb3f  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005beb45  MOV dword ptr [ECX + 0xc],EAX
005beb48  MOV EDX,dword ptr [EBP + 0x10]
005beb4b  MOV EAX,dword ptr [EBP + -0x20]
005beb4e  LEA ECX,[EAX + EDX*0x4]
005beb51  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005beb57  MOV dword ptr [EDX + 0x8],ECX
005beb5a  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005beb60  MOV ECX,dword ptr [EBP + -0x20]
005beb63  MOV dword ptr [EAX + 0x4],ECX
005beb66  JMP 0x005bedf1
